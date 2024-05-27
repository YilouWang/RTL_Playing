class u_scoreboard extends uvm_subscriber #(u_output_flow_sequence_item);
    `uvm_component_utils(u_scoreboard);
    uvm_tlm_analysis_fifo #(u_input_flow_sequence_item) i_flow_ff;

    function new( string name, uvm_component parent);
        super.new(name, parent);
    endfunction : new

    function void build_phase(uvm_phase phase);
        i_flow_ff = new("i_flow_ff", this);
    endfunction : build_phase

    function u_output_flow_sequence_item expected_output_flow(u_input_flow_sequence_item i_tr);
        u_output_flow_sequence_item o_tr;
        o_tr = new("o_tr");
        o_tr.r_data = i_tr.w_data;
        return o_tr;
    endfunction : expected_output_flow

    virtual function void write(u_output_flow_sequence_item t);
        string data_str;
        u_input_flow_sequence_item i_tr;
        u_output_flow_sequence_item expected_tr;

        if(!i_flow_ff.try_get(i_tr))
            $fatal(1, "scoreboard::Missing i_tr in self checker.");
        
        expected_tr = expected_output_flow(i_tr);

        data_str = {
            i_tr.convert2string(),
            " ==> Actual ", t.convert2string(),
            "/expected ", expected_tr.convert2string()
        };

        if(!expected_tr.compare(t))
            `uvm_error("SCB SELF CHECKER", {"FAIL: ", data_str})
        else
            `uvm_info("SCB_SELF_CHECKER", {"PASS: ", data_str}, UVM_LOW)
        
    endfunction : write

endclass : u_scoreboard