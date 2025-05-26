package rv_final

import chisel3._
import chisel3.util._
import CtrlAluOP._


class AluIO extends Bundle {
    val bundleAluOPData = Flipped(new BundleAluOPData())
    val resultAlu = Output(UInt(32.W)) 
}

class Alu extends Module {
    val io = IO(new AluIO())

    val option = io.bundleAluOPData.option
    val oprand1 = io.bundleAluOPData.oprand1
    val oprand2 = io.bundleAluOPData.oprand2

    val result = MuxCase(
        0.U(32.W),
        Seq(
            (option === ALU_ADD) -> (oprand1 + oprand2),
            (option === ALU_SUB) -> (oprand1 - oprand2),
            (option === ALU_SLI) -> (oprand1 < oprand2),
            (option === ALU_SLL) -> (oprand1 << oprand2(5, 0)),
            (option === ALU_AND) -> (oprand1 & oprand2),
        )
    )
    io.resultAlu := result

}






