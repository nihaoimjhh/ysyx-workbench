#***************************************************************************************
# Copyright (c) 2014-2022 Zihao Yu, Nanjing University
#
# NEMU is licensed under Mulan PSL v2.
# You can use this software according to the terms and conditions of the Mulan PSL v2.
# You may obtain a copy of Mulan PSL v2 at:
#          http://license.coscl.org.cn/MulanPSL2
#
# THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
# EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
# MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
#
# See the Mulan PSL v2 for more details.
#**************************************************************************************/
#手搓并行测试
SRC_DIR = csrc
BUILD_DIR = build
RESULT_DIR = results
SRCS = $(wildcard $(SRC_DIR)/*.c)
EXECS = $(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%, $(SRCS))
usecase= 10
RESULT1 = $(RESULT_DIR)/testbench1
RESULT2 = $(RESULT_DIR)/testbench2
RESULT3 = $(RESULT_DIR)/testbench3
RESULT4 = $(RESULT_DIR)/testbench4
RESULT5 = $(RESULT_DIR)/testbench5
RESULT6 = $(RESULT_DIR)/testbench6
RESULT7 = $(RESULT_DIR)/testbench7
RESULT8 = $(RESULT_DIR)/testbench8
RESULT9 = $(RESULT_DIR)/testbench9
RESULT10 = $(RESULT_DIR)/testbench10
RESULT11 = $(RESULT_DIR)/testbench11
RESULT12 = $(RESULT_DIR)/testbench12
RESULT13 = $(RESULT_DIR)/testbench13
RESULT14 = $(RESULT_DIR)/testbench14
RESULT15 = $(RESULT_DIR)/testbench15
COMBINED_RESULT = $(RESULT_DIR)/testbench

all: $(EXECS)


$(BUILD_DIR)/%: $(SRC_DIR)/%.c
	@mkdir -p $(BUILD_DIR) # 确保 build 目录存在
	gcc -o $@ $<
run: $(EXECS)
	@mkdir -p $(RESULT_DIR) # 确保 results 目录存在
	@bash -c '\
	./$(BUILD_DIR)/gen-expr1 $(usecase) & \
	./$(BUILD_DIR)/gen-expr2 $(usecase) & \
	./$(BUILD_DIR)/gen-expr3 $(usecase) & \
	./$(BUILD_DIR)/gen-expr4 $(usecase) & \
	./$(BUILD_DIR)/gen-expr5 $(usecase) & \
	./$(BUILD_DIR)/gen-expr6 $(usecase) & \
	./$(BUILD_DIR)/gen-expr7 $(usecase) & \
	./$(BUILD_DIR)/gen-expr8 $(usecase) & \
	./$(BUILD_DIR)/gen-expr9 $(usecase) & \
	./$(BUILD_DIR)/gen-expr10 $(usecase) & \
	./$(BUILD_DIR)/gen-expr11 $(usecase) & \
	./$(BUILD_DIR)/gen-expr12 $(usecase) & \
	./$(BUILD_DIR)/gen-expr13 $(usecase) & \
	./$(BUILD_DIR)/gen-expr14 $(usecase) & \
	./$(BUILD_DIR)/gen-expr15 $(usecase) & \
	wait;'#等待一起才cat不然不能正常拼接
	cat $(RESULT1) $(RESULT2) $(RESULT3) $(RESULT4) $(RESULT5) $(RESULT6)  $(RESULT7)  $(RESULT8)  $(RESULT9)  $(RESULT10)  $(RESULT11)  $(RESULT12)  $(RESULT13)  $(RESULT14)  $(RESULT15)  > $(COMBINED_RESULT)
	rm $(RESULT1) $(RESULT2) $(RESULT3) $(RESULT4) $(RESULT5) $(RESULT6) $(RESULT7)  $(RESULT8)  $(RESULT9)  $(RESULT10)  $(RESULT11)  $(RESULT12)  $(RESULT13)  $(RESULT14)  $(RESULT15)   
clean:
	rm -rf $(BUILD_DIR) $(RESULT_DIR)
	
