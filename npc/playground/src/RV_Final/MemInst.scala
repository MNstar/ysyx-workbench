package rv_final

import chisel3._
import chisel3.util._

class MemInst extends BlackBox with HasBlackBoxResource with HasBlackBoxPath with HasBlackBoxInline{
    val io = IO(new Bundle {
        val clock     = Input(Clock())
        val reset     = Input(Bool())
        val pc     = Input(UInt(32.W))
        val inst     = Output(UInt(32.W))
    })
    setInline("pmem_inst.v",
        """
        |module MemInst(
        |  input clock,
        |  input reset,
        |  input [31:0] pc,
        |  output logic [31:0] inst
        |);
        |  import "DPI-C" function int pmem_read(input int addr, input int len);
        |    always @(*) begin
        |       if(!reset) begin
        |           inst = pmem_read(pc, 4);  
        |       end
        |       else inst = 0; 
        |    end  
        |endmodule
        """.stripMargin)
}


// class MemInstIO extends Bundle {
//     val pc = Input(UInt(32.W))
//     val inst = Output(UInt(32.W))
// }

// class MemInst extends Module {
//     val io = IO(new MemInstIO())
//     val dpi_box = Module(new DPIBox_MemInst())

//     dpi_box.io.paddr := io.pc
//     io.inst := dpi_box.io.rdata

// }









// class MemInstIO extends Bundle {
//     val pc = Input(UInt(32.W))
//     val inst = Output(UInt(32.W))
// }

// class MemInst extends Module {
//     val io = IO(new MemInstIO())
//     val dpi_mem_inst = Module(new DPIBox_Mem())

//     dpi_mem_inst.io.ctrlStore := false.B
//     dpi_mem_inst.io.ctrlLoad := true.B
//     dpi_mem_inst.io.paddr := io.pc
//     io.inst := dpi_mem_inst.io.rdata

// }


