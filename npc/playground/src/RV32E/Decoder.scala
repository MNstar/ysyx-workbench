package riscv32e

import chisel3._
import chisel3.util._
import OP_TYPES._

// 定义BlackBox，包含DPI-C调用
class DPIBox_Ebreak extends BlackBox with HasBlackBoxResource with HasBlackBoxPath with HasBlackBoxInline{
    val io = IO(new Bundle {
        val in = Input(UInt(2.W))
    })
    setInline("ebreak.v",
        """
        |module DPIBox_Ebreak(
        |  input [1:0] in
        |  //output [31:0] out
        |);
        |  import "DPI-C" function void npc_trap();
        |    always @(*) begin
        |    if(in == 2'b1) begin
        |        npc_trap();
        |      end     
        |    end  
        |endmodule
        """.stripMargin)
}



class DecoderIO extends Bundle {
    val inst          = Input(UInt(32.W))
    val ctrlOP        = Output(UInt(4.W))
    val imm           = Output(UInt(32.W))
    val bundleReg     = new BundleReg()
    val ctrlAluSrc    = Output(Bool())
    val ctrlRegWrite  = Output(Bool())
    val ctrlJal       = Output(Bool())
    val ctrlJump      = Output(Bool())
    val ctrlLoad      = Output(Bool())
    val ctrlWrite     = Output(Bool())
    val ctrlRead      = Output(Bool())
    val ctrlLen       = Output(UInt(32.W))
}


class Decoder extends Module {

    val io = IO(new DecoderIO())

    //三个寄存器
    io.bundleReg.rs1 := io.inst(19, 15)
    io.bundleReg.rs2 := io.inst(24, 20)
    io.bundleReg.rd := io.inst(11, 7)

    //黑盒
    val dpi_box = Module(new DPIBox_Ebreak())

    //立即数
    val imm_I = Cat(Fill(20, io.inst(31)), io.inst(31, 20))
    val imm_S = Cat(Fill(20, io.inst(31)), io.inst(31, 25), io.inst(11, 7))
    val imm_B = Cat(Fill(20, io.inst(31)), io.inst(7), io.inst(30, 25), io.inst(11, 8), 0.U(1.W))
    val imm_U = Cat(io.inst(31, 12), Fill(12, 0.U))
    val imm_J = Cat(Fill(12, io.inst(31)), io.inst(31), io.inst(19, 12), io.inst(20), io.inst(30, 21), 0.U(1.W))



    val opcode = io.inst(6, 0)    
    val fun3   = io.inst(14, 12)
    val fun7   = io.inst(31, 25)



    val imm           = WireDefault(0.U(32.W))
    val ctrlAluSrc    = WireDefault(false.B)
    val ctrlJal       = WireDefault(false.B)
    val ctrlOP        = WireDefault(0.U(4.W))
    val ctrlJump      = WireDefault(false.B)
    val ctrlRegWrite  = WireDefault(true.B)
    val ctrlLoad      = WireDefault(false.B)
    val ctrlWrite     = WireDefault(false.B)
    val ctrlRead      = WireDefault(false.B)
    val ebreak        = WireDefault(0.U(2.W))
    val ctrlLen       = WireDefault(0.U(32.W))

    when(opcode === "b0010111".U) {
        //auipc
        ctrlOP := OP_ADD
        imm := imm_U
        ctrlAluSrc := true.B
        ctrlJal := true.B

    }.elsewhen(opcode === "b1101111".U) {
        //jal
        ctrlOP := OP_ADD
        imm := imm_J
        ctrlJump := true.B
        ctrlAluSrc := true.B
        ctrlJal := true.B

    }.elsewhen(opcode === "b1101111".U || opcode === "b1100111".U) {
        //jalr
        ctrlOP := OP_ADD
        imm := imm_I
        ctrlJump := true.B
        ctrlAluSrc := true.B

    }.elsewhen(opcode === "b0110111".U) {
        //lui
        ctrlOP := OP_ADD
        imm := imm_U
        ctrlAluSrc := true.B

    }.elsewhen(opcode === "b1110011".U){
        //ebreak
        ebreak := 1.U

    }.elsewhen(opcode === "b0010011".U){
        //addi
        ctrlOP := OP_ADD
        imm := imm_I
        ctrlAluSrc := true.B

    }.otherwise {
        //sw
        ctrlOP := OP_ADD
        imm := imm_S
        ctrlRegWrite := false.B
        ctrlLoad     := true.B
        ctrlAluSrc   := true.B
        ctrlWrite    := true.B
        ctrlLen      := 4.U
    }
    
    io.ctrlOP       := ctrlOP
    io.imm          := imm
    io.ctrlAluSrc   := ctrlAluSrc
    io.ctrlJal      := ctrlJal
    io.ctrlJump     := ctrlJump
    io.ctrlRegWrite := ctrlRegWrite
    io.ctrlLoad     := ctrlLoad
    io.ctrlWrite    := ctrlWrite
    io.ctrlRead     := ctrlRead
    io.ctrlLen      := ctrlLen
    dpi_box.io.in   := ebreak
}