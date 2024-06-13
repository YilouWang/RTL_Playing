
class fifo_base_test extends uvm_test;

    `uvm_component_utils(fifo_base_test)

    fifo_env env;

    function new(string name = "fifo_base_test", uvm_component parent = null);
        super.new(name, parent);
    endfunction : new

    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        env = fifo_env::type_id::create("env", this);
        `ifdef VERILATOR
        `else
        uvm_top.set_timeout(1000000ns, 0);
        `endif
    endfunction : build_phase



    virtual function void end_of_elaboration();
        $display("######################");
        print();
        $display("######################");
    endfunction

    function void report_phase(uvm_phase phase);
        uvm_report_server svr;
        super.report_phase(phase);
        // For Riscv Summit
        generate_report();
        // For Riscv Summit
        svr = uvm_report_server::get_server();
        if (svr.get_severity_count(UVM_FATAL) + svr.get_severity_count(UVM_ERROR)>0) begin
            `uvm_info(get_type_name(), "---------------------------", UVM_NONE)
            `uvm_info(get_type_name(), "-----    Test Fail!   -----", UVM_NONE)
            `uvm_info(get_type_name(), "---------------------------", UVM_NONE)
        end
        else begin
            `uvm_info(get_type_name(), "---------------------------", UVM_NONE)
            `uvm_info(get_type_name(), "-----    Test Pass!   -----", UVM_NONE)
            `uvm_info(get_type_name(), "---------------------------", UVM_NONE)
        end
    endfunction

    function void generate_report();
        string report;
        report = "Company: PlanV\n";
        report = {report, "Project: OSVISE\n"};
        report = {report, "Current Status: Simple UVM testbench running in Verilator\n"};
        report = {report, "Objectives: Develop UVM-based testbench for ISAX core extensions RTL verification and extend Verilator for UVM simulation\n"};
        report = {report, "\nWe are eager to connect and share knowledge with interested parties. Feel free to reach out and engage with us for more insights and discussions."};

        $display("***************************");
        $display("Project Report:");
        $display("%s", report);
        $display("***************************");
    endfunction

endclass : fifo_base_test