# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f Vysyx_24090003_cpu.mk

default: /home/jinghanhui/ysyx-workbench/npc/build/ysyx_24090003_cpu

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /home/jinghanhui/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = Vysyx_24090003_cpu
# Module prefix (from --prefix)
VM_MODPREFIX = Vysyx_24090003_cpu
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-I/home/jinghanhui/ysyx-workbench/npc/include \
	-I/home/jinghanhui/ysyx-workbench/npc/include/cpu \
	-I/home/jinghanhui/ysyx-workbench/npc/include/memory \
	-I/home/jinghanhui/ysyx-workbench/npc/include/sim_engine \
	-I/home/jinghanhui/ysyx-workbench/npc/include/reg \
	-I/home/jinghanhui/ysyx-workbench/npc/include/monitor \
	-I/home/jinghanhui/ysyx-workbench/npc/include/tracetool \
	-I/home/jinghanhui/ysyx-workbench/npc/include/monitor/sdb \
	-I/usr/lib/llvm-14/include \
	-std=c++14 \
	-fno-exceptions \
	-D_GNU_SOURCE \
	-D__STDC_CONSTANT_MACROS \
	-D__STDC_LIMIT_MACROS \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	-lreadline \
	-lLLVM-14 \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	dpi-c \
	cpu-exec \
	dut \
	hostcall \
	paddr \
	monitor \
	expr \
	sdb \
	watchpoint \
	npc-main \
	reg \
	init_sim_engine \
	sim_engine \
	get_elf \
	iringbuf \
	disasm \
	state \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	/home/jinghanhui/ysyx-workbench/npc/src \
	/home/jinghanhui/ysyx-workbench/npc/src/DPIC \
	/home/jinghanhui/ysyx-workbench/npc/src/cpu \
	/home/jinghanhui/ysyx-workbench/npc/src/cpu/difftest \
	/home/jinghanhui/ysyx-workbench/npc/src/hostcall \
	/home/jinghanhui/ysyx-workbench/npc/src/memory \
	/home/jinghanhui/ysyx-workbench/npc/src/monitor \
	/home/jinghanhui/ysyx-workbench/npc/src/monitor/sdb \
	/home/jinghanhui/ysyx-workbench/npc/src/reg \
	/home/jinghanhui/ysyx-workbench/npc/src/sim_engine \
	/home/jinghanhui/ysyx-workbench/npc/src/tracetool \
	/home/jinghanhui/ysyx-workbench/npc/src/utils \


### Default rules...
# Include list of all generated classes
include Vysyx_24090003_cpu_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

dpi-c.o: /home/jinghanhui/ysyx-workbench/npc/src/DPIC/dpi-c.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
cpu-exec.o: /home/jinghanhui/ysyx-workbench/npc/src/cpu/cpu-exec.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
dut.o: /home/jinghanhui/ysyx-workbench/npc/src/cpu/difftest/dut.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
hostcall.o: /home/jinghanhui/ysyx-workbench/npc/src/hostcall/hostcall.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
paddr.o: /home/jinghanhui/ysyx-workbench/npc/src/memory/paddr.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
monitor.o: /home/jinghanhui/ysyx-workbench/npc/src/monitor/monitor.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
expr.o: /home/jinghanhui/ysyx-workbench/npc/src/monitor/sdb/expr.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
sdb.o: /home/jinghanhui/ysyx-workbench/npc/src/monitor/sdb/sdb.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
watchpoint.o: /home/jinghanhui/ysyx-workbench/npc/src/monitor/sdb/watchpoint.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
npc-main.o: /home/jinghanhui/ysyx-workbench/npc/src/npc-main.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
reg.o: /home/jinghanhui/ysyx-workbench/npc/src/reg/reg.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
init_sim_engine.o: /home/jinghanhui/ysyx-workbench/npc/src/sim_engine/init_sim_engine.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
sim_engine.o: /home/jinghanhui/ysyx-workbench/npc/src/sim_engine/sim_engine.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
get_elf.o: /home/jinghanhui/ysyx-workbench/npc/src/tracetool/get_elf.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
iringbuf.o: /home/jinghanhui/ysyx-workbench/npc/src/tracetool/iringbuf.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
disasm.o: /home/jinghanhui/ysyx-workbench/npc/src/utils/disasm.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
state.o: /home/jinghanhui/ysyx-workbench/npc/src/utils/state.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
/home/jinghanhui/ysyx-workbench/npc/build/ysyx_24090003_cpu: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
