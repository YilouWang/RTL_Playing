#include <stdlib.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vsimple_demo_tb.h"


int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vsimple_demo_tb* top = new Vsimple_demo_tb();

    Verilated::traceEverOn(true); 
    VerilatedVcdC* vcd = new VerilatedVcdC();
    top->trace(vcd, 99);
    vcd->open("output.vcd");

    srand(time(NULL));  // Initialize random seed

    int w_clk_f = 5; // every 5ns, w_clk = ~ w_clk
    int r_clk_f = 7; // every 7ns, r_clk = ~ r_clk

    bool w_clk = false, r_clk = false;

    int w_rst_change1 = (rand() % 10) + 1;
    int w_rst_change2 = w_rst_change1 + 10;  // set an interval
    int r_rst_change1 = (rand() % 10) + 1;
    int r_rst_change2 = r_rst_change1 + 20;  // set an interval

    top->w_rst = 1;
    top->r_rst = 1;
    top->eval();
    vcd->dump(0);

    // Simulation loop
    for (int t = 1; t < 10000; t++) {

        // Toggle write clock every 5 units
        if (t % w_clk_f == 0) {
            w_clk = !w_clk;
            top->w_clk = w_clk;
            if (w_clk) {  // Perform write operations at positive edge of w_clk
                //if (rand() % 2 == 0) {  // Randomly perform write operations
                    top->w_en = 1;
                    top->w_data = rand() % 256;
                //} else {
                //    top->w_en = 0;
                //}
            }
        }

        // Toggle read clock every 7 units
        if (t % r_clk_f == 0) {
            r_clk = !r_clk;
            top->r_clk = r_clk;
            if (r_clk) {  // Perform read operations at positive edge of r_clk
                // top->r_en = (rand() % 4 == 0);  // Randomly enable read
            }
        }

        // Toggle reset signals randomly
        if (t == w_rst_change1 || t == w_rst_change2) {
            top->w_rst = !top->w_rst;
        }
        if (t == r_rst_change1 || t == r_rst_change2) {
            top->r_rst = !top->r_rst;
        }

        // Evaluate model
        top->eval();
        vcd->dump(t);

        // Simple delay to make simulation time meaningful
        if (t % 1000 == 999) {
            std::cout << "Simulated " << (t + 1) << " time units\n";
        }
    }

    vcd->close();
    delete vcd;
    delete top;
    return 0;
}



/*
#define MAX_SIM_TIME 20
vluint64_t sim_time = 0;

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vsimple_demo_tb* top = new Vsimple_demo_tb;

    Verilated::traceEverOn(true);  // 开启波形跟踪
    VerilatedVcdC* vcd = new VerilatedVcdC;
    top->trace(vcd, 99);  // 设置跟踪的深度
    vcd->open("output.vcd");  // 打开VCD文件用于写入

    while (!Verilated::gotFinish()) {
        top->eval();  // 执行一步仿真
        vcd->dump(sim_time);  // 写入每个仿真步骤的变化
        sim_time++;  // 增加仿真时间
    }
    vcd->close();  // 关闭VCD文件
    delete top;
    delete vcd;
    return 0;
}
*/

