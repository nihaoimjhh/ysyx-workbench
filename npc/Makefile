all:$(BIN)
BIN = $(BUILD_DIR)/$(TOPNAME)
TOPNAME= ysyx_24090003_cpu#顶层模块名称
VERILATOR=verilator#verilator别称
INC_PATH ?=$(NPC_HOME)/include $(NPC_HOME)/include/cpu $(NPC_HOME)/include/memory $(NPC_HOME)/include/sim_engine 
VERILATOR_CFLAGS += -MMD  --build -cc -trace -O3 --x-assign fast --x-initial fast --noassert#verilator编译verilog生成c++对象的选项
BUILD_DIR=$(NPC_HOME)/build#verilator编译的obj所在之处
OBJ_DIR = $(BUILD_DIR)/obj_dir
VSRCS = $(NPC_HOME)/src/cpu/cpu_v/*.v
CSRCS = $(NPC_HOME)/src/**/*.c#testbench
INCFLAGS = $(addprefix -I, $(INC_PATH))#verilator加路径
CXXFLAGS += $(INCFLAGS) # 添加包含路径标志到 C++ 编译标志中，并定义顶层模块的名称 
$(shell mkdir -p $(BUILD_DIR))#创建build文件夹如果存在就不创建切不报错-p的用处
# 定义如何生成最终的可执行文件 $(BIN)
$(BIN): $(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE)
	@rm -rf $(OBJ_DIR)  # 在每次构建之前，删除对象目录
	$(VERILATOR) $(VERILATOR_CFLAGS) --top-module $(TOPNAME) $(VSRCS) --exe  $(NPC_HOME)/src/npc-main.c $(CSRCS) $(addprefix -CFLAGS , $(CXXFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) --Mdir $(OBJ_DIR) -o $(BIN)

all:$(BIN)

run: $(BIN)
	@$(BIN) $(ARGS) $(IMG)
.PHONY:all clean run
sys:
	cp $(NPC_HOME)/src/cpu/cpu_v/*.v /home/jinghanhui/cpu_sys/cpu/cpu.srcs/sources_1/new/
clean:
	rm -rf $(BUILD_DIR)
	-@rm -f ./*.vcd
sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!




