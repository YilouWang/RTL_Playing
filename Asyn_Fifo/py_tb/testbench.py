from cocotb.triggers import Join, Combine, Event, First, Timer
from cocotb.queue import QueueEmpty, Queue
from pyuvm import *
import random
import cocotb
import pyuvm
# All testbenches use tinyalu_utils, so store it in a central
# place and add its path to the sys path so we can import it
import sys
from pathlib import Path
sys.path.append(str(Path("..").resolve()))
from async_fifo_utils import Async_fifo_Bfm

# Sequence classes

class SeqItem(uvm_sequence_item):

    def __init__(self, name):
        super().__init__(name)
        self.data = None
        self.operation = None # write or read
        self.nums = 0
    
    def set_write(self, data):
        self.data = data
        self.operation = 'write'

    def set_read(self, data):
        self.data = data
        self.operation = 'read'
    
    def __str__(self):
        return f"{self.operation.upper()} operation with data: {self.data if self.data is not None else 'N/A'}"

    def randomize(self):
        self.operation = 'write'
        self.data = random.randint(0, 255)

class RandomSeq(uvm_sequence):

    async def body(self):
        num_sequence_item = 20
        for i in range(num_sequence_item):
            cmd_tr = SeqItem("cmd_tr")
            await self.start_item(cmd_tr)
            cmd_tr.randomize()
            cmd_tr.nums = num_sequence_item
            # print(cmd_tr.__str__())
            await self.finish_item(cmd_tr)

class TestAllSeq(uvm_sequence):
    async def body(self):
        seqr = ConfigDB().get(None, "", "SEQR")
        random = RandomSeq("random")
        await random.start(seqr)

class Driver(uvm_driver):
    def build_phase(self):
        self.drive_task_finished = Event("drive_task_finished")
        self.count = 0

    def start_of_simulation_phase(self):
        self.bfm = Async_fifo_Bfm()

    async def launch_tb(self):
        await self.bfm.r_reset()
        await self.bfm.w_reset()
        self.bfm.start_bfm()

    async def run_phase(self):
        await self.launch_tb()
        push_task = cocotb.start_soon(self.push_data())
        pop_task = cocotb.start_soon(self.pop_data())
        await First(Join(push_task), Join(pop_task)) # fork ... join_any
        
    async def push_data(self):
        while True:
            seq_item = await self.seq_item_port.get_next_item()
            self.count += 1
            w_delay = random.randint(0, 2)
            print(seq_item.nums, self.count)
            self.logger.info(f"Push: w_data,{seq_item.data} into fifo with a delay, {w_delay}")
            await self.bfm.push_with_delay(seq_item.data, seq_item.operation, w_delay)
            self.seq_item_port.item_done()
            if self.count >= seq_item.nums:
                await self.bfm.wait_r_clk_cycles(50)
                self.drive_task_finished.set()
                print("notified")

    async def pop_data(self):
        while True:
            r_delay = random.randint(0, 5)
            self.logger.info(f"Pop: r_data from fifo with a delay, {r_delay}")
            await self.bfm.pop_with_delay('read', r_delay)
"""
class Coverage(uvm_subscriber):

    def end_of_elaboration_phase(self):
        self.cvg = set()

    def write(self, cmd):
        (_, _, op) = cmd
        self.cvg.add(op)

    def report_phase(self):
        try:
            disable_errors = ConfigDB().get(
                self, "", "DISABLE_COVERAGE_ERRORS")
        except UVMConfigItemNotFound:
            disable_errors = False
        if not disable_errors:
            if len(set(Ops) - self.cvg) > 0:
                self.logger.error(
                    f"Functional coverage error. Missed: {set(Ops)-self.cvg}")
                assert False
            else:
                self.logger.info("Covered all operations")
                assert True

"""
class Scoreboard(uvm_component):

    def build_phase(self):
        self.expected_fifo = uvm_tlm_analysis_fifo("expected_fifo", self)
        self.actual_fifo = uvm_tlm_analysis_fifo("actual_fifo", self)
        self.expected_get_port = uvm_get_port("expected_get_port", self)
        self.actual_get_port = uvm_get_port("actual_get_port", self)
        self.expected_export = self.expected_fifo.analysis_export
        self.actual_export = self.actual_fifo.analysis_export

    def connect_phase(self):
        self.expected_get_port.connect(self.expected_fifo.get_export)
        self.actual_get_port.connect(self.actual_fifo.get_export)

    def check_phase(self):
        passed = True
        try:
            self.errors = ConfigDB().get(self, "", "CREATE_ERRORS")
        except UVMConfigItemNotFound:
            self.errors = False
        while self.actual_get_port.can_get():
            _, actual_result = self.actual_get_port.try_get()
            success, expected_result = self.expected_get_port.try_get()
            if not success:
                self.logger.critical(f"No found expected result (w_data) !")
            else:
                if expected_result == actual_result:
                    self.logger.info(f"PASSED: w_data : {expected_result} = r_data : {actual_result}")
                else:
                    self.logger.error(f"FAILED: w_data : {expected_result} != r_data : {actual_result}")
                    passed = False
        assert passed


class Monitor(uvm_component):
    def __init__(self, name, parent, method_name):
        super().__init__(name, parent)
        self.method_name = method_name

    def build_phase(self):
        self.ap = uvm_analysis_port("ap", self)
        self.bfm = Async_fifo_Bfm()
        self.get_method = getattr(self.bfm, self.method_name)

    async def run_phase(self):
        while True:
            datum = await self.get_method()
            self.logger.debug(f"MONITORED {datum}")
            self.ap.write(datum)


class AluEnv(uvm_env):

    def build_phase(self):
        self.seqr = uvm_sequencer("seqr", self)
        ConfigDB().set(None, "*", "SEQR", self.seqr)
        self.driver = Driver.create("driver", self)
        self.cmd_mon = Monitor("cmd_mon", self, "get_cmd")
        self.result_mon = Monitor("result_mon", self, "get_result")
        #self.coverage = Coverage("coverage", self)
        self.scoreboard = Scoreboard("scoreboard", self)

    def connect_phase(self):
        self.driver.seq_item_port.connect(self.seqr.seq_item_export)
        self.cmd_mon.ap.connect(self.scoreboard.expected_export)
        #self.cmd_mon.ap.connect(self.coverage.analysis_export)
        self.result_mon.ap.connect(self.scoreboard.actual_export)


@pyuvm.test()
class AluTest(uvm_test):
    """Test ALU with random and max values"""

    def build_phase(self):
        self.env = AluEnv("env", self)

    def end_of_elaboration_phase(self):
        self.test_all = TestAllSeq.create("test_all")

    async def run_phase(self):
        self.raise_objection()
        await self.test_all.start()
        
        await self.env.driver.drive_task_finished.wait()
        
        self.drop_objection()

"""
@pyuvm.test()
class ParallelTest(AluTest):
    # Test ALU random and max forked

    def build_phase(self):
        uvm_factory().set_type_override_by_type(TestAllSeq, TestAllForkSeq)
        super().build_phase()


@pyuvm.test()
class FibonacciTest(AluTest):
    # Run Fibonacci program

    def build_phase(self):
        ConfigDB().set(None, "*", "DISABLE_COVERAGE_ERRORS", True)
        uvm_factory().set_type_override_by_type(TestAllSeq, FibonacciSeq)
        return super().build_phase()


@pyuvm.test(expect_fail=True)
class AluTestErrors(AluTest):
    # Test ALU with errors on all operations

    def start_of_simulation_phase(self):
        ConfigDB().set(None, "*", "CREATE_ERRORS", True)
"""