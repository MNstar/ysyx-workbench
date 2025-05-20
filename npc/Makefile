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

# C/C++源文件和SystemVerilog源文件
VSRCS = $(abspath ./build/$(TOPNAME).sv)
CSRCS = $(shell find $(abspath ./csrc) -name "*.cpp" -or -name "*.cc" -or -name "*.c")

# Verilator配置
VERILATOR = verilator
VERILATOR_CFLAGS += --trace -cc --exe --build
VERILATOR_CFLAGS += -CFLAGS "-std=c++17 -pthread -I$(abspath ./csrc)"
VERILATOR_CFLAGS += -LDFLAGS "-pthread -lreadline"

# 输出目录
OBJ_DIR = ./obj_dir
VERILOG_DIR = ./build

# 可执行文件
BIN = $(OBJ_DIR)/V$(TOPNAME)
IMG ?=
RUN_ARGS := --img=$(IMG) --diff=$(DIFF)

test:
	mill -i $(PRJ).test

verilog:
	$(call git_commit, "generate verilog")
	mkdir -p $(VERILOG_DIR)
	mill -i $(PRJ).runMain Elaborate --target-dir $(VERILOG_DIR)

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

.PHONY: test verilog help reformat checkformat clean sim wave

sim: 
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	echo npc $(IMG)
	$(VERILATOR) $(VERILATOR_CFLAGS) $(VSRCS) $(CSRCS)
	@$(MAKE) -s -j5 -C $(OBJ_DIR) -f V$(TOPNAME).mk V$(TOPNAME)
	$(BIN) -i $(IMG)

wave: 
	gtkwave waveform.vcd
