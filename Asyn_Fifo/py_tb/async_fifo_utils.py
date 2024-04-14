import cocotb
from cocotb.triggers import FallingEdge, RisingEdge, ClockCycles
from cocotb.queue import QueueEmpty, Queue
import enum
import logging

from pyuvm import utility_classes

logging.basicConfig(level=logging.NOTSET)
logger = logging.getLogger()
logger.setLevel(logging.DEBUG)

def get_int(signal):
    try:
        sig = int(signal.value)
    except ValueError:
        sig = 0
    return sig

class AsyncFifo:
    def __init__(self, depth):
        self.depth = depth
        self.buffer = [None] * self.depth
        self.w_ptr = 0
        self.r_ptr = 0
        self.count = 0
    
    def write(self, data):
        if self.is_full():
            return False
        self.buffer[self.w_ptr] = data
        self.w_ptr = (self.w_ptr + 1) % self.depth
        self.count += 1
        return True

    def read(self):
        if self.is_empty:
            return None
        data = self.buffer[self.r_ptr]
        self.buffer[self.r_ptr] = None
        self.r_ptr = (self.r_ptr + 1) % self.depth
        self.count -= 1
        return data
    
    def is_full(self):
        return self.count == self.depth

    def is_empty(self):
        return self.count == 0
    
    def status(self):
        return {
            "full": self.is_full(),
            "empty": self.is_empty(),
            "w_ptr": self.w_ptr,
            "r_ptr": self.r_ptr,
            "count": self.count
        }

class Async_fifo_Bfm(metaclass=utility_classes.Singleton):
    def __init__(self):
        self.dut = cocotb.top
        self.driver_w_queue = Queue(maxsize=1)
        self.driver_r_queue = Queue(maxsize=1)
        self.cmd_mon_queue = Queue(maxsize=0)
        self.result_mon_queue = Queue(maxsize=0)

    async def push_with_delay(self, data, operation, delay):
        command_tuple = (data, operation)
        for _ in range(delay):
            await FallingEdge(self.dut.w_clk)
        # print("W_delay finished")
        await self.driver_w_queue.put(command_tuple)

    async def pop_with_delay(self, operation, delay):
        for _ in range(delay):
            await FallingEdge(self.dut.r_clk)
        # print("R_delay finished")
        await self.driver_r_queue.put(operation)

    async def get_cmd(self):
        cmd = await self.cmd_mon_queue.get()
        return cmd
    
    async def get_result(self):
        result = await self.result_mon_queue.get()
        return result
    
    async def r_reset(self):
        await FallingEdge(self.dut.r_clk)
        self.dut.r_en.value = 0
        await FallingEdge(self.dut.r_clk)
        self.dut.r_rst.value = 1
        await FallingEdge(self.dut.r_clk)

    async def w_reset(self):
        await FallingEdge(self.dut.w_clk)
        self.dut.w_data.value = 0
        self.dut.w_en.value = 0
        await FallingEdge(self.dut.w_clk)
        self.dut.w_rst.value = 1
        await FallingEdge(self.dut.w_clk)

    async def driver_w_bfm(self):
        self.dut.w_data.value = 0
        self.dut.w_en.value = 0
        while True:
            await RisingEdge(self.dut.w_clk)
            full = get_int(self.dut.w_full)
            self.dut.w_en.value = 0
            try:
                (data, operation) = self.driver_w_queue.get_nowait()
                # print("check and set w_en, w_data")
                if(full == 0 and operation == 'write'):
                    self.dut.w_data.value = data
                    self.dut.w_en.value = 1
                else:
                    self.dut.w_en.value = 0
                    self.dut.w_data.value = 0
            except QueueEmpty:
                pass
    
    async def driver_r_bfm(self):
        self.dut.r_en.value = 0
        while True:
            await RisingEdge(self.dut.r_clk)
            empty = get_int(self.dut.r_empty)
            self.dut.r_en.value = 0
            try:
                operation = self.driver_r_queue.get_nowait()
                # print("check and set r_en")
                if empty == 0 and operation == 'read':
                    self.dut.r_en.value = 1
                else:
                    self.dut.r_en.value = 0
            except QueueEmpty:
                pass

    async def cmd_mon_bfm(self):
        while True:
            await FallingEdge(self.dut.w_clk)
            w_en = get_int(self.dut.w_en)
            if w_en == 1:
                cmd = get_int(self.dut.w_data)
                self.cmd_mon_queue.put_nowait(cmd)
    
    async def result_mon_bfm(self):
        while True:
            await FallingEdge(self.dut.r_clk)
            r_en = get_int(self.dut.r_en)
            if r_en == 1:
                result = get_int(self.dut.r_data)
                self.result_mon_queue.put_nowait(result)

    async def wait_w_clk_cycles(self, n):
        await(ClockCycles(self.dut.w_clk, n, True))

    async def wait_r_clk_cycles(self, n):
        await(ClockCycles(self.dut.r_clk, n, True))

    def start_bfm(self):
        cocotb.start_soon(self.driver_r_bfm())
        cocotb.start_soon(self.driver_w_bfm())
        cocotb.start_soon(self.cmd_mon_bfm())
        cocotb.start_soon(self.result_mon_bfm())
