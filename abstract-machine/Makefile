# Makefile for AbstractMachine Kernels and Libraries

### *Get a more readable version of this Makefile* by `make html` (requires python-markdown)
html:
	cat Makefile | sed 's/^\([^#]\)/    \1/g' | markdown_py > Makefile.html
.PHONY: html

## 1. Basic Setup and Checks

### Default to create a bare-metal kernel image
ifeq ($(MAKECMDGOALS),)
  MAKECMDGOALS  = image
  .DEFAULT_GOAL = image
endif
#规定目标就是镜像文件，整个am就是输出镜像文件给nemu使用，因为nemu只有一个端口，在monitor里面实现，使用getopt来读取文件，需要提供文件的位置，读取之后就
#可以运行了
### Override checks when `make clean/clean-all/html`
ifeq ($(findstring $(MAKECMDGOALS),clean|clean-all|html),)

### Print build info message
$(info # Building $(NAME)-$(MAKECMDGOALS) [$(ARCH)])
### Echo variables for debugging

### Check: environment variable `$AM_HOME` looks sane
ifeq ($(wildcard $(AM_HOME)/am/include/am.h),)
  $(error $$AM_HOME must be an AbstractMachine repo)
endif

### Check: environment variable `$ARCH` must be in the supported list
ARCHS = $(basename $(notdir $(shell ls $(AM_HOME)/scripts/*.mk)))#把scripts文件夹下的所有mk文件的文件名去掉后缀等价于loongarch32r-nemu mips32-nemu native riscv32e-nemu riscv32e-npc riscv32-nemu riscv64-nemu spike x86_64-qemu x86-nemu x86-qemu
ifeq ($(filter $(ARCHS), $(ARCH)), )
  $(error Expected $$ARCH in {$(ARCHS)}, Got "$(ARCH)")
endif

### Extract instruction set architecture (`ISA`) and platform from `$ARCH`. Example: `ARCH=x86_64-qemu -> ISA=x86_64; PLATFORM=qemu`
ARCH_SPLIT = $(subst -, ,$(ARCH))#把riscv-nemu分割成riscv和nemu
ISA        = $(word 1,$(ARCH_SPLIT))#riscv
PLATFORM   = $(word 2,$(ARCH_SPLIT))#nemu

### Check if there is something to build
ifeq ($(flavor SRCS), undefined)
  $(error Nothing to build)
endif

### Checks end here
endif

## 2. General Compilation Targets

### Create the destination directory (`build/$ARCH`)
WORK_DIR  = $(shell pwd)#在构建的时候，会把当前的路径赋值给WORK_DIR，这个路径是在makefile文件所在的路径，先是cputest然后构建lib由于130行的在make -C，所以会把lib的路径赋值给WORK_DIR那么就会是am的路径
DST_DIR   = $(WORK_DIR)/build/$(ARCH)#是什么路径就在什么地方创建一个build文件夹
$(shell mkdir -p $(DST_DIR))

### Compilation targets (a binary image or archive)
IMAGE_REL = build/$(NAME)-$(ARCH)##这个是镜像文件的相对路径RELATIVE
IMAGE     = $(abspath $(IMAGE_REL))#这个是镜像文件的绝对路径,说是image其实就是在哪而已，并且最后和库文件一起打包成一个elf文件
ARCHIVE   = $(WORK_DIR)/build/$(NAME)-$(ARCH).a#这个是库文件的绝对路径，有这个名字而已但是不一定有这个文件，archive是一个库文件，只会在archive这个目标下生成，这个目标只会在am和klib生成这个文件是一个.a文件，是一个静态库文件	

### Collect the files to be linked: object files (`.o`) and libraries (`.a`)
OBJS      = $(addprefix $(DST_DIR)/, $(addsuffix .o, $(basename $(SRCS))))
LIBS     := $(sort $(LIBS) am klib) # lazy evaluation ("=") causes infinite recursions
LINKAGE   = $(OBJS) \
  $(addsuffix -$(ARCH).a, $(join \
    $(addsuffix /build/, $(addprefix $(AM_HOME)/, $(LIBS))), \
    $(LIBS) ))

## 3. General Compilation Flags

### (Cross) compilers, e.g., mips-linux-gnu-g++
AS        = $(CROSS_COMPILE)gcc
CC        = $(CROSS_COMPILE)gcc
CXX       = $(CROSS_COMPILE)g++
LD        = $(CROSS_COMPILE)ld
AR        = $(CROSS_COMPILE)ar
OBJDUMP   = $(CROSS_COMPILE)objdump
OBJCOPY   = $(CROSS_COMPILE)objcopy
READELF   = $(CROSS_COMPILE)readelf

### Compilation flags
INC_PATH += $(WORK_DIR)/include $(addsuffix /include/, $(addprefix $(AM_HOME)/, $(LIBS)))#work_dir有include文件夹，am和klib也有include文件夹，所以这里是把这三个文件夹的路径都加入到INC_PATH中
INCFLAGS += $(addprefix -I, $(INC_PATH))#-I后面跟的是路径，这个是gcc的参数，表示头文件的路径

ARCH_H := arch/$(ARCH).h
CFLAGS   += -O2 -MMD -Wall -Werror $(INCFLAGS) \
            -D__ISA__=\"$(ISA)\" -D__ISA_$(shell echo $(ISA) | tr a-z A-Z)__ \
            -D__ARCH__=$(ARCH) -D__ARCH_$(shell echo $(ARCH) | tr a-z A-Z | tr - _) \
            -D__PLATFORM__=$(PLATFORM) -D__PLATFORM_$(shell echo $(PLATFORM) | tr a-z A-Z | tr - _) \
            -DARCH_H=\"$(ARCH_H)\" \
            -fno-asynchronous-unwind-tables -fno-builtin -fno-stack-protector \
            -Wno-main -U_FORTIFY_SOURCE -fvisibility=hidden
CXXFLAGS +=  $(CFLAGS) -ffreestanding -fno-rtti -fno-exceptions
ASFLAGS  += -MMD $(INCFLAGS)
LDFLAGS  += -z noexecstack
#参数可以直接对宏进行处理 CFLAGS
## 4. Arch-Specific Configurations

### Paste in arch-specific configurations (e.g., from `scripts/x86_64-qemu.mk`)
-include $(AM_HOME)/scripts/$(ARCH).mk

### Fall back to native gcc/binutils if there is no cross compiler
ifeq ($(wildcard $(shell which $(CC))),)
  $(info #  $(CC) not found; fall back to default gcc and binutils)
  CROSS_COMPILE :=
endif

## 5. Compilation Rules

### Rule (compile): a single `.c` -> `.o` (gcc)
$(DST_DIR)/%.o: %.c
	@mkdir -p $(dir $@) && echo + CC $<
	$(CC) -std=gnu11 $(CFLAGS) -c -o $@ $(realpath $<)

### Rule (compile): a single `.cc` -> `.o` (g++)
$(DST_DIR)/%.o: %.cc
	@mkdir -p $(dir $@) && echo + CXX $<
	@$(CXX) -std=c++17 $(CXXFLAGS) -c -o $@ $(realpath $<)

### Rule (compile): a single `.cpp` -> `.o` (g++)
$(DST_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@) && echo + CXX $<
	@$(CXX) -std=c++17 $(CXXFLAGS) -c -o $@ $(realpath $<)

### Rule (compile): a single `.S` -> `.o` (gcc, which preprocesses and calls as)
$(DST_DIR)/%.o: %.S
	@mkdir -p $(dir $@) && echo + AS $<
	@$(AS) $(ASFLAGS) -c -o $@ $(realpath $<)
#全部文件变成.o文件包括c文件，cc文件，cpp文件，S文件
### Rule (recursive make): build a dependent library (am, klib, ...)
$(LIBS): %:
	@$(MAKE) -s -C $(AM_HOME)/$* archive

### Rule (link): objects (`*.o`) and libraries (`*.a`) -> `IMAGE.elf`, the final ELF binary to be packed into image (ld)
$(IMAGE).elf: $(OBJS) $(LIBS)
	@echo + LD "->" $(IMAGE_REL).elf
	@$(LD) $(LDFLAGS) -o $(IMAGE).elf --start-group $(LINKAGE) --end-group

### Rule (archive): objects (`*.o`) -> `ARCHIVE.a` (ar)
$(ARCHIVE): $(OBJS)
	@echo + AR "->" $(shell realpath $@ --relative-to .)
	@$(AR) rcs $(ARCHIVE) $(OBJS)

### Rule (`#include` dependencies): paste in `.d` files generated by gcc on `-MMD`
-include $(addprefix $(DST_DIR)/, $(addsuffix .d, $(basename $(SRCS))))

## 6. Miscellaneous

$(info FILE: $(shell pwd)/$(shell ls | grep -E 'Makefile$$|\.mk$$'))
$(info ccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc)
$(info CROSS_COMPILE: - $(CROSS_COMPILE))
$(info )
$(info MAKECMDGOALS: - $(MAKECMDGOALS))
$(info )
$(info NAME: - $(NAME))
$(info )
$(info ARCH: - $(ARCH))
$(info )
$(info AM_HOME: - $(AM_HOME))
$(info )
$(info ARCHS: - $(ARCHS))
$(info )
$(info ARCH_SPLIT: - $(ARCH_SPLIT))
$(info )
$(info ISA: - $(ISA))
$(info )
$(info PLATFORM: - $(PLATFORM))
$(info )
$(info SRCS: )
$(foreach scr,$(SRCS),$(info - $(scr)))
$(info )
$(info OBJS: )
$(foreach obj,$(OBJS),$(info - $(obj)))
$(info )
$(info LIBS: )
$(foreach lib,$(LIBS),$(info - $(lib)))
$(info )
$(info WORK_DIR: - $(WORK_DIR))
$(info )
$(info DST_DIR: - $(DST_DIR))
$(info )
$(info IMAGE_REL: - $(IMAGE_REL))
$(info )
$(info IMAGE: - $(IMAGE))
$(info )
$(info ARCHIVE: - $(ARCHIVE))
$(info )
$(info INC_PATH: )
$(foreach inc,$(INC_PATH),$(info - $(inc)))
$(info )

$(info 8888888888888888888888888888888888888888888888888888888888888888888)
$(info CxxFLAGS: - $(CXXFLAGS))
$(info )
### Build order control
image: image-dep
archive: $(ARCHIVE)
image-dep: $(OBJS) $(LIBS)
	@echo \# Creating image [$(ARCH)]
.PHONY: image image-dep archive run $(LIBS)

### Clean a single project (remove `build/`)
clean:
	rm -rf Makefile.html $(WORK_DIR)/build/
.PHONY: clean

### Clean all sub-projects within depth 2 (and ignore errors)
CLEAN_ALL = $(dir $(shell find . -mindepth 2 -name Makefile))
clean-all: $(CLEAN_ALL) clean
$(CLEAN_ALL):
	-@$(MAKE) -s -C $@ clean
.PHONY: clean-all $(CLEAN_ALL)
