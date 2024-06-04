class fifo_scoreboard extends uvm_scoreboard;

    w_sequence_item expected_queue[$];
    uvm_analysis_imp #(w_sequence_item, fifo_scoreboard) exp_export;
    uvm_tlm_analysis_fifo #(w_sequence_item) act_fifo;
    `uvm_component_utils(fifo_scoreboard)

    extern function new(string name, uvm_component parent = null);
    extern virtual function void build_phase(uvm_phase phase);
    extern virtual task run_phase(uvm_phase phase);
    extern virtual function void write(w_sequence_item tr);

endclass

function fifo_scoreboard::new(string name, uvm_component parent = null);
    super.new(name, parent);
endfunction

function void fifo_scoreboard::build_phase(uvm_phase phase);
    super.build_phase(phase);
    exp_export = new("exp_export", this);
    act_fifo = new("act_fifo", this);
endfunction

function void fifo_scoreboard::write(w_sequence_item tr);
    //tr.print();
    expected_queue.push_back(tr);
endfunction

task fifo_scoreboard::run_phase(uvm_phase phase);
    w_sequence_item get_actual;
    w_sequence_item get_expect;
    bit result;

    super.run_phase(phase);
    fork
        while(1) begin
            wait(expected_queue.size() > 0);
            get_expect = expected_queue.pop_front();
            `uvm_info("fifo_scb", "Get a expect result.", UVM_LOW);
            $display(get_expect);
            if(!act_fifo.try_get(get_actual))
                `uvm_error("act_fifo", "Missing input w_data.");
            get_actual.print();
            result = get_actual.compare(get_expect);
            if(result) begin
                `uvm_info("fifo_scb", "Compare Successfully.", UVM_LOW);
            end
            else begin
                `uvm_error("fifo_scb", "Compare Failed");
                $display("the expected pkt is:");
                get_expect.print();
                $display("the actual pkt is:");                    
                get_actual.print();
            end
        end
    join
endtask