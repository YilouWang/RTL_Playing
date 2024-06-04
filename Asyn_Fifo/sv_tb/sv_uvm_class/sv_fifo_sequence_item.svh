class r_sequence_item extends uvm_sequence_item;

    rand bit en;
    rand bit[7:0] data;
    rand int delay;
    constraint r_delay_con { delay > 0 && delay < 80;}
    `uvm_object_utils_begin(r_sequence_item)
        `uvm_field_int(en, UVM_ALL_ON)
        `uvm_field_int(data, UVM_ALL_ON)
        `uvm_field_int(delay, UVM_ALL_ON)
    `uvm_object_utils_end

    function new(string name = "r_sequence_item");
        super.new();
    endfunction

endclass

//DEBUG USE

typedef enum bit[15:0] { 
    ONE = 3,
    TWO = 5,
    THREE = 8,
    FOUR = 13
} ENUM;

typedef union packed {
    int x;
    bit [7:0] byte_value;
} UNION;

class cls;
    rand ENUM enum_4_;
    // rand UNION union_2_;    UNSPORTED IN VERILATOR(A DIRECTION TO VESTIGATE)
    // rand int dyn_arr[];
    rand bit[31:0] lgc_1_;
    rand bit x;

    constraint combined_debug {
        enum_4_ inside {TWO, THREE};
        //if (lgc_1_ < 100) {
        //    union_2_.x < 10000;
        // } else {
        //    union_2_.byte_value inside {8'h0, 8'hFF};
        //}
        //dyn_arr.size() < 5;  
    }
    function new();
        enum_4_ = ONE;
    endfunction
endclass
//DEBUG USE

class w_sequence_item extends uvm_sequence_item;

    //DEBUG USE
    cls cls_1_;
    int r;
    //DEBUG USE

    rand logic[7:0] data;
    rand int delay;
    rand logic flag;
    constraint w_delay_con { delay > 90 && delay < 700;}
    constraint w_data_con {
        // conditional
        if(flag) {
            data inside {1, 2, 3} || data % 2 == 0;
        } else {
            // mask
            (data & 8'hF0) == 8'hA0;
        }
    }

    `uvm_object_utils_begin(w_sequence_item)
        
        `uvm_field_int(data, UVM_ALL_ON)
        `uvm_field_int(delay, UVM_ALL_ON)
        `uvm_field_int(flag, UVM_ALL_ON)

    `uvm_object_utils_end

    function new(string name = "w_sequence_item");
        super.new();
        cls_1_ = new();
        r = cls_1_.randomize(); // randomize() with {} is not supported in Verilator currently.
    endfunction
endclass