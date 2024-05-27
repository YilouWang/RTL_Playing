class u_random_sequence extends uvm_sequence #(u_input_flow_sequence_item);
    `uvm_object_utils(u_random_sequence);

    u_input_flow_sequence_item fifo_push;

    function new(string name = "u_random_sequence");
        super.new(name);
    endfunction : new

    integer i = 0;
    task body();
        repeat(TEST_NUM_ITER) begin : random_loop
            $display("%dns : u_random_sequence::iter# %2d", $time, i);
            fifo_push = u_input_flow_sequence_item::type_id::create("fifo_push");
            start_item(fifo_push);
            assert(fifo_push.randomize());
            finish_item(fifo_push);
            i++;
        end : random_loop
    endtask : body

endclass : u_random_sequence
/*
class u_write_full_and_read_empty_sequence extends uvm_sequence #(u_input_flow_sequence_item); 
    `uvm_object_utils(u_write_full_and_read_empty_sequence);

    u_input_flow_sequence_item fifo_push;

    function new(string name = "u_write_full_and_read_empty_sequence");
        super.new(name);
    endfunction : new

    task body();
        fifo_push = u_input_flow_sequence_item::type_id::create("fifo_push");
        start_item(fifo_push);
        fifo_push.wf_re = 1'b1;
        finish_item(fifo_push);
    endtask : body
endclass : u_write_full_and_read_empty_sequence
*/

class u_runall_sequence extends uvm_sequence #(uvm_sequence_item);

    `uvm_object_utils(u_runall_sequence);

    protected u_random_sequence random;
    protected u_sequencer sqr_h;
    protected uvm_component uvm_comp_h;

    function new( string name = "u_runall_sequence");
        super.new(name);


        uvm_comp_h = uvm_top.find("*.env_h.sqr_h");

        if(uvm_comp_h == null)
            `uvm_fatal("RUNALL_SEQ", "FAILED to get the seqr")

        if(!$cast(sqr_h, uvm_comp_h))
            `uvm_fatal("RUNALL_SEQ", "Failed to cast from uvm_comp_h")

        random = u_random_sequence::type_id::create("random");
    endfunction : new

    task body();
        random.start(sqr_h);
    endtask : body

endclass : u_runall_sequence