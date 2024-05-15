
class fifo_env extends uvm_env;

    w_agent w_agt;
    r_agent r_agt;

    fifo_scoreboard scb;
    fifo_virtual_sequencer v_seqr;

    `uvm_component_utils(fifo_env)

    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        w_agt = w_agent::type_id::create("w_agt", this);
        r_agt = r_agent::type_id::create("r_agt", this);
        // fifo_w_agent.is_active = UVM_ACTIVE;
        // fifo_r_agent.is_active = UVM_PASSIVE;
        scb = fifo_scoreboard::type_id::create("scb", this);
        v_seqr = fifo_virtual_sequencer::type_id::create("v_seqr", this);
    endfunction

    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        w_agt.ap.connect(scb.act_fifo.analysis_export);
        r_agt.ap.connect(scb.exp_export);
        v_seqr.w_seqr = w_agt.seqr;
        v_seqr.r_seqr = r_agt.seqr;
        // uvm_config_db #(w_sequencer)::set(this, "*", "w_seqr", w_agt.seqr);
        // uvm_config_db #(r_sequencer)::set(this, "*", "r_seqr", r_agt.seqr);
    endfunction
endclass