class case0_test extends fifo_base_test;
    case0_sequence seq0; //= new("seq0");
    function new(string name, uvm_component parent = null);
        super.new(name, parent);
    endfunction

    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
    endfunction

    task run_phase(uvm_phase phase);
        phase.raise_objection(this);
        seq0.start(env.v_seqr);
        phase.drop_objection(this);
    endtask

    `uvm_component_utils(case0_test)

endclass