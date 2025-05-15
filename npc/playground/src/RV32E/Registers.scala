package riscv32e

import chisel3._
import chisel3.util._
import OP_TYPES._

class RegistersIO extends Bundle {
    val ctrlRegWrite = Input(Bool())
    val ctrlJump     = Input(Bool())
    val pc           = Input(UInt(32.W))
    val dataWrite    = Input(UInt(32.W))
    val bundleReg    = Flipped(new BundleReg())
    val dataRead1    = Output(UInt(32.W))
    val dataRead2    = Output(UInt(32.W))
}

class Registers extends Module {
    val io = IO(new RegistersIO())

    val regs = Reg(Vec(32, UInt(32.W)))

    io.dataRead1 := Mux(io.bundleReg.rs1 === 0.U, 0.U, regs(io.bundleReg.rs1)) 
    io.dataRead2 := Mux(io.bundleReg.rs2 === 0.U, 0.U, regs(io.bundleReg.rs2))

    when(io.ctrlRegWrite && io.bundleReg.rd =/= 0.U) {
        regs(io.bundleReg.rd) := Mux(io.ctrlJump, io.pc + 4.U, io.dataWrite)
    }
}