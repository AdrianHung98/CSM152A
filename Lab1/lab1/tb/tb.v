`timescale 1ns / 1ps

module tb;

   reg [7:0] sw;
   reg       clk;
   reg       btnS;
   reg       btnR;
   
	reg[7:0] instructions[0:1022];
	reg[9:0] counter;
	reg  [7:0] inst;
	reg [1:0] inst_code;
	
   integer   i;
   
   /*AUTOWIRE*/
   // Beginning of automatic wires (for undeclared instantiated-module outputs)
   wire                 RsRx;                   // From model_uart0_ of model_uart.v
   wire                 RsTx;                   // From uut_ of nexys3.v
   wire [7:0]           led;                    // From uut_ of nexys3.v
	wire [2:0]           step_d;
   // End of automatics

   initial
     begin
        //$shm_open  ("dump", , ,1);
        //$shm_probe (tb, "ASTF");

        clk = 0;
        btnR = 1;
        btnS = 0;
        #1000 btnR = 0;
        #1500000;
        
	     $readmemb("seq.code", instructions); //Read the numbers in file1.txt to memory


        for(counter=1;counter<=instructions[0];counter=counter+1)
	       begin
	         inst = instructions[counter][7:0];
				inst_code = inst[7:6];

				if (inst_code == 2'b00)
					begin
					  tskRunPUSH(inst[5:4], inst[3:0]);
					end
				
				else if (inst_code == 2'b01)
					begin
					  tskRunADD(inst[5:4], inst[3:2], inst[1:0]);
					end

				else if (inst_code == 2'b10)
					begin
					  tskRunMULT(inst[5:4], inst[3:2], inst[1:0]);
					end

				else
					begin
					  tskRunSEND(inst[5:4]);
					end

	       end
//        tskRunPUSH(0,4);
//        tskRunPUSH(0,0);
//        tskRunPUSH(1,3);
//        tskRunMULT(0,1,2);
//        tskRunADD(2,0,3);
//        tskRunSEND(0);
//        tskRunSEND(1);
//        tskRunSEND(2);
//        tskRunSEND(3);
        
        #1000;        
        $finish;
     end

   always #5 clk = ~clk;
   
   model_uart model_uart0_ (// Outputs
                            .TX                  (RsRx),
                            // Inputs
                            .RX                  (RsTx)
                            /*AUTOINST*/);

   defparam model_uart0_.name = "UART0";
   defparam model_uart0_.baud = 1000000;
   
   
   nexys3 uut_ (/*AUTOINST*/
                // Outputs
                .RsTx                   (RsTx),
                .led                    (led[7:0]),
                // Inputs
                .RsRx                   (RsRx),
                .sw                     (sw[7:0]),
                .btnS                   (btnS),
                .btnR                   (btnR),
                .clk                    (clk),
					 .clk_en                 (clk_en),
					 .clk_dv						  (clk_dv),
					 .clk_en_d					  (clk_en_d),
					 .step_d                  (step_d[2:0]),
					 .inst_vld                (inst_vld)
					 );
					 

   task tskRunInst;
      input [7:0] inst;
      begin
         $display ("%d ... Running instruction %08b", $stime, inst);
         sw = inst;
         #1500000 btnS = 1;
         #3000000 btnS = 0;
      end
   endtask //

   task tskRunPUSH;
      input [1:0] ra;
      input [3:0] immd;
      reg [7:0]   inst;
      begin
         inst = {2'b00, ra[1:0], immd[3:0]};
         tskRunInst(inst);
      end
   endtask //

   task tskRunSEND;
      input [1:0] ra;
      reg [7:0]   inst;
      begin
         inst = {2'b11, ra[1:0], 4'h0};
         tskRunInst(inst);
      end
   endtask //

   task tskRunADD;
      input [1:0] ra;
      input [1:0] rb;
      input [1:0] rc;
      reg [7:0]   inst;
      begin
         inst = {2'b01, ra[1:0], rb[1:0], rc[1:0]};
         tskRunInst(inst);
      end
   endtask //

   task tskRunMULT;
      input [1:0] ra;
      input [1:0] rb;
      input [1:0] rc;
      reg [7:0]   inst;
      begin
         inst = {2'b10, ra[1:0], rb[1:0], rc[1:0]};
         tskRunInst(inst);
      end
   endtask //

   always @ (posedge clk)
     if (uut_.inst_vld)
       $display("%d ... instruction %08b executed", $stime, uut_.inst_wd);

   always @ (led)
     $display("%d ... led output changed to %08b", $stime, led);
   
endmodule // tb
// Local Variables:
// verilog-library-flags:("-y ../src/")
// End:
