package riscv32e

import chisel3._
import chisel3.util._

// 定义BlackBox，包含DPI-C调用
class DPIBox_Mem extends BlackBox with HasBlackBoxResource with HasBlackBoxPath with HasBlackBoxInline{
    val io = IO(new Bundle {
        val ctrlWrite = Input(Bool())
        val ctrlRead  = Input(Bool())
        val ctrlLoad  = Input(Bool())
        val ctrlLen   = Input(UInt(32.W))
        val data      = Input(UInt(32.W))
        val paddr     = Input(UInt(32.W))
        val rdata     = Output(UInt(32.W))
    })
    setInline("pmem.v",
        """
        |module DPIBox_Mem(
        |  input ctrlWrite,
        |  input ctrlRead,
        |  input ctrlLoad,
        |  input [31:0] ctrlLen,
        |  input [31:0] data,
        |  input [31:0] paddr,
        |  output logic [31:0] rdata
        |);
        |  import "DPI-C" function int pmem_read(input int addr, input int len);
        |  import "DPI-C" function void pmem_write(
        |         input int addr, input int len, input int redata);
        |    always @(posedgo clock) begin
        |     if(ctrlLoad&&(paddr!=0)) begin
        |       if(ctrlRead) begin
        |           rdata <= pmem_read(paddr, 4);
        |       end
        |       if(ctrlWrite) begin
        |           pmem_write(paddr, ctrlLen, data);
        |       end 
        |      end    
        |    end  
        |endmodule
        """.stripMargin)
}

class MemIO extends Bundle {
    val ctrlLoad  = Input(Bool())
    val ctrlWrite = Input(Bool())
    val ctrlRead  = Input(Bool())
    val ctrlLen   = Input(UInt(32.W))
    val paddr     = Input(UInt(32.W))
    val data      = Input(UInt(32.W))
    val rdata     = Output(UInt(32.W))
}

class mem extends Module {
    val io = IO(new MemIO())
    val dpi_box = Module(new DPIBox_Mem())

    // when(io.ctrlLoad) {
    //     dpi_box.io.ctrlWrite := io.ctrlWrite
    //     dpi_box.io.ctrlRead  := io.ctrlRead
    //     dpi_box.io.paddr     := io.paddr
    //     dpi_box.io.data      := io.data
    //     io.rdata             := dpi_box.io.rdata
    // }

    dpi_box.io.ctrlWrite := io.ctrlWrite
    dpi_box.io.ctrlRead  := io.ctrlRead
    dpi_box.io.paddr     := io.paddr
    dpi_box.io.data      := io.data
    dpi_box.io.ctrlLoad  := io.ctrlLoad
    dpi_box.io.ctrlLen   := io.ctrlLen
    io.rdata             := dpi_box.io.rdata
    // printf(p"io.data = 0x${Hexadecimal(io.data)}\n")
    // printf(p"dpi_box.io.data = 0x${Hexadecimal(dpi_box.io.data)}\n")
}

