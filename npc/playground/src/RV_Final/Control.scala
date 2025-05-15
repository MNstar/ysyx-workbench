package rv_final

import chisel3._
import chisel3.util._
import Instructions._

object CtrlDecoder {
    // imm_sel
    val IMM_X = 0.U(3.W)
    val IMM_I = 1.U(3.W)
    val IMM_S = 2.U(3.W)
    val IMM_U = 3.U(3.W)
    val IMM_J = 4.U(3.W)
    val IMM_B = 5.U(3.W)

    //op_rs1_sel
    val OP1_X   = 0.U(2.W)
    val OP1_PC  = 1.U(2.W)
    val OP1_RS1 = 2.U(2.W)

    //op_rs2_sel
    val OP2_X   = 0.U(2.W)
    val OP2_IMM = 1.U(2.W)
    val OP2_RS2 = 2.U(2.W)

    //jump_sel
    val JUMP_N = false.B
    val JUMP_Y = true.B

    //load_sel
    val LOAD_N = false.B
    val LOAD_Y = true.B

    //Store_Sel
    val STORE_N = false.B
    val STORE_Y = true.B

    //regstore_sel
    val REG_STORE_N = false.B
    val REG_STORE_Y = true.B

}

object CtrlAluOP {
    val ALU_X = 0.U(4.W)
    val ALU_ADD = 1.U(4.W)
    val ALU_SUB = 2.U(4.W)
}

