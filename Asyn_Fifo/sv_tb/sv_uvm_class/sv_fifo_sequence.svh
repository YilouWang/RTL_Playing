class r_sequence extends uvm_sequence #(r_sequence_item);

    function new(string name = "r_sequence");
        super.new(name);
    endfunction

    extern virtual task body();
    extern virtual task pre_body();
    extern virtual task post_body();

    `uvm_object_utils(r_sequence)
endclass

task r_sequence::body();
    r_sequence_item r_tr;
    $display("r_sequence randomize and sent");
    `uvm_do(r_tr)
    /*
    $display("Ka Zai");
    r_tr = new("r_tr");
    start_item(r_tr);
    $display("1");
    if(!r_tr.randomize()) begin
        `uvm_error("RANDOMIZE_FAILED", "In r_sequence.")
    end
    $display("2");
    finish_item(r_tr);
    $display("Zhe li le?");
    */
    // wait_for_response(); Missing? No defined.
endtask

task r_sequence::pre_body();
endtask

task r_sequence::post_body();
endtask

class w_sequence extends uvm_sequence #(w_sequence_item);

    function new(string name = "w_sequence");
        super.new(name);
    endfunction

    extern virtual task body();
    extern virtual task pre_body();
    extern virtual task post_body();

    `uvm_object_utils(w_sequence)
endclass

task w_sequence::body();
    w_sequence_item w_tr;
    $display("w_sequence randomize and sent");
    `uvm_do(w_tr)
    $display("%dns : w_sequence:: wdata %2h and send to drv", $time, w_tr.data);
endtask

task w_sequence::pre_body();
endtask

task w_sequence::post_body();
endtask