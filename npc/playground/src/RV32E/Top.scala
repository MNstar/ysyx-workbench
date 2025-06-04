package riscv32e

import chisel3._
import chisel3.util._
import OP_TYPES._


class TopIO extends Bundle {
    val inst      = Input(UInt(32.W))
    val addr      = Output(UInt(32.W))
    val imm       = Output(UInt(32.W))
    val resultAlu = Output(UInt(32.W))
    val rs1       = Output(UInt(32.W))
    val rs2       = Output(UInt(32.W))
    val rdata     = Output(UInt(32.W))
    val ctrlLoad  = Output(Bool())
}

class top extends Module {
    val io = IO(new TopIO())

    val pcReg     = Module(new PCReg())
    val decoder   = Module(new Decoder())
    val registers = Module(new Registers())
    val alu       = Module(new Alu())
    val mem       = Module(new mem())

    io.ctrlLoad <> decoder.io.ctrlLoad

    decoder.io.inst <> io.inst

    decoder.io.ctrlOP <> alu.io.ctrlOP
    decoder.io.ctrlAluSrc <> alu.io.ctrlAluSrc
    decoder.io.ctrlJal <> alu.io.ctrlJal
    decoder.io.imm <> alu.io.imm

    decoder.io.ctrlRegWrite <> registers.io.ctrlRegWrite
    decoder.io.ctrlJump <> registers.io.ctrlJump
    decoder.io.bundleReg <> registers.io.bundleReg
    decoder.io.ctrlLen <> mem.io.ctrlLen

    alu.io.dataRead1 <> registers.io.dataRead1
    alu.io.dataRead2 <> registers.io.dataRead2
    alu.io.resultAlu <> registers.io.dataWrite

    io.rs1 <> registers.io.dataRead1
    io.rs2 <> registers.io.dataRead2
    io.imm <> decoder.io.imm
    io.resultAlu <> alu.io.resultAlu

    pcReg.io.ctrlJump <> decoder.io.ctrlJump
    pcReg.io.addrTarget <>  alu.io.resultAlu
    pcReg.io.addrOut <> io.addr
    pcReg.io.addrOut <> registers.io.pc
    pcReg.io.addrOut <> alu.io.pc

    mem.io.ctrlLoad  <> decoder.io.ctrlLoad
    mem.io.ctrlRead  <> decoder.io.ctrlRead
    mem.io.ctrlWrite <> decoder.io.ctrlWrite
    mem.io.paddr     <> alu.io.resultAlu
    // printf(p"alu.io.result = 0x${Hexadecimal(alu.io.resultAlu)}\n")
    // printf(p"mem.io.paddr = 0x${Hexadecimal(mem.io.paddr)}\n")
    mem.io.data      <> registers.io.dataRead2
    // printf(p"registers.io.dataRead2 = 0x${Hexadecimal(registers.io.dataRead2)}\n")
    // printf(p"mem.io.data = 0x${Hexadecimal(mem.io.data)}\n")
    mem.io.rdata     <> io.rdata
    

}