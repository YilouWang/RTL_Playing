class u_input_flow_sequence_item extends uvm_sequence_item;
    `uvm_object_utils(u_input_flow_sequence_item)

    function new(string name = "");
        super.new(name);
    endfunction : new

    rand logic [FIFO_DATA_WIDTH-1:0] w_data;
    //bit wf_re;

    constraint data {w_data dist {8'h00:=1, [8'h01 : 8'hFE]:=1, 8'hFF:=1};}

    function bit do_compare(uvm_object rhs, uvm_comparer comparer);
        u_input_flow_sequence_item tested;
        bit same;

        if(rhs == null) `uvm_fatal(get_type_name(), 
                                    "i_sequence_item::Tried to do comparison to a null pointer.");

        if(!$cast(tested, rhs))
            same = 0;
        else
            same = super.do_compare(rhs, comparer) && (tested.w_data == w_data);
        
        return same;

    endfunction : do_compare

    function void do_copy(uvm_object rhs);
        u_input_flow_sequence_item RHS;
        assert(rhs != null) else
            $fatal(1, "i_sequence_item::Tried to copy null transaction");
        super.do_copy(rhs);
        assert($cast(RHS, rhs)) else
            $fatal(1, "i_sequence_item::Failed to cast in do_copy");
        w_data = RHS.w_data;
    endfunction : do_copy

    function string convert2string();
        string s;
        s = $sformatf("w_data: %2h", w_data);
        return s;
    endfunction : convert2string

endclass : u_input_flow_sequence_item


class u_output_flow_sequence_item extends uvm_transaction;

    logic [FIFO_DATA_WIDTH-1 : 0] r_data;
    function new(string name = "");
        super.new(name);
    endfunction : new

    function void do_copy(uvm_object rhs);
        u_output_flow_sequence_item RHS;
        assert(rhs != null) else
            $fatal(1, "o_sequence_item::Tried to copy null transaction");
        super.do_copy(rhs);
        assert($cast(RHS, rhs)) else
            $fatal(1, "o_sequence_item::Failed to cast in do_copy");
        r_data = RHS.r_data;
    endfunction : do_copy

    function string convert2string();
        string s;
        s = $sformatf("r_data: %2h", r_data);
        return s;
    endfunction : convert2string

    function bit do_compare(uvm_object rhs, uvm_comparer comparer);
        u_output_flow_sequence_item tested;
        bit same;

        if(rhs == null) `uvm_fatal(get_type_name(), 
                                    "o_sequence_item::Tried to do comparison to a null pointer.");

        if(!$cast(tested, rhs))
            same = 0;
        else
            same = super.do_compare(rhs, comparer) && (tested.r_data == r_data);
        
        return same;

    endfunction : do_compare

endclass : u_output_flow_sequence_item