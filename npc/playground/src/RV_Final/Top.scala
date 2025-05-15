package rv_final

import chisel3._
import chisel3.util._

class TopIO extends Bundle {
    val pc   = Output(UInt(32.W))
    val rdata = Output(UInt(32.W))
}

class Top extends Module {
    val io = IO(new TopIO())

    val pcReg = Module(new PCReg())
    val decoder = Module(new Decoder())
    val registers = Module(new Registers())
    val mem = Module(new mem())
    val alu = Module(new Alu())
    val memInst = Module(new MemInst())

    pcReg.io.ctrlJump <> decoder.io.bundleRegDataControl.ctrlJump
    pcReg.io.addrTarget <> alu.io.resultAlu

    decoder.io.clock <> clock
    decoder.io.inst <> memInst.io.inst
    decoder.io.pc <> pcReg.io.addrOut
    decoder.io.dataRead1 <> registers.io.dataRead1
    decoder.io.dataRead2 <> registers.io.dataRead2

    registers.io.bundleRegDataControl <> decoder.io.bundleRegDataControl
    registers.io.bundleReg <> decoder.io.bundleReg
    registers.io.pc <> pcReg.io.addrOut
    registers.io.resultAlu <> alu.io.resultAlu

    mem.io.clock := clock
    mem.io.bundleMemDataControl <> decoder.io.bundleMemDataControl
    mem.io.paddr <> alu.io.resultAlu
    mem.io.wdata <> registers.io.dataRead2

    alu.io.bundleAluOPData <> decoder.io.bundleAluOPData

    memInst.io.clock <> clock
    memInst.io.reset <> reset
    memInst.io.pc <> pcReg.io.addrOut

    io.pc <> pcReg.io.addrOut
    io.rdata <> mem.io.rdata


}



