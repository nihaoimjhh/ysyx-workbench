all:$(BIN)
KCONFIG_CONFIG := $(NPC_HOME)/include/generate/autoconfig
BIN = $(BUILD_DIR)/$(TOPNAME)
TOPNAME= ysyx_24090003_cpu#顶层模块名称
VERILATOR=verilator#verilator别称
INC_PATH ?=$(NPC_HOME)/include $(NPC_HOME)/include/cpu $(NPC_HOME)/include/memory $(NPC_HOME)/include/sim_engine $(NPC_HOME)/include/reg $(NPC_HOME)/include/monitor $(NPC_HOME)/include/monitor/sdb /usr/lib/llvm-14/include 
VERILATOR_CFLAGS += -MMD  --build -cc -trace -O3 --x-assign fast --x-initial fast --noassert#verilator编译verilog生成c++对象的选项
BUILD_DIR=$(NPC_HOME)/build#verilator编译的obj所在之处
OBJ_DIR = $(BUILD_DIR)/obj_dir
VSRCS = $(NPC_HOME)/src/cpu/cpu_v/*.v
CXXSRCS =  $(NPC_HOME)/src/utils/*.cc $(NPC_HOME)/src/**/*.c  $(NPC_HOME)/src/monitor/sdb/*.c#testbench
INCFLAGS = $(addprefix -I, $(INC_PATH))#verilator加路径
CXXFLAGS += $(INCFLAGS) -std=c++14   -fno-exceptions -D_GNU_SOURCE -D__STDC_CONSTANT_MACROS -D__STDC_LIMIT_MACROS 
# -D__STDC_FORMAT_MACROS  # 这是正常解析filelist之后手动加的宏，但是加上之后说是重复定义了所以先注释掉，后续有问题就加上
LDFLAGS += -lreadline -lLLVM-14
# 添加 LLVM 相关的编译和链接标志
$(shell mkdir -p $(BUILD_DIR))#创建build文件夹如果存在就不创建切不报错-p的用处
# 定义如何生成最终的可执行文件 $(BIN)
$(BIN): $(VSRCS) $(CXXSRCS)
	@rm -rf $(OBJ_DIR)  # 在每次构建之前，删除对象目录
	$(VERILATOR) $(VERILATOR_CFLAGS) --top-module $(TOPNAME) $(VSRCS) --exe  $(NPC_HOME)/src/npc-main.c $(CXXSRCS)  $(addprefix -CFLAGS , $(CXXFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) --Mdir $(OBJ_DIR) -o $(BIN)

all:$(BIN)

run: $(BIN)
	@$(BIN) $(ARGS) $(IMG) 
.PHONY:all clean run
sys:
	cp $(NPC_HOME)/src/cpu/cpu_v/*.v /home/jinghanhui/cpu_sys/cpu/cpu.srcs/sources_1/new/
vcd:${BIN} 
	@gtkwave sim.vcd
clean:
	rm -rf $(BUILD_DIR)
	-@rm -f ./*.vcd

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!