package rv_final

import chisel3._
import chisel3.util._
import Instructions._
import CtrlDecoder._
import CtrlAluOP._

class DPIBox_Ebreak extends BlackBox with HasBlackBoxResource with HasBlackBoxPath with HasBlackBoxInline{
    val io = IO(new Bundle {
        val clock = Input(Clock())
        val in = Input(UInt(2.W))
    })
    setInline("ebreak.v",
        """
        |module DPIBox_Ebreak(
        |  input clock,
        |  input [1:0] in
        |  //output [31:0] out
        |);
        |  import "DPI-C" function void npc_trap();
        |    always @(posedge clock) begin
        |    if(in == 2'b1) begin
        |        npc_trap();
        |      end     
        |    end  
        |endmodule
        """.stripMargin)
}




class DecoderIO extends Bundle{
    val clock = Input(Clock())
    val inst = Input(UInt(32.W))
    val pc = Input(UInt(32.W))
    val dataRead1 = Input(UInt(32.W))
    val dataRead2 = Input(UInt(32.W))
    val bundleReg = new BundleReg()
    val bundleMemDataControl = new BundleMemDataControl()
    val bundleRegDataControl = new BundleRegDataControl() 
    val bundleAluOPData = new BundleAluOPData()
}

class Decoder extends Module {

    val io = IO(new DecoderIO())
    val dpi_box = Module(new DPIBox_Ebreak())

    val imm_I = Cat(Fill(20, io.inst(31)), io.inst(31, 20))
    val imm_S = Cat(Fill(20, io.inst(31)), io.inst(31, 25), io.inst(11, 7))
    val imm_B = Cat(Fill(20, io.inst(31)), io.inst(7), io.inst(30, 25), io.inst(11, 8), 0.U(1.W))
    val imm_U = Cat(io.inst(31, 12), Fill(12, 0.U))
    val imm_J = Cat(Fill(12, io.inst(31)), io.inst(31), io.inst(19, 12), io.inst(20), io.inst(30, 21), 0.U(1.W))
    
    val default = List(IMM_X, OP1_X, OP2_X, JUMP_N, ALU_X, LOAD_N, STORE_N, REG_STORE_N)

    val map = Array(
        ADDI    -> List(IMM_I, OP1_RS1, OP2_IMM, JUMP_N, ALU_ADD, LOAD_N, STORE_N, REG_STORE_Y),
        JAL     -> List(IMM_J, OP1_PC, OP2_IMM, JUMP_Y, ALU_ADD, LOAD_N, STORE_N, REG_STORE_Y),
        JALR    -> List(IMM_I, OP1_RS1, OP2_IMM, JUMP_Y, ALU_ADD, LOAD_N, STORE_N, REG_STORE_Y),
        AUIPC   -> List(IMM_U, OP1_PC, OP2_IMM, JUMP_N, ALU_ADD, LOAD_N, STORE_N, REG_STORE_Y),
        SW      -> List(IMM_S, OP1_RS1, OP2_IMM, JUMP_N, ALU_ADD, LOAD_N, STORE_Y, REG_STORE_N),
        LUI     -> List(IMM_U, OP1_RS1, OP2_IMM, JUMP_N, ALU_ADD, LOAD_N, STORE_N, REG_STORE_Y),
        EBREAK  -> List(IMM_I, OP1_RS1, OP2_RS2, JUMP_N, ALU_ADD, LOAD_N, STORE_N, REG_STORE_N)
    )

    val ctrlsignals = ListLookup(io.inst, default, map)

    val ctrlJump = ctrlsignals(3)
    val option = ctrlsignals(4)
    val ctrlLoad = ctrlsignals(5)
    val ctrlStore = ctrlsignals(6)
    val ctrlRegWrite = ctrlsignals(7)

    val imm = MuxCase(
        0.U(32.W),
        Seq(
            (ctrlsignals(0) === IMM_I) -> imm_I,
            (ctrlsignals(0) === IMM_S) -> imm_S,
            (ctrlsignals(0) === IMM_U) -> imm_U,
            (ctrlsignals(0) === IMM_J) -> imm_J,
            (ctrlsignals(0) === IMM_B) -> imm_B,
        )
    )
    val oprand1 = MuxCase(
        0.U(32.W),
        Seq(
            (ctrlsignals(1) === OP1_PC) -> io.pc,
            (ctrlsignals(1) === OP1_RS1) -> io.dataRead1,
        )
    )
    val oprand2 = MuxCase(
        0.U(32.W),
        Seq(
            (ctrlsignals(2) === OP2_IMM) -> imm,
            (ctrlsignals(2) === OP2_RS2) -> io.dataRead2,
        )
    )

    val ebreak = Mux((imm === IMM_I)&&(ctrlsignals(2) === OP2_RS2), 1.U, 0.U)
    



    io.bundleReg.rs1 := io.inst(19, 15)
    io.bundleReg.rs2 := io.inst(24, 20)
    io.bundleReg.rd := io.inst(11, 7)
    io.bundleRegDataControl.ctrlJump := ctrlJump
    io.bundleMemDataControl.ctrlLoad := ctrlLoad
    io.bundleMemDataControl.ctrlStore := ctrlStore
    io.bundleRegDataControl.ctrlRegWrite := ctrlRegWrite
    io.bundleAluOPData.oprand1 := oprand1
    io.bundleAluOPData.oprand2 := oprand2
    io.bundleAluOPData.option := option
    dpi_box.io.in := ebreak
    dpi_box.io.clock := clock
}



