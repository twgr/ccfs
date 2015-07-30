###########################################################################
## Makefile generated for MATLAB file/project 'growManyTreesCompileTest'. 
## 
## Makefile     : growManyTreesCompileTest_rtw.mk
## Generated on : Tue Jul 28 12:13:36 2015
## MATLAB Coder version: 2.6 (R2014a)
## 
## Build Info:
## 
## Final product: $(RELATIVE_PATH_TO_ANCHOR)\growManyTreesCompileTest.exe
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
# PERL                    PERL Tool
# GEN_LNK_SCRIPT          Perl script to generate the command file
# CMD_FILE                Command file

PRODUCT_NAME              = growManyTreesCompileTest
MAKEFILE                  = growManyTreesCompileTest_rtw.mk
COMPUTER                  = PCWIN64
MATLAB_ROOT               = C:\PROGRA~1\MATLAB\R2014a
MATLAB_BIN                = C:\PROGRA~1\MATLAB\R2014a\bin
MATLAB_ARCH_BIN           = C:\PROGRA~1\MATLAB\R2014a\bin\win64
MASTER_ANCHOR_DIR         = 
START_DIR                 = C:\Users\Tom\Documents\Git\CCF\Development\compilingCode
ARCH                      = win64
RELATIVE_PATH_TO_ANCHOR   = C:\Users\Tom\DOCUME~1\Git\CCF\DEVELO~1\COMPIL~1
PERL                      = $(MATLAB_ROOT)\sys\perl\win32\bin\perl.exe
GEN_LNK_SCRIPT            = $(MATLAB_ROOT)\rtw\c\tools\mkvc_lnk.pl
CMD_FILE                  = $(PRODUCT_NAME).lnk
NODEBUG                   = 1

###########################################################################
## TOOLCHAIN SPECIFICATIONS
###########################################################################

# Toolchain Name:          Microsoft Windows SDK v7.1 | nmake (64-bit Windows)
# Supported Version(s):    7.1
# ToolchainInfo Version:   R2014a
# Specification Revision:  1.0
# 

!include <ntwin32.mak>


#-------------------------------------------
# Macros assumed to be defined elsewhere
#-------------------------------------------

# NODEBUG
# cvarsdll
# cvarsmt
# conlibsmt
# ldebug
# conflags
# cflags

#-----------
# MACROS
#-----------

MEX_OPTS_FILE       = $(MATLAB_ROOT)\bin\$(ARCH)\mexopts\mssdk71opts.bat
MW_EXTERNLIB_DIR    = $(MATLAB_ROOT)\extern\lib\win64\microsoft
MW_LIB_DIR          = $(MATLAB_ROOT)\lib\win64
MEX_ARCH            = -win64
CPU                 = AMD64
APPVER              = 5.02
CVARSFLAG           = $(cvarsmt)
CFLAGS_ADDITIONAL   = -D_CRT_SECURE_NO_WARNINGS
CPPFLAGS_ADDITIONAL = -EHs -D_CRT_SECURE_NO_WARNINGS
LIBS_TOOLCHAIN      = $(conlibs)

TOOLCHAIN_SRCS = 
TOOLCHAIN_INCS = 
TOOLCHAIN_LIBS = 

#------------------------
# BUILD TOOL COMMANDS
#------------------------

# C Compiler: Microsoft Visual C Compiler
CC = cl

# Linker: Microsoft Visual C Linker
LD = link

# C++ Compiler: Microsoft Visual C++ Compiler
CPP = cl

# C++ Linker: Microsoft Visual C++ Linker
CPP_LD = link

# Archiver: Microsoft Visual C/C++ Archiver
AR = lib

# MEX Tool: MEX Tool
MEX_PATH = $(MATLAB_BIN)
MEX = $(MEX_PATH)\mex

# Download: Download
DOWNLOAD =

# Execute: Execute
EXECUTE = $(PRODUCT)

# Builder: NMAKE Utility
MAKE = nmake


#-------------------------
# Directives/Utilities
#-------------------------

CDEBUG              = -Zi
C_OUTPUT_FLAG       = -Fo
LDDEBUG             = /DEBUG
OUTPUT_FLAG         = -out:
CPPDEBUG            = -Zi
CPP_OUTPUT_FLAG     = -Fo
CPPLDDEBUG          = /DEBUG
OUTPUT_FLAG         = -out:
ARDEBUG             =
STATICLIB_OUTPUT_FLAG = -out:
MEX_DEBUG           = -g
RM                  = @del
ECHO                = @echo
MV                  = @ren
RUN                 = @cmd /C

#----------------------------------------
# "Faster Builds" Build Configuration
#----------------------------------------

ARFLAGS              = /nologo
CFLAGS               = $(cflags) $(CVARSFLAG) $(CFLAGS_ADDITIONAL) \
                       /Od /Oy-
CPPFLAGS             = /TP $(cflags) $(CVARSFLAG) $(CPPFLAGS_ADDITIONAL) \
                       /Od /Oy-
CPP_LDFLAGS          = $(ldebug) $(conflags) $(LIBS_TOOLCHAIN)
CPP_SHAREDLIB_LDFLAGS  = $(ldebug) $(conflags) $(LIBS_TOOLCHAIN) \
                         -dll -def:$(DEF_FILE)
DOWNLOAD_FLAGS       =
EXECUTE_FLAGS        =
LDFLAGS              = $(ldebug) $(conflags) $(LIBS_TOOLCHAIN)
MEX_CFLAGS           = $(MEX_ARCH) OPTIMFLAGS="/Od /Oy- $(MDFLAG) $(DEFINES)" $(MEX_OPTS_FLAG)
MEX_LDFLAGS          = LDFLAGS=='$$LDFLAGS'
MAKE_FLAGS           = -f $(MAKEFILE)
SHAREDLIB_LDFLAGS    = $(ldebug) $(conflags) $(LIBS_TOOLCHAIN) \
                       -dll -def:$(DEF_FILE)

#--------------------
# File extensions
#--------------------

H_EXT               = .h
OBJ_EXT             = .obj
C_EXT               = .c
EXE_EXT             = .exe
SHAREDLIB_EXT       = .dll
HPP_EXT             = .hpp
OBJ_EXT             = .obj
CPP_EXT             = .cpp
EXE_EXT             = .exe
SHAREDLIB_EXT       = .dll
STATICLIB_EXT       = .lib
MEX_EXT             = .mexw64
MAKE_EXT            = .mk


###########################################################################
## OUTPUT INFO
###########################################################################

PRODUCT = $(RELATIVE_PATH_TO_ANCHOR)\growManyTreesCompileTest.exe
PRODUCT_TYPE = "executable"
BUILD_TYPE = "Executable"

###########################################################################
## INCLUDE PATHS
###########################################################################

INCLUDES_BUILDINFO = $(START_DIR);$(START_DIR)\codegen\exe\growManyTreesCompileTest;$(MATLAB_ROOT)\extern\include;$(MATLAB_ROOT)\simulink\include;$(MATLAB_ROOT)\rtw\c\src;$(MATLAB_ROOT)\rtw\c\src\ext_mode\common;$(MATLAB_ROOT)\rtw\c\ert

INCLUDES = $(INCLUDES_BUILDINFO)

###########################################################################
## DEFINES
###########################################################################

DEFINES_STANDARD = -DMODEL=growManyTreesCompileTest -DHAVESTDIO -DUSE_RTMODEL

DEFINES = $(DEFINES_STANDARD)

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = $(START_DIR)\codegen\exe\growManyTreesCompileTest\growManyTreesCompileTest_rtwutil.c $(START_DIR)\codegen\exe\growManyTreesCompileTest\growManyTreesCompileTest_data.c $(START_DIR)\codegen\exe\growManyTreesCompileTest\growManyTreesCompileTest_initialize.c $(START_DIR)\codegen\exe\growManyTreesCompileTest\growManyTreesCompileTest_terminate.c $(START_DIR)\codegen\exe\growManyTreesCompileTest\growManyTreesCompileTest.c $(START_DIR)\codegen\exe\growManyTreesCompileTest\colon.c $(START_DIR)\codegen\exe\growManyTreesCompileTest\abs.c $(START_DIR)\codegen\exe\growManyTreesCompileTest\rdivide.c $(START_DIR)\codegen\exe\growManyTreesCompileTest\repmat.c $(START_DIR)\codegen\exe\growManyTreesCompileTest\growCCTnotRecursive.c $(START_DIR)\codegen\exe\growManyTreesCompileTest\expandNode.c $(START_DIR)\codegen\exe\growManyTreesCompileTest\sum.c $(START_DIR)\codegen\exe\growManyTreesCompileTest\bsxfun.c $(START_DIR)\codegen\exe\growManyTreesCompileTest\any.c $(START_DIR)\codegen\exe\growManyTreesCompileTest\fastUnique.c $(START_DIR)\codegen\exe\growManyTreesCompileTest\eml_sort.c $(START_DIR)\codegen\exe\growManyTreesCompileTest\diff.c $(START_DIR)\codegen\exe\growManyTreesCompileTest\randperm.c $(START_DIR)\codegen\exe\growManyTreesCompileTest\rand.c $(START_DIR)\codegen\exe\growManyTreesCompileTest\eml_rand_mt19937ar_stateful.c $(START_DIR)\codegen\exe\growManyTreesCompileTest\queryIfColumnsVary.c $(START_DIR)\codegen\exe\growManyTreesCompileTest\all.c $(START_DIR)\codegen\exe\growManyTreesCompileTest\randi.c $(START_DIR)\codegen\exe\growManyTreesCompileTest\queryIfOnlyTwoUniqueRows.c $(START_DIR)\codegen\exe\growManyTreesCompileTest\twoPointMaxMarginSplit.c $(START_DIR)\codegen\exe\growManyTreesCompileTest\qr.c $(START_DIR)\codegen\exe\growManyTreesCompileTest\sqrt.c $(START_DIR)\codegen\exe\growManyTreesCompileTest\diag.c $(START_DIR)\codegen\exe\growManyTreesCompileTest\svd.c $(START_DIR)\codegen\exe\growManyTreesCompileTest\mldivide.c $(START_DIR)\codegen\exe\growManyTreesCompileTest\power.c $(START_DIR)\codegen\exe\growManyTreesCompileTest\eye.c $(START_DIR)\codegen\exe\growManyTreesCompileTest\strcmpi.c $(START_DIR)\codegen\exe\growManyTreesCompileTest\log2.c $(START_DIR)\codegen\exe\growManyTreesCompileTest\growManyTreesCompileTest_emxutil.c $(START_DIR)\codegen\exe\growManyTreesCompileTest\growManyTreesCompileTest_emxAPI.c $(START_DIR)\codegen\exe\growManyTreesCompileTest\rt_nonfinite.c $(START_DIR)\codegen\exe\growManyTreesCompileTest\rtGetNaN.c $(START_DIR)\codegen\exe\growManyTreesCompileTest\rtGetInf.c

ALL_SRCS = $(SRCS)

###########################################################################
## OBJECTS
###########################################################################

OBJS = growManyTreesCompileTest_rtwutil.obj growManyTreesCompileTest_data.obj growManyTreesCompileTest_initialize.obj growManyTreesCompileTest_terminate.obj growManyTreesCompileTest.obj colon.obj abs.obj rdivide.obj repmat.obj growCCTnotRecursive.obj expandNode.obj sum.obj bsxfun.obj any.obj fastUnique.obj eml_sort.obj diff.obj randperm.obj rand.obj eml_rand_mt19937ar_stateful.obj queryIfColumnsVary.obj all.obj randi.obj queryIfOnlyTwoUniqueRows.obj twoPointMaxMarginSplit.obj qr.obj sqrt.obj diag.obj svd.obj mldivide.obj power.obj eye.obj strcmpi.obj log2.obj growManyTreesCompileTest_emxutil.obj growManyTreesCompileTest_emxAPI.obj rt_nonfinite.obj rtGetNaN.obj rtGetInf.obj

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

SYSTEM_LIBS = 

###########################################################################
## ADDITIONAL TOOLCHAIN FLAGS
###########################################################################

#---------------
# C Compiler
#---------------

CFLAGS_BASIC = $(DEFINES) 

CFLAGS = $(CFLAGS) $(CFLAGS_BASIC)

#-----------------
# C++ Compiler
#-----------------

CPPFLAGS_BASIC = $(DEFINES) 

CPPFLAGS = $(CPPFLAGS) $(CPPFLAGS_BASIC)

###########################################################################
## PHONY TARGETS
###########################################################################

.PHONY : all build buildobj clean info prebuild download execute set_environment_variables


all : build
	@cmd /C "@echo ### Successfully generated all binary outputs."


build : set_environment_variables prebuild $(PRODUCT)


buildobj : set_environment_variables prebuild $(OBJS) $(PREBUILT_OBJS)
	@cmd /C "@echo ### Successfully generated all binary outputs."


prebuild : 


download : build


execute : download
	@cmd /C "@echo ### Invoking postbuild tool "Execute" ..."
	$(EXECUTE) $(EXECUTE_FLAGS)
	@cmd /C "@echo ### Done invoking postbuild tool."


set_environment_variables : 
	@set INCLUDE=$(INCLUDES);$(INCLUDE)
	@set LIB=$(LIB)


###########################################################################
## FINAL TARGET
###########################################################################

#-------------------------------------------
# Create a standalone executable            
#-------------------------------------------

$(PRODUCT) : $(OBJS) $(PREBUILT_OBJS)
	$(PERL) $(GEN_LNK_SCRIPT) $(CMD_FILE) $(OBJS)
	@cmd /C "@echo ### Creating standalone executable "$(PRODUCT)" ..."
	$(LD) $(LDFLAGS) -out:$(PRODUCT) @$(CMD_FILE) $(SYSTEM_LIBS) $(TOOLCHAIN_LIBS)
	@cmd /C "@echo ### Created: $(PRODUCT)"
	$(RM) $(CMD_FILE)


###########################################################################
## INTERMEDIATE TARGETS
###########################################################################

#---------------------
# SOURCE-TO-OBJECT
#---------------------

.c.obj :
	$(CC) $(CFLAGS) -Fo"$@" "$<"


.cpp.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


{$(RELATIVE_PATH_TO_ANCHOR)}.c.obj :
	$(CC) $(CFLAGS) -Fo"$@" "$<"


{$(RELATIVE_PATH_TO_ANCHOR)}.cpp.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


{$(MATLAB_ROOT)\rtw\c\src}.c.obj :
	$(CC) $(CFLAGS) -Fo"$@" "$<"


{$(MATLAB_ROOT)\rtw\c\src}.cpp.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


{$(START_DIR)}.c.obj :
	$(CC) $(CFLAGS) -Fo"$@" "$<"


{$(START_DIR)}.cpp.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


{$(START_DIR)\codegen\exe\growManyTreesCompileTest}.c.obj :
	$(CC) $(CFLAGS) -Fo"$@" "$<"


{$(START_DIR)\codegen\exe\growManyTreesCompileTest}.cpp.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


###########################################################################
## DEPENDENCIES
###########################################################################

$(ALL_OBJS) : $(MAKEFILE) rtw_proj.tmw


###########################################################################
## MISCELLANEOUS TARGETS
###########################################################################

info : 
	@cmd /C "@echo ### PRODUCT = $(PRODUCT)"
	@cmd /C "@echo ### PRODUCT_TYPE = $(PRODUCT_TYPE)"
	@cmd /C "@echo ### BUILD_TYPE = $(BUILD_TYPE)"
	@cmd /C "@echo ### INCLUDES = $(INCLUDES)"
	@cmd /C "@echo ### DEFINES = $(DEFINES)"
	@cmd /C "@echo ### ALL_SRCS = $(ALL_SRCS)"
	@cmd /C "@echo ### ALL_OBJS = $(ALL_OBJS)"
	@cmd /C "@echo ### LIBS = $(LIBS)"
	@cmd /C "@echo ### MODELREF_LIBS = $(MODELREF_LIBS)"
	@cmd /C "@echo ### SYSTEM_LIBS = $(SYSTEM_LIBS)"
	@cmd /C "@echo ### TOOLCHAIN_LIBS = $(TOOLCHAIN_LIBS)"
	@cmd /C "@echo ### CFLAGS = $(CFLAGS)"
	@cmd /C "@echo ### LDFLAGS = $(LDFLAGS)"
	@cmd /C "@echo ### SHAREDLIB_LDFLAGS = $(SHAREDLIB_LDFLAGS)"
	@cmd /C "@echo ### CPPFLAGS = $(CPPFLAGS)"
	@cmd /C "@echo ### CPP_LDFLAGS = $(CPP_LDFLAGS)"
	@cmd /C "@echo ### CPP_SHAREDLIB_LDFLAGS = $(CPP_SHAREDLIB_LDFLAGS)"
	@cmd /C "@echo ### ARFLAGS = $(ARFLAGS)"
	@cmd /C "@echo ### MEX_CFLAGS = $(MEX_CFLAGS)"
	@cmd /C "@echo ### MEX_LDFLAGS = $(MEX_LDFLAGS)"
	@cmd /C "@echo ### DOWNLOAD_FLAGS = $(DOWNLOAD_FLAGS)"
	@cmd /C "@echo ### EXECUTE_FLAGS = $(EXECUTE_FLAGS)"
	@cmd /C "@echo ### MAKE_FLAGS = $(MAKE_FLAGS)"


clean : 
	$(ECHO) "### Deleting all derived files..."
	@if exist $(PRODUCT) $(RM) $(PRODUCT)
	$(RM) $(ALL_OBJS)
	$(ECHO) "### Deleted all derived files."


