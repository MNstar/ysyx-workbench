package riscv32e
import chisel3._


class BundleReg extends Bundle {
    val rs1 = Output(UInt(5.W))
    val rs2 = Output(UInt(5.W))
    val rd  = Output(UInt(5.W))
}