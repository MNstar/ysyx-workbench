package rv_final

import chisel3._
import chisel3.util._



class DPIBox_Mem extends BlackBox with HasBlackBoxResource with HasBlackBoxPath with HasBlackBoxInline{
    val io = IO(new Bundle {
        val clock     = Input(Clock())
        val ctrlStore = Input(Bool())
        val ctrlLoad  = Input(Bool())
        val wdata     = Input(UInt(32.W))
        val len       = Input(UInt(32.W))
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
        |  input [31:0] len,
        |  output logic [31:0] rdata
        |);
        |  import "DPI-C" function int pmem_read(input int addr, input int len);
        |  import "DPI-C" function void pmem_write(
        |         input int addr, input int len, input int redata);
        |    always @(posedge clock) begin
        |     if(ctrlLoad) begin
        |           rdata <= pmem_read(paddr, len);
        |       end
        |     if(ctrlStore) begin
        |           pmem_write(paddr, len, wdata);
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
    dpi_box.io.len       := io.bundleMemDataControl.memSize
    dpi_box.io.paddr     := io.paddr
    dpi_box.io.wdata     := io.wdata   
    printf(p"len = ${dpi_box.io.len}\n")
    printf(p"rdata = ${dpi_box.io.rdata}\n")
    val raw = dpi_box.io.rdata
    val signExt = Mux(~io.bundleMemDataControl.ctrlLoad, 0.U(32.W), MuxCase(
        0.U(32.W),
        Seq(
            (io.bundleMemDataControl.memSize === 1.U(32.W)) -> Cat(Fill(24, raw(7)), raw(7, 0)),
            (io.bundleMemDataControl.memSize === 2.U(32.W)) -> Cat(Fill(16, raw(15)), raw(15, 0)),
            (io.bundleMemDataControl.memSize === 4.U(32.W)) -> raw,
        )
    ))
    io.rdata := signExt
    
}






