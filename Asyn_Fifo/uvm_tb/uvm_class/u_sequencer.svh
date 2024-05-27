`ifdef VERILATOR
class u_sequencer extends uvm_sequencer #(u_input_flow_sequence_item,u_input_flow_sequence_item);
`else
class u_sequencer extends uvm_sequencer #(u_input_flow_sequence_item);
`endif

    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    `uvm_component_utils(u_sequencer)

endclass