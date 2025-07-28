# 定义顶层模块的名称
TOPNAME = top

# 定义约束文件的位置
NXDC_FILES = constr/top.nxdc

# 定义包含路径变量，如果没有指定，则为空
INC_PATH ?=

# 定义 Verilator 编译器的命令
VERILATOR = verilator

# 定义 Verilator 编译时使用的标志
# -MMD: 生成依赖文件
# --build: 构建项目
# -cc: 生成 C++ 输出
# -O3: 启用优化级别 3
# --x-assign fast: 将未指定的值初始化为快速模拟的值
# --x-initial fast: 快速初始化
# --noassert: 禁用断言
VERILATOR_CFLAGS += -MMD --build -cc  \
				-O3 --x-assign fast --x-initial fast --noassert

# 定义构建目录为当前目录下的 build 文件夹
BUILD_DIR = ./build

# 定义对象目录，该目录将在构建过程中存储中间文件
OBJ_DIR = $(BUILD_DIR)/obj_dir

# 定义最终生成的可执行文件的路径和名称
BIN = $(BUILD_DIR)/$(TOPNAME)

# 默认目标，执行此目标时，将生成最终的可执行文件 $(BIN)
default: $(BIN)

# 在构建开始时，确保构建目录存在。如果不存在，则创建它
$(shell mkdir -p $(BUILD_DIR))

# 自动生成的绑定文件源代码的位置
SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)

# 如果约束文件发生变化，则重新生成自动绑定文件
$(SRC_AUTO_BIND): $(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

# 项目中 Verilog 源文件的列表
VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")

# 项目中 C/C++ 源文件的列表
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")

# 将自动生成的绑定文件也添加到 C/C++ 源文件列表中
CSRCS += $(SRC_AUTO_BIND)

# 包含 NVBoard 相关的 Makefile 规则
include $(NVBOARD_HOME)/scripts/nvboard.mk

# Verilator 编译时的包含路径标志
INCFLAGS = $(addprefix -I, $(INC_PATH))

# 添加包含路径标志到 C++ 编译标志中，并定义顶层模块的名称
CXXFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""

# 定义如何生成最终的可执行文件 $(BIN)
$(BIN): $(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE)
	@rm -rf $(OBJ_DIR)  # 在每次构建之前，删除对象目录
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top-module $(TOPNAME) $^ \
		$(addprefix -CFLAGS , $(CXXFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))

# 定义 "all" 目标，将 "default" 目标作为依赖项
all: default

# 定义 "run" 目标，在生成可执行文件后立即运行它
run: $(BIN)
	@$^

# 定义 "clean" 目标，清除构建过程中生成的所有文件
clean:
	rm -rf $(BUILD_DIR)

# 定义默认目标、所有目标、清除目标和运行目标为伪目标
.PHONY: default all clean run

