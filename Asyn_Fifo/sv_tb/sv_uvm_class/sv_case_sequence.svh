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
    r_sequence r_seq;
    w_sequence w_seq;
    `ifdef VERILATOR
    //fork
        //begin
            // w_sequence w_seq_local = w_seq;
            `uvm_info("case0", "Write 8.", UVM_MEDIUM)
            repeat(10) begin
                w_seq = w_sequence::type_id::create("w_seq");
                `uvm_do(w_seq, w_seqr)
                //if(!w_seq.randomize()) `uvm_error("RAND", "FAILED");
                //w_seq.start(w_seqr);
                //w_seq.start(p_sequencer.w_seqr);
            end
        //end

        //begin
            `uvm_info("case0", "Read 8.", UVM_MEDIUM)
            repeat(10) begin
                r_seq = r_sequence::type_id::create("r_seq");
                if(!r_seq.randomize()) `uvm_error("RAND", "FAILED");
                r_seq.start(p_sequencer.r_seqr);
            end
        //end
    //join_none
    `else
    `uvm_info("case0", "Write 8 and Read 8.", UVM_MEDIUM)
    // /*
    repeat(8) begin
        w_seq = w_sequence::type_id::create("w_seq");
        if(!w_seq.randomize()) `uvm_error("RAND", "FAILED");
        w_seq.start(p_sequencer.w_seqr);
    end
    repeat(8) begin
        r_seq = r_sequence::type_id::create("r_seq");
        if(!r_seq.randomize()) `uvm_error("RAND", "FAILED");
            r_seq.start(r_seqr);
    end
    // */
    `uvm_info("case0", "Concurrently Write and Read.", UVM_MEDIUM)
    fork
        begin
        repeat(200) `uvm_do_on(w_seq, p_sequencer.w_seqr)
        end

        begin
        repeat(200) `uvm_do_on(r_seq, p_sequencer.r_seqr)
        end
    join_none
    `endif

    #20000ns;
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

