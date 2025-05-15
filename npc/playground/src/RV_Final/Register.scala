package rv_final

import chisel3._
import chisel3.util._

class RegistersIO extends Bundle {
    val bundleRegDataControl = Flipped(new BundleRegDataControl())
    val bundleReg    = Flipped(new BundleReg())    
    val pc           = Input(UInt(32.W))
    val resultAlu    = Input(UInt(32.W))
    val dataRead1    = Output(UInt(32.W))
    val dataRead2    = Output(UInt(32.W))
}

class Registers extends Module {
    val io = IO(new RegistersIO())

    val regs = RegInit(VecInit(Seq.fill(32)(0.U(32.W))))

    io.dataRead1 := Mux(io.bundleReg.rs1 === 0.U, 0.U, regs(io.bundleReg.rs1)) 
    io.dataRead2 := Mux(io.bundleReg.rs2 === 0.U, 0.U, regs(io.bundleReg.rs2))

    regs(io.bundleReg.rd) := MuxCase(
        0.U(32.W),
        Seq(
            (io.bundleRegDataControl.ctrlRegWrite && io.bundleReg.rd =/= 0.U) -> Mux(io.bundleRegDataControl.ctrlJump, io.pc + 4.U, io.resultAlu),
        )
    )


    // when(io.bundleRegDataControl.ctrlRegWrite && io.bundleReg.rd =/= 0.U) {
    //     regs(io.bundleReg.rd) := Mux(io.bundleRegDataControl.ctrlJump, io.pc + 4.U, io.resultAlu)
    // }
}