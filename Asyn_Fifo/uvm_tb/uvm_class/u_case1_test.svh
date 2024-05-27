class u_case1_test extends u_af_base_test;
    `uvm_component_utils(u_case1_test);
    u_runall_sequence u_runall_seq;
    virtual af_bfm bfm;
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction : new

    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        if(!uvm_config_db #(virtual af_bfm)::get(null, "*", "bfm", bfm))
            `uvm_fatal("Case1", "case1_test::Failed to get BFM.")
    endfunction : build_phase

    task run_phase(uvm_phase phase);
        u_runall_seq = new("u_runall_seq");
        phase.raise_objection(this);
        u_runall_seq.start(null);
        bfm.wait_4_rdwr_done();
        $display("%dns: case1_test::Test Done, release the objection", $time);
        phase.drop_objection(this);
    endtask : run_phase
endclass : u_case1_test