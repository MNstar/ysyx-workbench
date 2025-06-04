package riscv_addi

import chisel3._
import chisel3.util._

class addi extends Module {
    val io = IO(new Bundle {
        val inst  = Input(UInt(32.W))
        val pc    = Output(UInt(32.W))
        val rs1   = Output(UInt(5.W)) 
        val rd    = Output(UInt(5.W))
        val imm   = Output(UInt(32.W))
        val data  = Output(UInt(32.W))
        val write = Output(UInt(32.W))
    })
    val start_addr = 0x80000000L;
    val my_pc = RegInit(UInt(32.W), start_addr.U)
    val regs = Reg(Vec(32, UInt(32.W)))
    regs(16.U(32.W)) := 5.U(32.W)

    io.rs1 := io.inst(19, 15)
    io.rd  := io.inst(11, 7)
    io.imm := io.inst(31, 20)

    io.data := Mux(io.rs1 === 0.U, 0.U, regs(io.rs1))
    io.write := io.data + io.imm
    regs(io.rd) := io.write
    my_pc := my_pc + 4.U(32.W)
    io.pc := my_pc
}
