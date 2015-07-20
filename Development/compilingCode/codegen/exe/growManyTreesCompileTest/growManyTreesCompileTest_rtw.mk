###########################################################################
## Makefile generated for MATLAB file/project 'growManyTreesCompileTest'. 
## 
## Makefile     : growManyTreesCompileTest_rtw.mk
## Generated on : Thu Jul 16 14:40:30 2015
## MATLAB Coder version: 2.6 (R2014a)
## 
## Build Info:
## 
## Final product: $(RELATIVE_PATH_TO_ANCHOR)/growManyTreesCompileTest
## Product type : executable
## 
###########################################################################

###########################################################################
## MACROS
###########################################################################

# Macro Descriptions:
# PRODUCT_NAME            Name of the system to build
# MAKEFILE                Name of this makefile
# COMPUTER                Computer type. See the MATLAB "computer" command.

PRODUCT_NAME              = growManyTreesCompileTest
MAKEFILE                  = growManyTreesCompileTest_rtw.mk
COMPUTER                  = MACI64
MATLAB_ROOT               = /Applications/MATLAB_R2014a.app
MATLAB_BIN                = /Applications/MATLAB_R2014a.app/bin
MATLAB_ARCH_BIN           = /Applications/MATLAB_R2014a.app/bin/maci64
MASTER_ANCHOR_DIR         = 
START_DIR                 = /Users/twgr/Documents/Git/CCF/ccf/compilingCode
ARCH                      = maci64
RELATIVE_PATH_TO_ANCHOR   = /Users/twgr/Documents/Git/CCF/ccf/compilingCode

###########################################################################
## TOOLCHAIN SPECIFICATIONS
###########################################################################

# Toolchain Name:          Clang v3.1 | gmake (64-bit Mac)
# Supported Version(s):    3.1
# ToolchainInfo Version:   R2014a
# Specification Revision:  1.0
# 

#-----------
# MACROS
#-----------

ANSI_OPTS       = -fno-common -fexceptions
CPP_ANSI_OPTS   = -fno-common -fexceptions
ARCHS           = x86_64
XCODE_SDK_VER   = $(shell xcodebuild -showsdks | perl -anle 'BEGIN{@l = "";} push @l, $$F[-1] if /macosx/; END{ sort @l; $$_ = $$l[1]; s/macosx//; print $$_;}')
XCODE_SDK       = MacOSX$(XCODE_SDK_VER).sdk
XCODE_DEVEL_DIR = $(shell xcode-select -print-path)
XCODE_SDK_ROOT  = $(shell find $(XCODE_DEVEL_DIR) -name $(XCODE_SDK))

TOOLCHAIN_SRCS = 
TOOLCHAIN_INCS = 
TOOLCHAIN_LIBS = 

#------------------------
# BUILD TOOL COMMANDS
#------------------------

# C Compiler: Clang C Compiler
CC = xcrun clang

# Linker: Clang Linker
LD = xcrun clang

# C++ Compiler: Clang C++ Compiler
CPP = xcrun clang++

# C++ Linker: Clang C++ Linker
CPP_LD = xcrun clang++

# Archiver: Clang Archiver
AR = xcrun ar

# MEX Tool: MEX Tool
MEX_PATH = $(MATLAB_BIN)
MEX = $(MEX_PATH)/mex

# Download: Download
DOWNLOAD =

# Execute: Execute
EXECUTE = $(PRODUCT)

# Builder: GMAKE Utility
MAKE_PATH = %MATLAB%/bin/maci64
MAKE = $(MAKE_PATH)/gmake


#-------------------------
# Directives/Utilities
#-------------------------

CDEBUG              = -g
C_OUTPUT_FLAG       = -o
LDDEBUG             = -g
OUTPUT_FLAG         = -o
CPPDEBUG            = -g
CPP_OUTPUT_FLAG     = -o
CPPLDDEBUG          = -g
OUTPUT_FLAG         = -o
ARDEBUG             =
STATICLIB_OUTPUT_FLAG =
MEX_DEBUG           = -g
RM                  = @rm -f
ECHO                = @echo
MV                  = @mv
RUN                 =

#----------------------------------------
# "Faster Builds" Build Configuration
#----------------------------------------

ARFLAGS              = ruvs
CFLAGS               = -c -isysroot $(XCODE_SDK_ROOT) -arch $(ARCHS) $(ANSI_OPTS) \
                       -O0
CPPFLAGS             = -c -isysroot $(XCODE_SDK_ROOT) -arch $(ARCHS) $(CPP_ANSI_OPTS) \
                       -O0
CPP_LDFLAGS          = -arch $(ARCHS) -isysroot $(XCODE_SDK_ROOT) -L"$(MATLAB_ARCH_BIN)"
CPP_SHAREDLIB_LDFLAGS  = -dynamiclib -isysroot $(XCODE_SDK_ROOT) -L"$(MATLAB_ARCH_BIN)" \
                         -Wl,$(LD_NAMESPACE) $(LD_UNDEFS)
DOWNLOAD_FLAGS       =
EXECUTE_FLAGS        =
LDFLAGS              = -arch $(ARCHS) -isysroot $(XCODE_SDK_ROOT) -L"$(MATLAB_ARCH_BIN)"
MEX_CFLAGS           = -MATLAB_ARCH=$(ARCH) $(INCLUDES) \
                         \
                       COPTIMFLAGS="$(ANSI_OPTS)  \
                       -O0 \
                        $(DEFINES)" \
                         \
                       -silent
MEX_LDFLAGS          = LDFLAGS=='$$LDFLAGS'
MAKE_FLAGS           = -f $(MAKEFILE)
SHAREDLIB_LDFLAGS    = -dynamiclib -isysroot $(XCODE_SDK_ROOT) -L"$(MATLAB_ARCH_BIN)" \
                       -Wl,$(LD_NAMESPACE) $(LD_UNDEFS)

#--------------------
# File extensions
#--------------------

H_EXT               = .h
OBJ_EXT             = .o
C_EXT               = .c
EXE_EXT             =
SHAREDLIB_EXT       = .so
HPP_EXT             = .hpp
OBJ_EXT             = .o
CPP_EXT             = .cpp
EXE_EXT             =
SHAREDLIB_EXT       = .so
STATICLIB_EXT       = .a
MEX_EXT             = .mexmaci64
MAKE_EXT            = .mk


###########################################################################
## OUTPUT INFO
###########################################################################

PRODUCT = $(RELATIVE_PATH_TO_ANCHOR)/growManyTreesCompileTest
PRODUCT_TYPE = "executable"
BUILD_TYPE = "Executable"

###########################################################################
## INCLUDE PATHS
###########################################################################

INCLUDES_BUILDINFO = -I$(START_DIR) -I$(START_DIR)/codegen/exe/growManyTreesCompileTest -I$(MATLAB_ROOT)/extern/include -I$(MATLAB_ROOT)/simulink/include -I$(MATLAB_ROOT)/rtw/c/src -I$(MATLAB_ROOT)/rtw/c/src/ext_mode/common -I$(MATLAB_ROOT)/rtw/c/ert

INCLUDES = $(INCLUDES_BUILDINFO)

###########################################################################
## DEFINES
###########################################################################

DEFINES_STANDARD = -DMODEL=growManyTreesCompileTest -DHAVESTDIO -DUSE_RTMODEL -DUNIX

DEFINES = $(DEFINES_STANDARD)

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = $(START_DIR)/codegen/exe/growManyTreesCompileTest/growManyTreesCompileTest_rtwutil.c $(START_DIR)/codegen/exe/growManyTreesCompileTest/growManyTreesCompileTest_data.c $(START_DIR)/codegen/exe/growManyTreesCompileTest/growManyTreesCompileTest_initialize.c $(START_DIR)/codegen/exe/growManyTreesCompileTest/growManyTreesCompileTest_terminate.c $(START_DIR)/codegen/exe/growManyTreesCompileTest/growManyTreesCompileTest.c $(START_DIR)/codegen/exe/growManyTreesCompileTest/colon.c $(START_DIR)/codegen/exe/growManyTreesCompileTest/abs.c $(START_DIR)/codegen/exe/growManyTreesCompileTest/rdivide.c $(START_DIR)/codegen/exe/growManyTreesCompileTest/repmat.c $(START_DIR)/codegen/exe/growManyTreesCompileTest/growCCTnotRecursive.c $(START_DIR)/codegen/exe/growManyTreesCompileTest/expandNode.c $(START_DIR)/codegen/exe/growManyTreesCompileTest/sum.c $(START_DIR)/codegen/exe/growManyTreesCompileTest/bsxfun.c $(START_DIR)/codegen/exe/growManyTreesCompileTest/any.c $(START_DIR)/codegen/exe/growManyTreesCompileTest/fastUnique.c $(START_DIR)/codegen/exe/growManyTreesCompileTest/eml_sort.c $(START_DIR)/codegen/exe/growManyTreesCompileTest/diff.c $(START_DIR)/codegen/exe/growManyTreesCompileTest/randperm.c $(START_DIR)/codegen/exe/growManyTreesCompileTest/rand.c $(START_DIR)/codegen/exe/growManyTreesCompileTest/eml_rand_mt19937ar_stateful.c $(START_DIR)/codegen/exe/growManyTreesCompileTest/queryIfColumnsVary.c $(START_DIR)/codegen/exe/growManyTreesCompileTest/all.c $(START_DIR)/codegen/exe/growManyTreesCompileTest/randi.c $(START_DIR)/codegen/exe/growManyTreesCompileTest/queryIfOnlyTwoUniqueRows.c $(START_DIR)/codegen/exe/growManyTreesCompileTest/twoPointMaxMarginSplit.c $(START_DIR)/codegen/exe/growManyTreesCompileTest/qr.c $(START_DIR)/codegen/exe/growManyTreesCompileTest/sqrt.c $(START_DIR)/codegen/exe/growManyTreesCompileTest/diag.c $(START_DIR)/codegen/exe/growManyTreesCompileTest/svd.c $(START_DIR)/codegen/exe/growManyTreesCompileTest/mldivide.c $(START_DIR)/codegen/exe/growManyTreesCompileTest/power.c $(START_DIR)/codegen/exe/growManyTreesCompileTest/eye.c $(START_DIR)/codegen/exe/growManyTreesCompileTest/strcmpi.c $(START_DIR)/codegen/exe/growManyTreesCompileTest/log2.c $(START_DIR)/codegen/exe/growManyTreesCompileTest/growManyTreesCompileTest_emxutil.c $(START_DIR)/codegen/exe/growManyTreesCompileTest/growManyTreesCompileTest_emxAPI.c $(START_DIR)/codegen/exe/growManyTreesCompileTest/rt_nonfinite.c $(START_DIR)/codegen/exe/growManyTreesCompileTest/rtGetNaN.c $(START_DIR)/codegen/exe/growManyTreesCompileTest/rtGetInf.c

ALL_SRCS = $(SRCS)

###########################################################################
## OBJECTS
###########################################################################

OBJS = growManyTreesCompileTest_rtwutil.o growManyTreesCompileTest_data.o growManyTreesCompileTest_initialize.o growManyTreesCompileTest_terminate.o growManyTreesCompileTest.o colon.o abs.o rdivide.o repmat.o growCCTnotRecursive.o expandNode.o sum.o bsxfun.o any.o fastUnique.o eml_sort.o diff.o randperm.o rand.o eml_rand_mt19937ar_stateful.o queryIfColumnsVary.o all.o randi.o queryIfOnlyTwoUniqueRows.o twoPointMaxMarginSplit.o qr.o sqrt.o diag.o svd.o mldivide.o power.o eye.o strcmpi.o log2.o growManyTreesCompileTest_emxutil.o growManyTreesCompileTest_emxAPI.o rt_nonfinite.o rtGetNaN.o rtGetInf.o

ALL_OBJS = $(OBJS)

###########################################################################
## PREBUILT OBJECT FILES
###########################################################################

PREBUILT_OBJS = 

###########################################################################
## LIBRARIES
###########################################################################

LIBS = 

###########################################################################
## SYSTEM LIBRARIES
###########################################################################

SYSTEM_LIBS = -lm

###########################################################################
## ADDITIONAL TOOLCHAIN FLAGS
###########################################################################

#---------------
# C Compiler
#---------------

CFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CFLAGS += $(CFLAGS_BASIC)

#-----------------
# C++ Compiler
#-----------------

CPPFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CPPFLAGS += $(CPPFLAGS_BASIC)

###########################################################################
## PHONY TARGETS
###########################################################################

.PHONY : all build buildobj clean info prebuild download execute


all : build
	@echo "### Successfully generated all binary outputs."


build : prebuild $(PRODUCT)


buildobj : prebuild $(OBJS) $(PREBUILT_OBJS)
	@echo "### Successfully generated all binary outputs."


prebuild : 


download : build


execute : download
	@echo "### Invoking postbuild tool "Execute" ..."
	$(EXECUTE) $(EXECUTE_FLAGS)
	@echo "### Done invoking postbuild tool."


###########################################################################
## FINAL TARGET
###########################################################################

#-------------------------------------------
# Create a standalone executable            
#-------------------------------------------

$(PRODUCT) : $(OBJS) $(PREBUILT_OBJS)
	@echo "### Creating standalone executable "$(PRODUCT)" ..."
	$(LD) $(LDFLAGS) -o $(PRODUCT) $(OBJS) $(SYSTEM_LIBS) $(TOOLCHAIN_LIBS)
	@echo "### Created: $(PRODUCT)"


###########################################################################
## INTERMEDIATE TARGETS
###########################################################################

#---------------------
# SOURCE-TO-OBJECT
#---------------------

%.o : %.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : %.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/codegen/exe/growManyTreesCompileTest/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/codegen/exe/growManyTreesCompileTest/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


###########################################################################
## DEPENDENCIES
###########################################################################

$(ALL_OBJS) : $(MAKEFILE) rtw_proj.tmw


###########################################################################
## MISCELLANEOUS TARGETS
###########################################################################

info : 
	@echo "### PRODUCT = $(PRODUCT)"
	@echo "### PRODUCT_TYPE = $(PRODUCT_TYPE)"
	@echo "### BUILD_TYPE = $(BUILD_TYPE)"
	@echo "### INCLUDES = $(INCLUDES)"
	@echo "### DEFINES = $(DEFINES)"
	@echo "### ALL_SRCS = $(ALL_SRCS)"
	@echo "### ALL_OBJS = $(ALL_OBJS)"
	@echo "### LIBS = $(LIBS)"
	@echo "### MODELREF_LIBS = $(MODELREF_LIBS)"
	@echo "### SYSTEM_LIBS = $(SYSTEM_LIBS)"
	@echo "### TOOLCHAIN_LIBS = $(TOOLCHAIN_LIBS)"
	@echo "### CFLAGS = $(CFLAGS)"
	@echo "### LDFLAGS = $(LDFLAGS)"
	@echo "### SHAREDLIB_LDFLAGS = $(SHAREDLIB_LDFLAGS)"
	@echo "### CPPFLAGS = $(CPPFLAGS)"
	@echo "### CPP_LDFLAGS = $(CPP_LDFLAGS)"
	@echo "### CPP_SHAREDLIB_LDFLAGS = $(CPP_SHAREDLIB_LDFLAGS)"
	@echo "### ARFLAGS = $(ARFLAGS)"
	@echo "### MEX_CFLAGS = $(MEX_CFLAGS)"
	@echo "### MEX_LDFLAGS = $(MEX_LDFLAGS)"
	@echo "### DOWNLOAD_FLAGS = $(DOWNLOAD_FLAGS)"
	@echo "### EXECUTE_FLAGS = $(EXECUTE_FLAGS)"
	@echo "### MAKE_FLAGS = $(MAKE_FLAGS)"


clean : 
	$(ECHO) "### Deleting all derived files..."
	$(RM) $(PRODUCT)
	$(RM) $(ALL_OBJS)
	$(ECHO) "### Deleted all derived files."


