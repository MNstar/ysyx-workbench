package rv_final

import chisel3._
import chisel3.util._

class PCRegIO extends Bundle {
    val ctrlJump = Input(Bool())
    val addrTarget = Input(UInt(32.W))
    val bg = Input(UInt(2.W))
    val addrOut = Output(UInt(32.W))
}

class PCReg extends Module {
    val io = IO(new PCRegIO())
    val regPC = RegInit(UInt(32.W), 0x80000000L.U)
    regPC := Mux(io.ctrlJump, Mux(io.bg(0), Mux(io.bg(1), io.addrTarget, regPC + 4.U), io.addrTarget), regPC + 4.U)
    // regPC := Mux(io.ctrlJump, io.addrTarget, regPC + 4.U)
    io.addrOut := regPC
}

