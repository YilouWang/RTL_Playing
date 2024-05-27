class w_driver extends uvm_driver #(w_sequence_item);
    
    `uvm_component_utils(w_driver)
    virtual fifo_w_if wif;
    logic no_tr = 1'b0;

    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        if(!uvm_config_db #(virtual fifo_w_if)::get(this, "", "wif", wif))
            `uvm_fatal("W_DRIVER", "w_driver: Failed to get Wif.")
    endfunction

    task run_phase(uvm_phase phase);
    begin
        w_sequence_item push;
        wif.data <= 8'b0;
        wif.en   <= 1'b0;

        while (!wif.reset) begin
            @(posedge wif.clk);
        end
        fork
            while (1) begin
                seq_item_port.get_next_item(push);
                no_tr = 1'b0;
                drive_one_pkt(push);
                no_tr = 1'b1;
                seq_item_port.item_done();
            end
            while (1) begin
                drive_nothing();
            end
        join
    end
    endtask

    task drive_one_pkt(w_sequence_item push);
        @(posedge wif.clk);
        // Debug Use
        `uvm_info("W_Seq", $sformatf("w_driver receives wdata %2h with a delay %2d from W_seqr.", push.data, push.delay), UVM_LOW);

        while (1) begin
            if (wif.full == 1'b1) begin
                wif.en <= 1'b0;
                @(posedge wif.clk);
            end
            else begin
                wif.data <= push.data;
                wif.en <= 1'b1;
                break;
            end
        end

        if (push.delay < 0) begin
            push.delay = -push.delay;
        end
        
        push.delay = push.delay % 2;
        `uvm_info("w_driver", $sformatf("w_driver::push:: wdata %2h with a delay %2d", push.data, push.delay), UVM_LOW);
        
        @(posedge wif.clk);
        wif.en <= 1'b0;
        
        while(push.delay) begin
            @(posedge wif.clk);
            push.delay = push.delay - 1;
        end
    endtask

    task drive_nothing();
        @(posedge wif.clk);
        if (no_tr) wif.en <= 1'b0;
    endtask

endclass : w_driver

class r_driver extends uvm_driver #(r_sequence_item);
    `uvm_component_utils(r_driver)
    virtual fifo_r_if rif;
    logic no_tr = 1'b0;

    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        if(!uvm_config_db #(virtual fifo_r_if)::get(this, "", "rif", rif))
            `uvm_fatal("R_DRIVER", "r_driver: Failed to get Rif.")
    endfunction

    task run_phase(uvm_phase phase);
    begin
        r_sequence_item pop;
        rif.en <= 1'b0;
        while(!rif.reset) begin
            @(posedge rif.clk);
        end
        fork
            while(1) begin
                seq_item_port.get_next_item(pop);
                no_tr = 1'b0;
                drive_one_pkt(pop);
                no_tr = 1'b1;
                seq_item_port.item_done();
            end
            while(1) begin
                drive_nothing();
            end
        join
    end
    endtask

    task drive_one_pkt(r_sequence_item pop);
        @(posedge rif.clk);
        // Debug Use
        `uvm_info("R_Seq", $sformatf("r_driver receives rdata with a delay %2d, with a en %2h from r_seqr.", pop.delay, pop.en), UVM_LOW);

        while (1) begin
            if (rif.empty == 1'b1) begin
                rif.en <= 1'b0;
                @(posedge rif.clk);
            end
            else begin
                //rif.en <= pop.en;
                rif.en <= 1;
                break;
            end
        end

        if (pop.delay < 0) begin
            pop.delay = -pop.delay;
        end
        pop.delay = pop.delay % 3;
        `uvm_info("r_driver", $sformatf("r_driver::pop:: rdata with a delay %2d", pop.delay), UVM_LOW);

        @(posedge rif.clk);
        rif.en <= 1'b0;

        while(pop.delay) begin
            @(posedge rif.clk);
            pop.delay = pop.delay - 1;
        end
    endtask
    
    task drive_nothing();
        @(posedge rif.clk);
        if (no_tr) rif.en <= 1'b0;
    endtask

endclass