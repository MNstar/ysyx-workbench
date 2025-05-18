# BUILD_DIR = ./build

# PRJ = playground

# test:
# 	mill -i $(PRJ).test

# verilog:
# 	$(call git_commit, "generate verilog")
# 	mkdir -p $(BUILD_DIR)
# 	mill -i $(PRJ).runMain Elaborate --target-dir $(BUILD_DIR)

# help:
# 	mill -i $(PRJ).runMain Elaborate --help

# reformat:
# 	mill -i __.reformat

# checkformat:
# 	mill -i __.checkFormat

# bsp:
# 	mill -i mill.bsp.BSP/install

# idea:
# 	mill -i mill.idea.GenIdea/idea

# clean:
# 	-rm -rf $(BUILD_DIR)

# .PHONY: test verilog help reformat checkformat clean

# sim:
# 	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
# 	@echo "Write this Makefile by yourself."

# -include ../Makefile



TOPNAME = Top
PRJ = playground

VSRCS += $(shell find $(abspath ./vsrc) -name "*.sv")
CSRCS += $(shell find $(abspath ./csrc) -name "*.cpp" -or -name "*.cc" -or -name "*.c")

VERILATOR = verilator
VERILATOR_CFLAGS += --trace -cc --exe --build
VERILATOR_CFLAGS += -CFLAGS "-std=c++17 -pthread -I$(abspath ./csrc) $(shell llvm-config --cxxflags)"
VERILATOR_CFLAGS += -LDFLAGS "-pthread -latomic -lreadline $(shell llvm-config --ldflags --libs)"

OBJ_DIR = ./obj_dir
VERILOG_DIR = ./build

BIN = $(OBJ_DIR)/$(TOPNAME)
IMG ?=
RUN_ARGS := --img=$(IMG) --diff=$(DIFF)

test:
	mill -i $(PRJ).test

verilog:
	$(call git_commit, "generate verilog")
	mkdir -p $(VERILOG_DIR)
	mill -i $(PRJ).runMain Elaborate --target-dir $(VERILOG_DIR)
	# python clean.py

help:
	mill -i $(PRJ).runMain Elaborate --help

reformat:
	mill -i __.reformat

checkformat:
	mill -i __.checkFormat

bsp:
	mill -i mill.bsp.BSP/install

idea:
	mill -i mill.idea.GenIdea/idea

clean:
	-rm -rf $(OBJ_DIR)

.PHONY: test verilog help reformat checkformat clean

sim: 
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by yourself."
	$(VERILATOR) $(VERILATOR_CFLAGS) $(VERILOG_DIR)/$(TOPNAME).sv ${CSRCS} 
	@$(MAKE) -s -j5 -C $(OBJ_DIR) -f V$(TOPNAME).mk V$(TOPNAME)
	$(OBJ_DIR)/V$(TOPNAME) -i /home/tianyi/ysyx/ysyx-workbench/am-kernels/tests/cpu-tests/build/dummy-riscv32e-npc.bin

wave: 
	gtkwave waveform.vcd
