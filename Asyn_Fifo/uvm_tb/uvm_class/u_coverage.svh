class u_coverage extends uvm_subscriber #(u_input_flow_sequence_item);
    `uvm_component_utils(u_coverage)
    logic [FIFO_DATA_WIDTH-1:0] w_data;
    
    `ifdef VERILATOR
    `else
    covergroup w_data_cov;
        write_data: coverpoint w_data{
            bins zeros = {'h00};
            bins others = {['h01:'hFE]};
            bins ones = {'hFF};
        }
    endgroup
    `endif
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
        `ifdef VERILATOR
        `else
        w_data_cov = new();
        `endif
    endfunction : new

    function void write(u_input_flow_sequence_item t);
        w_data = t.w_data;
        `ifdef VERILATOR
        `else
        w_data_cov.sample();
        `endif
    endfunction : write

endclass : u_coverage