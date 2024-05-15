class w_agent extends uvm_agent;
    w_sequencer seqr;
    w_driver drv;
    w_monitor mon;

    uvm_analysis_port #(w_sequence_item) ap;

    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    extern virtual function void build_phase(uvm_phase phase);
    extern virtual function void connect_phase(uvm_phase phase);

    `uvm_component_utils(w_agent)

endclass

function void w_agent::build_phase(uvm_phase phase);
    super.build_phase(phase);
    seqr = w_sequencer::type_id::create("seqr", this);
    drv = w_driver::type_id::create("drv", this);
    mon = w_monitor::type_id::create("mon", this);
endfunction

function void w_agent::connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    drv.seq_item_port.connect(seqr.seq_item_export);
    ap = mon.ap;
endfunction

class r_agent extends uvm_agent;
    r_sequencer seqr;
    r_driver drv;
    r_monitor mon;

    uvm_analysis_port #(r_sequence_item) ap;

    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    extern virtual function void build_phase(uvm_phase phase);
    extern virtual function void connect_phase(uvm_phase phase);

    `uvm_component_utils(r_agent)

endclass

function void r_agent::build_phase(uvm_phase phase);
    super.build_phase(phase);
    seqr = r_sequencer::type_id::create("seqr", this);
    drv = r_driver::type_id::create("drv", this);
    mon = r_monitor::type_id::create("mon", this);
endfunction

function void r_agent::connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    drv.seq_item_port.connect(seqr.seq_item_export);
    ap = mon.ap;
endfunction