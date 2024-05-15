class r_sequence_item extends uvm_sequence_item;

    rand bit en;
    rand bit[7:0] data;
    rand int delay;

    `uvm_object_utils_begin(r_sequence_item)
        `uvm_field_int(en, UVM_ALL_ON)
        `uvm_field_int(data, UVM_ALL_ON)
        `uvm_field_int(delay, UVM_ALL_ON)
    `uvm_object_utils_end

    function new(string name = "r_sequence_item");
        super.new();
    endfunction

endclass


class w_sequence_item extends uvm_sequence_item;

    rand bit en;
    rand bit[7:0] data;
    rand int delay;

    `uvm_object_utils_begin(w_sequence_item)
        `uvm_field_int(en, UVM_ALL_ON)
        `uvm_field_int(data, UVM_ALL_ON)
        `uvm_field_int(delay, UVM_ALL_ON)
    `uvm_object_utils_end

    function new(string name = "w_sequence_item");
        super.new();
    endfunction

endclass