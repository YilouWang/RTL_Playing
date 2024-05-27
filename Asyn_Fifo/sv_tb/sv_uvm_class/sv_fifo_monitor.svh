class r_monitor extends uvm_monitor;
    virtual fifo_r_if rif;
    `uvm_component_utils(r_monitor)
    uvm_analysis_port #(w_sequence_item) ap;

    function new(string name, uvm_component parent = null);
        super.new(name, parent);
    endfunction

    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        if(!uvm_config_db#(virtual fifo_r_if)::get(this, "", "rif", rif))
            `uvm_fatal("r_monitor", "virtual interface must be set for rif!")
        ap = new("ap", this);
    endfunction

    task run_phase(uvm_phase phase);
        w_sequence_item tr;
        while(1) begin
            tr = new("tr");
            collect_one_pkt(tr);
            ap.write(tr);
        end
    endtask

    task collect_one_pkt(w_sequence_item tr);
        while(1) begin
            @(posedge rif.clk);
            if(rif.en) break;
        end
        tr.data = rif.data;
        // $display("%dns : r_monitor::monitor:: rdata %2h and send to scb", $time, tr.data);
        @(posedge rif.clk);

    endtask

endclass : r_monitor

class w_monitor extends uvm_monitor;
    virtual fifo_w_if wif;
    `uvm_component_utils(w_monitor)
    uvm_analysis_port #(w_sequence_item) ap;

    function new(string name, uvm_component parent = null);
        super.new(name, parent);
    endfunction

    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        if(!uvm_config_db#(virtual fifo_w_if)::get(this, "", "wif", wif))
            `uvm_fatal("w_monitor", "virtual interface must be set for wif!")
        ap = new("ap", this);
    endfunction

    task run_phase(uvm_phase phase);
        w_sequence_item tr;
        while(1) begin
            tr = new("tr");
            collect_one_pkt(tr);
            ap.write(tr);
        end
    endtask

    task collect_one_pkt(w_sequence_item tr);
        while(1) begin
            @(posedge wif.clk);
            if(wif.en) break;
        end
        tr.data = wif.data;
        // $display("%dns : w_monitor::monitor:: wdata %2h and send to scb", $time, tr.data);

    endtask

endclass