package rv_final

import chisel3._
import chisel3.util._



class DPIBox_Mem extends BlackBox with HasBlackBoxResource with HasBlackBoxPath with HasBlackBoxInline{
    val io = IO(new Bundle {
        val clock = Input(Clock())
        val ctrlStore  = Input(Bool())
        val ctrlLoad  = Input(Bool())
        val wdata      = Input(UInt(32.W))
        val paddr     = Input(UInt(32.W))
        val rdata     = Output(UInt(32.W))
    })
    setInline("pmem.v",
        """
        |module DPIBox_Mem(
        |  input clock,
        |  input ctrlStore,
        |  input ctrlLoad,
        |  input [31:0] wdata,
        |  input [31:0] paddr,
        |  output logic [31:0] rdata
        |);
        |  import "DPI-C" function int pmem_read(input int addr, input int len);
        |  import "DPI-C" function void pmem_write(
        |         input int addr, input int len, input int redata);
        |    always @(posedge clock) begin
        |     if(ctrlLoad) begin
        |           rdata <= pmem_read(paddr, 4);
        |       end
        |     if(ctrlStore) begin
        |           pmem_write(paddr, 4, wdata);
        |       end 
        |    end  
        |endmodule
        """.stripMargin)
}


class MemIO extends Bundle {
    val clock = Input(Clock())
    val bundleMemDataControl = Flipped(new BundleMemDataControl())
    val paddr = Input(UInt(32.W))
    val wdata = Input(UInt(32.W))
    val rdata = Output(UInt(32.W))
}


class mem extends Module {
    val io = IO(new MemIO())
    val dpi_box = Module(new DPIBox_Mem())

    dpi_box.io.clock     := io.clock
    dpi_box.io.ctrlStore := io.bundleMemDataControl.ctrlStore
    dpi_box.io.ctrlLoad  := io.bundleMemDataControl.ctrlLoad
    dpi_box.io.paddr     := io.paddr
    dpi_box.io.wdata     := io.wdata    
    io.rdata             := dpi_box.io.rdata
    
}






