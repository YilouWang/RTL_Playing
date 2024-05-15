`ifdef VERILATOR
class w_sequencer extends uvm_sequencer #(w_sequence_item,w_sequence_item);
`else
class w_sequencer extends uvm_sequencer #(w_sequence_item);
`endif

    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    `uvm_component_utils(w_sequencer)
endclass

`ifdef VERILATOR
class r_sequencer extends uvm_sequencer #(r_sequence_item,r_sequence_item);
`else
class r_sequencer extends uvm_sequencer #(r_sequence_item);
`endif

    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    `uvm_component_utils(r_sequencer)

endclass