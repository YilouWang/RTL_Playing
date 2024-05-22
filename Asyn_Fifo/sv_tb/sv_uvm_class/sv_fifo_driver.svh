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
                if (push.delay < 0) begin
                    push.delay = -push.delay;
                end
                push.delay = push.delay % 3;
                push_data(push.data, push.delay);
                $display("%dns : w_driver::push:: wdata %2h with a delay %2d", $time, push.data, push.delay);
                //$display("wif: %2h", wif.data);
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
            //wif.data <= 8'b0;
            //wif.en <= 1'b0;
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
            $display("1");
            seq_item_port.get_next_item(pop);
            $display("2");
            if (pop.delay < 0) begin
                pop.delay = -pop.delay;
            end
            pop.delay = pop.delay % 3;
            $display("3");
            pop_data(pop.delay);
            $display("7");
            $display("%dns : r_driver::pop:: rdata", $time);
            seq_item_port.item_done();
            $display("8");
        end
    end
    endtask

    task pop_data(int delay);
        @(posedge rif.clk);
        $display("4");
        while(rif.empty == 1'b1) begin
            rif.en <= 1'b0;
            // rif.data <= 8'b0;
            @(posedge rif.clk);
        end
        rif.en <= 1'b1;
        $display("5");
        while(delay) begin
            @(posedge rif.clk);
            // rif.en <= 1'b0;
            // rif.data <= 8'b0;
            delay = delay - 1;
        end
        $display("6");
    endtask

endclass