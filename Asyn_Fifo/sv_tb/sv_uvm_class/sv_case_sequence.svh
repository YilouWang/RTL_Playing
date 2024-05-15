class case0_sequence extends uvm_sequence;

    `uvm_object_utils(case0_sequence)
    `uvm_declare_p_sequencer(fifo_virtual_sequencer)

    function new(string name = "case0_seq");
        super.new(name);
    endfunction

    extern virtual task body();
    extern virtual task pre_body();
    extern virtual task post_body();

endclass

task case0_sequence::body();
    // obtain an instance of the sequencer through p_sequencer
    r_sequencer r_seqr = p_sequencer.r_seqr;
    w_sequencer w_seqr = p_sequencer.w_seqr;
    r_sequence r_seq; // = new();
    w_sequence w_seq; // = new();
    repeat(7) begin
        if(!w_seq.randomize()) `uvm_error("RAND", "FAILED");
        w_seq.start(w_seqr);
        //`uvm_do_on(w_seq, p_sequencer.w_seqr)
    end
    `uvm_info("case0", "Sent 7 done", UVM_MEDIUM)
    repeat(7) begin
        if(!r_seq.randomize()) `uvm_error("RAND", "FAILED");
        r_seq.start(r_seqr);
        //`uvm_do_on(r_seq, p_sequencer.r_seqr)
    end
    `uvm_info("case0", "Get 7 done", UVM_MEDIUM)
    /*
    repeat(3) begin
        `uvm_do_on(w_seq, p_sequencer.w_seqr)
    end
    `uvm_info("case0", "Sent 3 done", UVM_MEDIUM)
    repeat(3) begin
        `uvm_do_on(r_seq, p_sequencer.r_seqr)
    end
    `uvm_info("case0", "Get 3 done", UVM_MEDIUM)
    */
    #3000;
    `uvm_info("case0", "Body Finished", UVM_MEDIUM)
endtask

task case0_sequence::pre_body();
    //if(starting_phase != null) begin 
    //    starting_phase.raise_objection(this);
    //end
endtask

task case0_sequence::post_body();
    `uvm_info("case0", "Entering post_body", UVM_MEDIUM)
    //if(starting_phase != null) begin 
    //    `uvm_info("case0", "starting_pase is null", UVM_MEDIUM)
    //    starting_phase.drop_objection(this);
    //end
endtask

