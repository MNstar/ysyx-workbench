package riscv32e

import chisel3._
import chisel3.util._

import OP_TYPES._


class AluIO extends Bundle {
    val dataRead1  = Input(UInt(32.W))
    val dataRead2  = Input(UInt(32.W))
    val imm        = Input(UInt(32.W))
    val pc         = Input(UInt(32.W))
    val ctrlAluSrc = Input(Bool())
    val ctrlJal    = Input(Bool())
    val ctrlOP     = Input(UInt(4.W))
    val resultAlu  = Output(UInt(32.W))
}

class Alu extends Module {
    val io = IO(new AluIO())

    val resultAlu = WireDefault(0.U(32.W))

    val oprand1 = WireDefault(0.U(32.W))
    val oprand2 = WireDefault(0.U(32.W))

    oprand1 := Mux(io.ctrlJal, io.pc, io.dataRead1)
    oprand2 := Mux(io.ctrlAluSrc, io.imm, io.dataRead2)


    switch(io.ctrlOP) {
        is(OP_NOP) {
            resultAlu := 0.U
        }
        is(OP_ADD) {
            resultAlu := oprand1 + oprand2
        }
    }
    io.resultAlu := resultAlu 
}