.DEFAULT_GOAL = app

# Add necessary options if the target is a shared library
ifeq ($(SHARE),1)
SO = -so
CFLAGS  += -fPIC -fvisibility=hidden
LDFLAGS += -shared -fPIC
endif

WORK_DIR  = $(shell pwd)
BUILD_DIR = $(WORK_DIR)/build

INC_PATH := $(WORK_DIR)/include $(INC_PATH)
OBJ_DIR  = $(BUILD_DIR)/obj-$(NAME)$(SO)
BINARY   = $(BUILD_DIR)/$(NAME)$(SO)

# Compilation flags
ifeq ($(CC),clang)
CXX := clang++
else
CXX := g++
endif
LD := $(CXX)
INCLUDES = $(addprefix -I, $(INC_PATH))
CFLAGS  := -O2 -MMD -Wall -Werror $(INCLUDES) $(CFLAGS)
LDFLAGS := -O2 $(LDFLAGS)

OBJS = $(SRCS:%.c=$(OBJ_DIR)/%.o) $(CXXSRC:%.cc=$(OBJ_DIR)/%.o)

# Compilation patterns
$(OBJ_DIR)/%.o: %.c
	@echo + CC $<
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -E -o $(basename $@).i $< 
	@$(CC) $(CFLAGS) -c -o $@ $<
	$(call call_fixdep, $(@:.o=.d), $@)

$(OBJ_DIR)/%.o: %.cc
	@echo + CXX $<
	@mkdir -p $(dir $@)
	@$(CXX) $(CFLAGS) $(CXXFLAGS) -E -o $(basename $@).i $<
	@$(CXX) $(CFLAGS) $(CXXFLAGS) -c -o $@ $<
	$(call call_fixdep, $(@:.o=.d), $@)

$(info FILE: $(shell pwd)/$(shell ls | grep -E 'Makefile$$|\.mk$$'))
$(info )
$(info DEFAULT_GOAL: - $(DEFAULT_GOAL))
$(info )
$(info SHARE: - $(SHARE))
$(info )
$(info SO: - $(SO))
$(info )
$(info CFLAGS: - $(CFLAGS))
$(info )
$(info LDFLAGS: - $(LDFLAGS))
$(info )
$(info WORK_DIR: - $(WORK_DIR))
$(info )
$(info BUILD_DIR: - $(BUILD_DIR))
$(info )
$(info INC_PATH: - $(INC_PATH))
$(info )
$(info OBJ_DIR: - $(OBJ_DIR))
$(info )
$(info BINARY: - $(BINARY))
$(info )
$(info CC: - $(CC))
$(info )
$(info CXX: - $(CXX))
$(info )
$(info LD: - $(LD))
$(info )
$(info INCLUDES: - $(INCLUDES))
$(info )
$(info OBJS:)
$(foreach obj,$(OBJS),$(info - $(obj)))
$(info )
$(info SRCS: )
$(foreach scr,$(SRCS),$(info - $(scr)))
$(info )
$(info CXXSRC: - $(CXXSRC))
$(info )
# Depencies
-include $(OBJS:.o=.d)

# Some convenient rules

.PHONY: app clean count

app: $(BINARY)

$(BINARY):: $(OBJS) $(ARCHIVES)
	@echo + LD $@
	@$(LD) -o $@ $(OBJS) $(LDFLAGS) $(ARCHIVES) $(LIBS)

clean:
	-rm -rf $(BUILD_DIR)
count:
	find $(NEMU_HOME)/ -name "*.c" -o -name "*.h" | xargs cat | grep -v '^\s*$$' | wc -l
	find $(NEMU_HOME)/ -name "*.c" -o -name "*.h" | xargs cat | wc -l
#$记得转义
