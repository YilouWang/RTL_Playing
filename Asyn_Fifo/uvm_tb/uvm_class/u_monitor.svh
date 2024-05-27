
class u_input_flow_monitor extends uvm_monitor;
    virtual af_bfm bfm;

    uvm_analysis_port #(u_input_flow_sequence_item) ap;
    `uvm_component_utils(u_input_flow_monitor)

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction : new

    function void build_phase(uvm_phase phase);
        if(!uvm_config_db #(virtual af_bfm)::get(null, "*", "bfm", bfm))
            `uvm_fatal("I_MONITOR", "i_mon::Failed to get BFM.")
        ap = new("ap", this);
    endfunction : build_phase

    function void connect_phase(uvm_phase phase);
        bfm.i_mon_h = this;
    endfunction : connect_phase

    function void write_to_monitor(logic[FIFO_DATA_WIDTH-1:0] w_data);
        u_input_flow_sequence_item push;
        `uvm_info("I_MON", $sformatf("i_mon::MONITOR::w_data: %2h", w_data), UVM_LOW);
        push = new("push");
        push.w_data = w_data;
        ap.write(push);
    endfunction : write_to_monitor

endclass : u_input_flow_monitor

class u_output_flow_monitor extends uvm_monitor;
    `uvm_component_utils(u_output_flow_monitor)

    virtual af_bfm bfm;
    uvm_analysis_port #(u_output_flow_sequence_item) ap;

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction : new

    function void build_phase(uvm_phase phase);
        if(!uvm_config_db #(virtual af_bfm)::get(null, "*", "bfm", bfm))
            `uvm_fatal("O_MON", "o_mon::Failed to get BFM.");
        ap = new("ap", this);
    endfunction : build_phase

    function void connect_phase(uvm_phase phase);
        bfm.o_mon_h = this;
    endfunction : connect_phase

    function void write_to_monitor(logic [FIFO_DATA_WIDTH-1:0] r_data);
        u_output_flow_sequence_item o_tr;
        `uvm_info("O_MON", $sformatf("o_mon::MONITOR::r_data: %2h", r_data), UVM_LOW);
        o_tr = new("o_tr");
        o_tr.r_data = r_data;
        ap.write(o_tr);
    endfunction : write_to_monitor

endclass : u_output_flow_monitor 