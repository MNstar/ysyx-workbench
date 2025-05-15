package riscv32e

import chisel3._
import chisel3.util._

class PCRegIO extends Bundle {
    val addrOut    = Output(UInt(32.W))
    val ctrlJump   = Input(Bool())
    val addrTarget = Input(UInt(32.W))
}

class PCReg extends Module {
    val io = IO(new PCRegIO())

    val regPC = RegInit(UInt(32.W), 0x80000000L.U)
    regPC := Mux(io.ctrlJump, io.addrTarget, regPC + 4.U)

    io.addrOut := regPC
}



