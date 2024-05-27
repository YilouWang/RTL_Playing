class u_env extends uvm_env;
    `uvm_component_utils(u_env);

    u_sequencer sqr_h;
    u_coverage cvg_h;
    u_scoreboard scb_h;
    u_driver drv_h;
    u_input_flow_monitor i_mon_h;
    u_output_flow_monitor o_mon_h;

    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction : new

    function void build_phase(uvm_phase phase);
        sqr_h = new("sqr_h", this);
        drv_h = u_driver::type_id::create("drv_h", this);
        i_mon_h = u_input_flow_monitor::type_id::create("i_mon_h", this);
        o_mon_h = u_output_flow_monitor::type_id::create("o_mon_h", this);
        cvg_h = u_coverage::type_id::create("cvg_h", this);
        scb_h = u_scoreboard::type_id::create("scb_h", this);
    endfunction : build_phase

    function void connect_phase(uvm_phase phase);
        drv_h.seq_item_port.connect(sqr_h.seq_item_export);
        i_mon_h.ap.connect(cvg_h.analysis_export);
        i_mon_h.ap.connect(scb_h.i_flow_ff.analysis_export);
        o_mon_h.ap.connect(scb_h.analysis_export);
    endfunction : connect_phase

endclass : u_env