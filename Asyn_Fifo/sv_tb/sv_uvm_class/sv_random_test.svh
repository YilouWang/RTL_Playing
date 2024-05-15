class fifo_random_test extends fifo_base_test;

    `uvm_component_utils(fifo_random_test)

    random_seq seq;

    function new(string name = "randome_seq", uvm_component parent = null);
        super.new(name, parent);
    endfunction : new

    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        //seq = random_seq::type_id::create("random_seq");
    endfunction

    task run_phase(uvm_phase phase);
        phase.raise_objection(this);
        seq.start(env.agent.sequencer);
        phase.drop_objection(this);
    endtask

endclass : fifo_random_test