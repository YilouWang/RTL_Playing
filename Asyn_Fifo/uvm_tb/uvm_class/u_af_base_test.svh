class u_af_base_test extends uvm_test;
    u_env env_h;
    u_sequencer sqr_h;

    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction : new

    function void build_phase(uvm_phase phase);
        env_h = u_env::type_id::create("env_h", this);
    endfunction : build_phase

    function void end_of_elaboration_phase(uvm_phase phase);
        sqr_h = env_h.sqr_h;
        print();
        $display("Here Hua Le Ge Shen Me ???");
    endfunction : end_of_elaboration_phase

    function void report_phase(uvm_phase phase);
        uvm_report_server svr;
        super.report_phase(phase);
        svr = uvm_report_server::get_server();
        // svr.set_id_action_hier("uvm_component_name_constraint", UVM_NO_ACTION);
        if (svr.get_severity_count(UVM_FATAL) + svr.get_severity_count(UVM_ERROR)>0) begin
            `uvm_info(get_type_name(), "---------------------------", UVM_NONE)
            `uvm_info(get_type_name(), "-----    Test Fail!   -----", UVM_NONE)
            `uvm_info(get_type_name(), "---------------------------", UVM_NONE)
        end
        else begin
            `uvm_info(get_type_name(), "---------------------------", UVM_NONE)
            `uvm_info(get_type_name(), "-----    Test Pass!   -----", UVM_NONE)
            `uvm_info(get_type_name(), "---------------------------", UVM_NONE)
        end
    endfunction

endclass