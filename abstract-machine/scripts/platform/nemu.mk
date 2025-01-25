AM_SRCS := platform/nemu/trm.c \
		 platform/nemu/ioe/ioe.c \
		 platform/nemu/ioe/timer.c \
		 platform/nemu/ioe/input.c \
		 platform/nemu/ioe/gpu.c \
		 platform/nemu/ioe/audio.c \
		 platform/nemu/ioe/disk.c \
		 platform/nemu/mpe.c

CFLAGS    += -fdata-sections -ffunction-sections
LDFLAGS   += -T $(AM_HOME)/scripts/linker.ld \
		   --defsym=_pmem_start=0x80000000 --defsym=_entry_offset=0x0
LDFLAGS   += --gc-sections -e _start
NEMUFLAGS += -l $(shell dirname $(IMAGE).elf)/nemu-log.txt -b -e $(IMAGE).elf


CFLAGS += -DMAINARGS=\"$(mainargs)\"
CFLAGS += -I$(AM_HOME)/am/src/platform/nemu/include
.PHONY: $(AM_HOME)/am/src/platform/nemu/trm.c

image: $(IMAGE).elf 
	@$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt
	@echo + OBJCOPY "->" $(IMAGE_REL).bin
	@$(OBJCOPY) -S --set-section-flags .bss=alloc,contents -O binary $(IMAGE).elf $(IMAGE).bin

#变成.bin文件
run: image
	$(MAKE) -C $(NEMU_HOME) ISA=$(ISA) run ARGS="$(NEMUFLAGS)" IMG=$(IMAGE).bin
#和nemu的接口
gdb: image
	$(MAKE) -C $(NEMU_HOME) ISA=$(ISA) gdb ARGS="$(NEMUFLAGS)" IMG=$(IMAGE).bin
$(info FILE: $(shell pwd)/$(shell ls | grep -E 'Makefile$$|\.mk$$'))
$(info )
$(info )
$(info )
$(info )
$(info )
$(info )
$(info )
$(info )
$(info )
$(info )
$(info )
$(info )
$(info )
$(info )
$(info )
$(info )
$(info )
$(info )
$(info )
$(info )
$(info )

$(info MAKE: - $(MAKE))
$(info )
$(info AM_SRCS :)
$(foreach src,$(AM_SRCS),$(info - $(src)))
$(info )
$(info CFLAGS: - $(CFLAGS))
$(info )
$(info LDFLAGS: - $(LDFLAGS))
$(info )
$(info NEMUFLAGS: - $(NEMUFLAGS))
$(info )
$(info mainargs: - $(mainargs))
$(info )

$(info OBJDUMP: - $(OBJDUMP))
$(info )
$(info IMAGE: - $(IMAGE))
$(info )
$(info IMAGE_REL: - $(IMAGE_REL))
$(info )
$(info NEMU_HOME: - $(NEMU_HOME))
$(info )
$(info ISA: - $(ISA))
$(info )
$(info OBJCOPY: - $(OBJCOPY))
$(info )