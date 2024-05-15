class w_driver extends uvm_driver #(w_sequence_item);
    
    `uvm_component_utils(w_driver)
    virtual fifo_w_if wif;

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
        w_sequence_item push; //= new();
        wif.data <= 8'b0;
        wif.en   <= 1'b0;

        while (!wif.reset) begin
            @(posedge wif.clk);
        end

        fork
            while (1) begin
                seq_item_port.get_next_item(push);
                push_data(push.data, push.delay);
                $display("%dns : w_driver::push:: wdata %2h with a delay %2d", $time, push.data, push.delay);
                seq_item_port.item_done();
            end
            while (1) begin
                push_nothing();
            end
        join
    end
    endtask

    task push_data(logic[7:0] data, int delay);
        @(posedge wif.clk);
        while (wif.full == 1'b1) begin
            wif.en <= 1'b0;
            wif.data <= 8'b0;
            @(posedge wif.clk);
        end
        wif.data <= data;
        wif.en <= 1'b1;
        while(delay) begin
            @(posedge wif.clk);
            wif.data <= 8'b0;
            wif.en <= 1'b0;
            delay = delay - 1;
        end
    endtask

    task push_nothing();
        @(posedge wif.clk);
    endtask

endclass

class r_driver extends uvm_driver #(r_sequence_item);
    `uvm_component_utils(r_driver)
    virtual fifo_r_if rif;

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
        r_sequence_item pop; // pop is obtained through the seq_item_port.get_next_item(pop), so on need instantiated in driver.
        forever begin
            seq_item_port.get_next_item(pop);
            pop_data(pop.delay);
            $display("%dns : r_driver::pop:: rdata %2h with a delay %2d", $time, pop.data, pop.delay);
            seq_item_port.item_done();
        end
    end
    endtask

    task pop_data(int delay);
        @(posedge rif.clk);
        while(rif.empty == 1'b1) begin
            rif.en <= 1'b0;
            rif.data <= 8'b0;
            @(posedge rif.clk);
        end
        rif.en <= 1'b1;
        while(delay) begin
            @(posedge rif.clk);
            rif.en <= 1'b0;
            rif.data <= 8'b0;
            delay = delay - 1;
        end
    endtask

endclass