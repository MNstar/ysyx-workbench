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
    val bg = Output(UInt(2.W))
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
    
    val default = List(IMM_X, OP1_X, OP2_X, ST_XXX, JUMP_N, ALU_X, LOAD_N, STORE_N, REG_STORE_N, LD_XXX, BG_XXX)

    val map = Array(
        ADDI    -> List(IMM_I, OP1_RS1, OP2_IMM, ST_XXX, JUMP_N, ALU_ADD, LOAD_N, STORE_N, REG_STORE_Y, LD_XXX, BG_XXX),
        JAL     -> List(IMM_J, OP1_PC , OP2_IMM, ST_XXX, JUMP_Y, ALU_ADD, LOAD_N, STORE_N, REG_STORE_Y, LD_XXX, BG_XXX),
        JALR    -> List(IMM_I, OP1_RS1, OP2_IMM, ST_XXX, JUMP_Y, ALU_ADD, LOAD_N, STORE_N, REG_STORE_Y, LD_XXX, BG_XXX),
        AUIPC   -> List(IMM_U, OP1_PC , OP2_IMM, ST_XXX, JUMP_N, ALU_ADD, LOAD_N, STORE_N, REG_STORE_Y, LD_XXX, BG_XXX),
        LUI     -> List(IMM_U, OP1_RS1, OP2_IMM, ST_XXX, JUMP_N, ALU_ADD, LOAD_N, STORE_N, REG_STORE_Y, LD_XXX, BG_XXX),
        EBREAK  -> List(IMM_I, OP1_RS1, OP2_RS2, ST_XXX, JUMP_N, ALU_ADD, LOAD_N, STORE_N, REG_STORE_N, LD_XXX, BG_XXX),
        ADDIW   -> List(IMM_I, OP1_RS1, OP2_IMM, ST_XXX, JUMP_N, ALU_ADD, LOAD_N, STORE_N, REG_STORE_Y, LD_XXX, BG_XXX),
        SLTIU   -> List(IMM_I, OP1_RS1, OP2_IMM, ST_XXX, JUMP_N, ALU_SLI, LOAD_N, STORE_N, REG_STORE_Y, LD_XXX, BG_XXX),   
        SLLI    -> List(IMM_I, OP1_RS1, OP2_IMM, ST_XXX, JUMP_N, ALU_SLL, LOAD_N, STORE_N, REG_STORE_Y, LD_XXX, BG_XXX),   
        ANDI    -> List(IMM_I, OP1_RS1, OP2_IMM, ST_XXX, JUMP_N, ALU_AND, LOAD_N, STORE_N, REG_STORE_Y, LD_XXX, BG_XXX), 

        LW      -> List(IMM_I, OP1_RS1, OP2_IMM, ST_XXX, JUMP_N, ALU_ADD, LOAD_Y, STORE_N, REG_STORE_Y, LD_LW , BG_XXX),
        LH      -> List(IMM_I, OP1_RS1, OP2_IMM, ST_XXX, JUMP_N, ALU_ADD, LOAD_Y, STORE_N, REG_STORE_Y, LD_LH , BG_XXX),  
        LBU     -> List(IMM_I, OP1_RS1, OP2_IMM, ST_XXX, JUMP_N, ALU_ADD, LOAD_Y, STORE_N, REG_STORE_Y, LD_LBU, BG_XXX),   
    //     XORI    -> List(),  
    //     SRLI    -> List(),    
    //     SRAI    -> List(),   
    //     LHU     -> List(),   
 
        SW      -> List(IMM_S, OP1_RS1, OP2_IMM, ST_SW , JUMP_N, ALU_ADD, LOAD_N, STORE_Y, REG_STORE_N, LD_XXX, BG_XXX), 
        SB      -> List(IMM_S, OP1_RS1, OP2_IMM, ST_SB , JUMP_N, ALU_ADD, LOAD_N, STORE_Y, REG_STORE_N, LD_XXX, BG_XXX),
        SH      -> List(IMM_S, OP1_RS1, OP2_IMM, ST_SH , JUMP_N, ALU_ADD, LOAD_N, STORE_Y, REG_STORE_N, LD_XXX, BG_XXX), 

    //     ADDW    -> List(),
    //     ADD     -> List(),
        SUB     -> List(IMM_X, OP1_RS1, OP2_RS2, ST_XXX, JUMP_N, ALU_SUB, LOAD_N, STORE_N, REG_STORE_Y, LD_XXX, BG_XXX),
    //     OR      -> List(),
    //     AND     -> List(),
    //     SUBW    -> List(),
    //     XOR     -> List(),
    //     SLTU    -> List(),
    //     SLL     -> List(),
    //     SRL     -> List(),
    //     MUL     -> List(),
    //     DIV     -> List(),
    //     MULH    -> List(),
    //     SRA     -> List(),
    //     REM     -> List(),
    //     REMU    -> List(),
    //     DIVU    -> List(),

    //     BGE     -> List(),
        BEQ     -> List(IMM_B, OP1_PC , OP2_IMM, ST_XXX, JUMP_Y, ALU_ADD, LOAD_N, STORE_N, REG_STORE_N, LD_XXX, BG_BEQ),
        BNE     -> List(IMM_B, OP1_PC , OP2_IMM, ST_XXX, JUMP_Y, ALU_ADD, LOAD_N, STORE_N, REG_STORE_N, LD_XXX, BG_BNE),
    //     BLT     -> List(),
    //     BGEU    -> List(),
    //     BLTU    -> List(),
    )

    val ctrlsignals = ListLookup(io.inst, default, map)

    val ctrlJump = ctrlsignals(4)
    val option = ctrlsignals(5)
    val ctrlLoad = ctrlsignals(6)
    val ctrlStore = ctrlsignals(7)
    val ctrlRegWrite = ctrlsignals(8)
    val st_tape = ctrlsignals(3)
    val ld_tape = ctrlsignals(9)
    val bg_tape = ctrlsignals(10)

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
    val memSize = MuxCase(
        0.U(32.W),
        Seq(
            (st_tape === ST_SW || ld_tape === LD_LW) -> 4.U(32.W),
            (st_tape === ST_SH || ld_tape === LD_LH) -> 2.U(32.W),
            (st_tape === ST_SB || ld_tape === LD_LBU) -> 1.U(32.W),
        )
    )

    val bg = MuxCase(
        "b00".U,
        Seq(
            (bg_tape === BG_BEQ) -> Mux(io.dataRead1 === io.dataRead2, "b11".U, "b01".U),
            (bg_tape === BG_BNE) -> Mux(io.dataRead1 =/= io.dataRead2, "b11".U, "b01".U)
        )
    )
    val ebreak = Mux((imm === IMM_I)&&(ctrlsignals(2) === OP2_RS2), 1.U, 0.U)


    io.bg := bg
    io.bundleReg.rs1 := io.inst(19, 15)
    io.bundleReg.rs2 := io.inst(24, 20)
    io.bundleReg.rd := io.inst(11, 7)
    io.bundleRegDataControl.ctrlJump := ctrlJump
    io.bundleMemDataControl.ctrlLoad := ctrlLoad
    io.bundleMemDataControl.ctrlStore := ctrlStore
    io.bundleMemDataControl.memSize := memSize
    io.bundleRegDataControl.ctrlRegWrite := ctrlRegWrite
    io.bundleAluOPData.oprand1 := oprand1
    io.bundleAluOPData.oprand2 := oprand2
    io.bundleAluOPData.option := option
    io.bundleMemDataControl.memSize := memSize
    dpi_box.io.in := ebreak
    dpi_box.io.clock := clock
}



