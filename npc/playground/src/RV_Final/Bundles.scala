package rv_final
import chisel3._
import chisel3.util._


class BundleReg extends Bundle {
    val rs1 = Output(UInt(5.W))
    val rs2 = Output(UInt(5.W))
    val rd  = Output(UInt(5.W))
}

class BundleMemDataControl extends Bundle {
    val ctrlLoad = Output(Bool())
    val ctrlStore = Output(Bool())
    val memSize = Output(UInt(32.W))
}

class BundleRegDataControl extends Bundle {
    val ctrlJump = Output(Bool())
    val ctrlRegWrite = Output(Bool())
}

class BundleAluOPData extends Bundle {
    val oprand1 = Output(UInt(32.W))
    val oprand2 = Output(UInt(32.W))
    val option = Output(UInt(4.W))
}

