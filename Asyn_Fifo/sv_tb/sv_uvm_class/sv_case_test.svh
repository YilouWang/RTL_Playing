class case0_test extends fifo_base_test;
    int seed;
    case0_sequence seq0 = new("seq0");
    function new(string name, uvm_component parent = null);
        super.new(name, parent);
    endfunction

    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        if(!uvm_config_db#(int)::get(null, "", "seed", seed))
            seed = 1;
        `uvm_info("my_case0_test", $sformatf("Random seed: %0d", seed), UVM_LOW)
    endfunction

    task run_phase(uvm_phase phase);
        phase.raise_objection(this);
        $display("Case0 Starts!!!");
        seq0.start(env.v_seqr);
        $display("Case0 Ends!!!");
        phase.drop_objection(this);
    endtask

    `uvm_component_utils(case0_test)

endclass