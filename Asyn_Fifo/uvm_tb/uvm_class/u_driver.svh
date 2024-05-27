class u_driver extends uvm_driver #(u_input_flow_sequence_item);
    `uvm_component_utils(u_driver)

    virtual af_bfm bfm;
    // int wf_re = 0;
    // logic [FIFO_DATA_WIDTH-1:0] tested_data;

    function new (string name, uvm_component parent);
        super.new(name, parent);
    endfunction : new

    function void build_phase(uvm_phase phase);
        if(!uvm_config_db #(virtual af_bfm)::get(null, "*", "bfm", bfm))
            `uvm_fatal("DRIVER", "driver::Failed to get BFM.")
    endfunction : build_phase

    task push();
    begin
        u_input_flow_sequence_item push;
        int i = 0;
        forever begin : push_loop
                if (i == 0) begin
                    seq_item_port.get_next_item(push);
                    bfm.push(push.w_data, 1'b0, 1'b1);
                    `uvm_info("DRV_PUSH", $sformatf("driver::push::iter# %2d  w_data %2h", i, push.w_data), UVM_LOW);
                    // $display("%dns : driver::push::iter# %2d  w_data %2h", $time, i, push.w_data);
                    seq_item_port.item_done();
                end else if ((i > 0) && (i < TEST_FLOW_LENGTH-2)) begin
                    seq_item_port.get_next_item(push);
                    bfm.push(push.w_data, 1'b0, 1'b0);
                    `uvm_info("DRV_PUSH", $sformatf("driver::push::iter# %2d  w_data %2h", i, push.w_data), UVM_LOW);
                    //$display("%dns : driver::push::iter# %2d  w_data %2h", $time, i, push.w_data);
                    seq_item_port.item_done();
                end else begin
                    seq_item_port.get_next_item(push);
                    bfm.push(push.w_data, 1'b1, 1'b0);
                    `uvm_info("DRV_PUSH", $sformatf("driver::push::iter# %2d  w_data %2h (the last one)", i, push.w_data), UVM_LOW);
                    //$display("%dns : driver::push::iter# %2d  w_data %2h", $time, i, push.w_data);
                    //$display("%dns : driver::push::iter# %2d  the last one", $time, i);
                    seq_item_port.item_done();
                end
                i++;
                if(i > TEST_FLOW_LENGTH-1) i = 0;
        end : push_loop
    end
    endtask : push

    task pop();
    begin
        int i = 0;
        forever begin : pop_loop
            if (i < TEST_FLOW_LENGTH-2) begin
                bfm.pop(1'b0);
                `uvm_info("DRV_POP", $sformatf("driver::pop::iter# %2d, make r_en = 1. ", i), UVM_LOW);
            end else begin
                bfm.pop(1'b1);
                `uvm_info("DRV_POP", $sformatf("driver::pop::iter# %2d, make r_en = 1. (the last one) ", i), UVM_LOW);
            end
            i++;
            if(i > TEST_FLOW_LENGTH-1) i = 0;
        end : pop_loop
    end
    endtask : pop

    task run_phase(uvm_phase phase);
        bfm.reset_rdwr();
        fork
            push();
            pop();
        join_none
    endtask : run_phase

endclass : u_driver