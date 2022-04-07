`timescale 1ns / 1ps

module model_uart(/*AUTOARG*/
   // Outputs
   TX,
   // Inputs
   RX
   );

   output TX;
   input  RX;

   parameter baud    = 115200;
   parameter bittime = 1000000000/baud;
   parameter name    = "UART0";
   
   reg [7:0] rxData;
   event     evBit;
   event     evByte;
   event     evTxBit;
   event     evTxByte;
   reg       TX;

	reg [31:0] fullNumber;
	integer count;
	

   initial
     begin
        TX = 1'b1;
		  count = 0;
     end
   
   always @ (negedge RX)
     begin
	     
        rxData[7:0] = 8'h0;
        #(0.5*bittime);
        repeat (8)
          begin
             #bittime ->evBit;
             //rxData[7:0] = {rxData[6:0],RX};
             rxData[7:0] = {RX,rxData[7:1]};
          end
        ->evByte;
		  
		  if (count == 0)
		    begin
    		   //$display("count=0 byte (%s) fullNumber data (%s)", rxData, fullNumber[7:0]); 
			   fullNumber[7:0] <= rxData[7:0];
			 end
		  else if (count == 1)
		    begin
    		   //$display("count=1 byte (%s) fullNumber data (%s)", rxData, fullNumber[15:8]);
			   fullNumber[15:8] <= rxData[7:0];
			 end
			else if (count == 2)
			  begin
    		   //$display("count=2 byte (%s) fullNumber data (%s)", rxData, fullNumber[23:16]);
			    fullNumber[23:16] <= rxData[7:0];
			  end
			else if (count == 3)
			  begin
    		  // $display("count=3 byte (%s) fullNumber data (%s)", rxData, fullNumber[31:24]);
			    fullNumber[31:24] <= rxData[7:0];
			  end
		  
		 // count = count + 1;
	  
		  if (rxData == "\r")
		    begin
			   count = 0;
				$display("%d %s Received byte(%s%s%s%s)", $stime, name, fullNumber[7:0],  fullNumber[15:8], fullNumber[23:16], fullNumber[31:24]);
			   fullNumber <= 32'b0000_0000_0000_0000_0000_0000_0000_0000;
			 end
		  else
		    begin
			   count = count + 1;
			 end
			
        
		  //$display ("%d %s Received byte %02x (%s)", $stime, name, rxData, rxData);
     end

   task tskRxData;
      output [7:0] data;
      begin
         @(evByte);
         data = rxData;
      end
   endtask // for
      
   task tskTxData;
      input [7:0] data;
      reg [9:0]   tmp;
      integer     i;
      begin
         tmp = {1'b1, data[7:0], 1'b0};
         for (i=0;i<10;i=i+1)
           begin
              TX = tmp[i];
              #bittime;
              ->evTxBit;
           end
         ->evTxByte;
      end
   endtask // tskTxData
   
endmodule // model_uart
