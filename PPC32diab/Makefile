# Wind River Workbench generated Makefile.
# Do not edit!!!
#
# The file ".wrmakefile" is the template used by the Wind River Workbench to
# generate the makefiles of this project. Add user-specific build targets and
# make rules only(!) in this project's ".wrmakefile" file. These will then be
# automatically dumped into the makefiles.

WIND_HOME := $(subst \,/,$(WIND_HOME))
WIND_BASE := $(subst \,/,$(WIND_BASE))
WIND_USR := $(subst \,/,$(WIND_USR))
WRVX_COMPBASE := $(subst \,/,$(WRVX_COMPBASE))

all : pre_build main_all post_build

_clean ::
	@echo "make: removing targets and objects of `pwd`"

TRACE=0
TRACEON=$(TRACE:0=@)
TRACE_FLAG=$(TRACEON:1=)

MAKEFILE := Makefile

FLEXIBLE_BUILD := 1

BUILD_SPEC = PPC32diab
DEBUG_MODE = 1
ifeq ($(DEBUG_MODE),1)
MODE_DIR := Debug
else
MODE_DIR := NonDebug
endif
OBJ_DIR := .
WS_ROOT_DIR := E:/
PRJ_ROOT_DIR := $(WS_ROOT_DIR)//422-ShooterTest-2013



#Global Build Macros
PROJECT_TYPE = DKM
DEFINES = 
EXPAND_DBG = 0


#BuildSpec specific Build Macros
VX_CPU_FAMILY = ppc
CPU = PPC32
TOOL_FAMILY = diab
TOOL = diab
TOOL_PATH = 
CC_ARCH_SPEC = -tPPCFH:vxworks63 -Xstmw-slow -DPPC32_fp60x
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 

IDE_DEFINES = 



#BuildTool flags
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
DEBUGFLAGS_C++-Compiler = -g
DEBUGFLAGS_Linker = -g
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_C-Compiler = -XO -Xsize-opt
DEBUGFLAGS_C++-Compiler = -XO -Xsize-opt
DEBUGFLAGS_Linker = -XO -Xsize-opt
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -XO -Xsize-opt
endif


#Project Targets
PROJECT_TARGETS = 422-ShooterTest-2013/$(MODE_DIR)/422-ShooterTest-2013.out \
	 422-ShooterTest-2013_partialImage/$(MODE_DIR)/422-ShooterTest-2013_partialImage.o


#Rules

# 422-ShooterTest-2013
ifeq ($(DEBUG_MODE),1)
422-ShooterTest-2013/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
422-ShooterTest-2013/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
422-ShooterTest-2013/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
422-ShooterTest-2013/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
422-ShooterTest-2013/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
422-ShooterTest-2013/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
422-ShooterTest-2013/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -XO -Xsize-opt
422-ShooterTest-2013/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -XO -Xsize-opt
422-ShooterTest-2013/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -XO -Xsize-opt
422-ShooterTest-2013/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
422-ShooterTest-2013/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
422-ShooterTest-2013/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -XO -Xsize-opt
endif
422-ShooterTest-2013/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
422-ShooterTest-2013/$(MODE_DIR)/% : IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 
422-ShooterTest-2013/$(MODE_DIR)/% : IDE_DEFINES = 
422-ShooterTest-2013/$(MODE_DIR)/% : PROJECT_TYPE = DKM
422-ShooterTest-2013/$(MODE_DIR)/% : DEFINES = 
422-ShooterTest-2013/$(MODE_DIR)/% : EXPAND_DBG = 0
422-ShooterTest-2013/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
422-ShooterTest-2013/$(MODE_DIR)/% : CPU = PPC32
422-ShooterTest-2013/$(MODE_DIR)/% : TOOL_FAMILY = diab
422-ShooterTest-2013/$(MODE_DIR)/% : TOOL = diab
422-ShooterTest-2013/$(MODE_DIR)/% : TOOL_PATH = 
422-ShooterTest-2013/$(MODE_DIR)/% : CC_ARCH_SPEC = -tPPCFH:vxworks63 -Xstmw-slow -DPPC32_fp60x
422-ShooterTest-2013/$(MODE_DIR)/% : LIBPATH = 
422-ShooterTest-2013/$(MODE_DIR)/% : LIBS = 
422-ShooterTest-2013/$(MODE_DIR)/% : OBJ_DIR := 422-ShooterTest-2013/$(MODE_DIR)

OBJECTS_422-ShooterTest-2013 = 422-ShooterTest-2013_partialImage/$(MODE_DIR)/422-ShooterTest-2013_partialImage.o

422-ShooterTest-2013/$(MODE_DIR)/422-ShooterTest-2013.out : $(OBJECTS_422-ShooterTest-2013)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@";rm -f "$@";ddump -Ng $(OBJECTS_422-ShooterTest-2013) $(IDE_LIBRARIES) | tclsh $(WIND_BASE)/host/resource/hutils/tcl/munch.tcl -c ppc > $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)dcc $(DEBUGFLAGS_Linker) $(CC_ARCH_SPEC) -Xdollar-in-ident -Xforce-declarations $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES)  -o $(OBJ_DIR)/ctdt.o -c $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)dld -tPPCFH:vxworks63 -X -r5 -r4 -o "$@" $(OBJ_DIR)/ctdt.o $(OBJECTS_422-ShooterTest-2013) $(IDE_LIBRARIES) $(LIBPATH) $(LIBS)  $(ADDED_LIBPATH) $(ADDED_LIBS) && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

422-ShooterTest-2013/$(MODE_DIR)/422-ShooterTest-2013_compile_file : $(FILE) ;

_clean :: 422-ShooterTest-2013/$(MODE_DIR)/422-ShooterTest-2013_clean

422-ShooterTest-2013/$(MODE_DIR)/422-ShooterTest-2013_clean : 
	$(TRACE_FLAG)if [ -d "422-ShooterTest-2013" ]; then cd "422-ShooterTest-2013"; rm -rf $(MODE_DIR); fi


# 422-ShooterTest-2013_partialImage
ifeq ($(DEBUG_MODE),1)
422-ShooterTest-2013_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
422-ShooterTest-2013_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
422-ShooterTest-2013_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
422-ShooterTest-2013_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
422-ShooterTest-2013_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
422-ShooterTest-2013_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
422-ShooterTest-2013_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -XO -Xsize-opt
422-ShooterTest-2013_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -XO -Xsize-opt
422-ShooterTest-2013_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -XO -Xsize-opt
422-ShooterTest-2013_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
422-ShooterTest-2013_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
422-ShooterTest-2013_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -XO -Xsize-opt
endif
422-ShooterTest-2013_partialImage/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
422-ShooterTest-2013_partialImage/$(MODE_DIR)/% : IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 
422-ShooterTest-2013_partialImage/$(MODE_DIR)/% : IDE_DEFINES = 
422-ShooterTest-2013_partialImage/$(MODE_DIR)/% : PROJECT_TYPE = DKM
422-ShooterTest-2013_partialImage/$(MODE_DIR)/% : DEFINES = 
422-ShooterTest-2013_partialImage/$(MODE_DIR)/% : EXPAND_DBG = 0
422-ShooterTest-2013_partialImage/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
422-ShooterTest-2013_partialImage/$(MODE_DIR)/% : CPU = PPC32
422-ShooterTest-2013_partialImage/$(MODE_DIR)/% : TOOL_FAMILY = diab
422-ShooterTest-2013_partialImage/$(MODE_DIR)/% : TOOL = diab
422-ShooterTest-2013_partialImage/$(MODE_DIR)/% : TOOL_PATH = 
422-ShooterTest-2013_partialImage/$(MODE_DIR)/% : CC_ARCH_SPEC = -tPPCFH:vxworks63 -Xstmw-slow -DPPC32_fp60x
422-ShooterTest-2013_partialImage/$(MODE_DIR)/% : LIBPATH = 
422-ShooterTest-2013_partialImage/$(MODE_DIR)/% : LIBS = 
422-ShooterTest-2013_partialImage/$(MODE_DIR)/% : OBJ_DIR := 422-ShooterTest-2013_partialImage/$(MODE_DIR)

422-ShooterTest-2013_partialImage/$(MODE_DIR)/Objects/422-ShooterTest-2013/CommandBase.o : $(PRJ_ROOT_DIR)/CommandBase.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


422-ShooterTest-2013_partialImage/$(MODE_DIR)/Objects/422-ShooterTest-2013/CommandBasedRobot.o : $(PRJ_ROOT_DIR)/CommandBasedRobot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


422-ShooterTest-2013_partialImage/$(MODE_DIR)/Objects/422-ShooterTest-2013/Commands/DriveFromJoysticks.o : $(PRJ_ROOT_DIR)/Commands/DriveFromJoysticks.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


422-ShooterTest-2013_partialImage/$(MODE_DIR)/Objects/422-ShooterTest-2013/OI.o : $(PRJ_ROOT_DIR)/OI.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


422-ShooterTest-2013_partialImage/$(MODE_DIR)/Objects/422-ShooterTest-2013/Subsystems/Shooter.o : $(PRJ_ROOT_DIR)/Subsystems/Shooter.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dcc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -W:c:,-Xclib-optim-off -Xansi -Xlocal-data-area-static-only -Xforce-declarations  -Xmake-dependency=0xd $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


OBJECTS_422-ShooterTest-2013_partialImage = 422-ShooterTest-2013_partialImage/$(MODE_DIR)/Objects/422-ShooterTest-2013/CommandBase.o \
	 422-ShooterTest-2013_partialImage/$(MODE_DIR)/Objects/422-ShooterTest-2013/CommandBasedRobot.o \
	 422-ShooterTest-2013_partialImage/$(MODE_DIR)/Objects/422-ShooterTest-2013/Commands/DriveFromJoysticks.o \
	 422-ShooterTest-2013_partialImage/$(MODE_DIR)/Objects/422-ShooterTest-2013/OI.o \
	 422-ShooterTest-2013_partialImage/$(MODE_DIR)/Objects/422-ShooterTest-2013/Subsystems/Shooter.o

422-ShooterTest-2013_partialImage/$(MODE_DIR)/422-ShooterTest-2013_partialImage.o : $(OBJECTS_422-ShooterTest-2013_partialImage)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)dld -tPPCFH:vxworks63 -X -r5  -o "$@" $(OBJECTS_422-ShooterTest-2013_partialImage) $(LIBPATH) $(LIBS) $(ADDED_LIBPATH) $(ADDED_LIBS)  && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

422-ShooterTest-2013_partialImage/$(MODE_DIR)/422-ShooterTest-2013_partialImage_compile_file : $(FILE) ;

_clean :: 422-ShooterTest-2013_partialImage/$(MODE_DIR)/422-ShooterTest-2013_partialImage_clean

422-ShooterTest-2013_partialImage/$(MODE_DIR)/422-ShooterTest-2013_partialImage_clean : 
	$(TRACE_FLAG)if [ -d "422-ShooterTest-2013_partialImage" ]; then cd "422-ShooterTest-2013_partialImage"; rm -rf $(MODE_DIR); fi

force : 

DEP_FILES := 422-ShooterTest-2013_partialImage/$(MODE_DIR)/Objects/422-ShooterTest-2013/CommandBase.d 422-ShooterTest-2013_partialImage/$(MODE_DIR)/Objects/422-ShooterTest-2013/CommandBasedRobot.d 422-ShooterTest-2013_partialImage/$(MODE_DIR)/Objects/422-ShooterTest-2013/Commands/DriveFromJoysticks.d \
	 422-ShooterTest-2013_partialImage/$(MODE_DIR)/Objects/422-ShooterTest-2013/OI.d 422-ShooterTest-2013_partialImage/$(MODE_DIR)/Objects/422-ShooterTest-2013/Subsystems/Shooter.d
-include $(DEP_FILES)



-include $(PRJ_ROOT_DIR)/*.makefile

-include *.makefile

JOBS?=1
ifeq ($(JOBS),1)
main_all : external_build  $(PROJECT_TARGETS)
	@echo "make: built targets of `pwd`"
else
main_all : external_build 
	@$(MAKE) -f $(MAKEFILE) --jobs $(JOBS) $(MFLAGS) $(PROJECT_TARGETS);\
	echo "make: built targets of `pwd`"
endif 

# entry point for extending the build
external_build ::
	@echo ""

# main entry point for pre processing prior to the build
pre_build :: $(PRE_BUILD_STEP) generate_sources
	@echo ""

# entry point for generating sources prior to the build
generate_sources ::
	@echo ""

# main entry point for post processing after the build
post_build :: $(POST_BUILD_STEP) deploy_output
	@echo ""

# entry point for deploying output after the build
deploy_output ::
	@echo ""

clean :: external_clean $(CLEAN_STEP) _clean

# entry point for extending the build clean
external_clean ::
	@echo ""
