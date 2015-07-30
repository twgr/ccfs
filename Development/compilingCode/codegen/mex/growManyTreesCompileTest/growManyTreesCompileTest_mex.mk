START_DIR = C:\Users\Tom\DOCUME~1\Git\CCF\DEVELO~1\COMPIL~1

MATLAB_ROOT = C:\PROGRA~1\MATLAB\R2014a
MAKEFILE = growManyTreesCompileTest_mex.mk

include growManyTreesCompileTest_mex.mki


SRC_FILES =  \
	growManyTreesCompileTest_mexutil.c \
	growManyTreesCompileTest_data.c \
	growManyTreesCompileTest_initialize.c \
	growManyTreesCompileTest_terminate.c \
	growManyTreesCompileTest.c \
	colon.c \
	abs.c \
	rdivide.c \
	repmat.c \
	growCCTnotRecursive.c \
	eml_int_forloop_overflow_check.c \
	expandNode.c \
	sum.c \
	isequal.c \
	bsxfun.c \
	any.c \
	fastUnique.c \
	eml_sort.c \
	diff.c \
	randperm.c \
	queryIfColumnsVary.c \
	all.c \
	randi.c \
	queryIfOnlyTwoUniqueRows.c \
	twoPointMaxMarginSplit.c \
	error.c \
	qr.c \
	sqrt.c \
	eml_error.c \
	diag.c \
	svd.c \
	mldivide.c \
	eml_warning.c \
	power.c \
	eye.c \
	strcmpi.c \
	log2.c \
	_coder_growManyTreesCompileTest_api.c \
	growManyTreesCompileTest_emxutil.c \
	_coder_growManyTreesCompileTest_mex.c \
	_coder_growManyTreesCompileTest_info.c

MEX_FILE_NAME_WO_EXT = growManyTreesCompileTest_mex
MEX_FILE_NAME = $(MEX_FILE_NAME_WO_EXT).mexw64
TARGET = $(MEX_FILE_NAME)

SYS_LIBS = 


#
#====================================================================
# gmake makefile fragment for building MEX functions using MSVC
# Copyright 2007-2013 The MathWorks, Inc.
#====================================================================
#
SHELL = cmd
OBJEXT = obj
CC = $(COMPILER)
LD = $(LINKER)
.SUFFIXES: .$(OBJEXT)

OBJLISTC = $(SRC_FILES:.c=.$(OBJEXT))
OBJLIST  = $(OBJLISTC:.cpp=.$(OBJEXT))

ifneq (,$(findstring $(EMC_COMPILER),msvc80 msvc90 msvc100 msvc100free msvc110 msvc120 msvcsdk))
  TARGETMT = $(TARGET).manifest
  MEX = $(TARGETMT)
  STRICTFP = /fp:strict
else
  MEX = $(TARGET)
  STRICTFP = /Op
endif

target: $(MEX)

MATLAB_INCLUDES = /I "$(MATLAB_ROOT)\simulink\include"
MATLAB_INCLUDES+= /I "$(MATLAB_ROOT)\toolbox\shared\simtargets"
SYS_INCLUDE = $(MATLAB_INCLUDES)

# Additional includes

SYS_INCLUDE += /I "$(START_DIR)"
SYS_INCLUDE += /I "$(START_DIR)\codegen\mex\growManyTreesCompileTest"
SYS_INCLUDE += /I "$(START_DIR)\codegen\mex\growManyTreesCompileTest\interface"
SYS_INCLUDE += /I "$(MATLAB_ROOT)\extern\include"
SYS_INCLUDE += /I "."

DIRECTIVES = $(MEX_FILE_NAME_WO_EXT)_mex.arf
COMP_FLAGS = $(COMPFLAGS) $(OMPFLAGS) -DMX_COMPAT_32
LINK_FLAGS = $(filter-out /export:mexFunction, $(LINKFLAGS))
LINK_FLAGS += /NODEFAULTLIB:LIBCMT
ifeq ($(EMC_CONFIG),optim)
  COMP_FLAGS += $(OPTIMFLAGS) $(STRICTFP)
  LINK_FLAGS += $(LINKOPTIMFLAGS)
else
  COMP_FLAGS += $(DEBUGFLAGS)
  LINK_FLAGS += $(LINKDEBUGFLAGS)
endif
LINK_FLAGS += $(OMPLINKFLAGS)
LINK_FLAGS += /OUT:$(TARGET)
LINK_FLAGS += 

CFLAGS =  $(COMP_FLAGS) $(USER_INCLUDE) $(SYS_INCLUDE)
CPPFLAGS =  $(CFLAGS)

%.$(OBJEXT) : %.c
	$(CC) $(CFLAGS) "$<"

%.$(OBJEXT) : %.cpp
	$(CC) $(CPPFLAGS) "$<"

# Additional sources

%.$(OBJEXT) : $(START_DIR)/%.c
	$(CC) $(CFLAGS) "$<"

%.$(OBJEXT) : $(START_DIR)\codegen\mex\growManyTreesCompileTest/%.c
	$(CC) $(CFLAGS) "$<"

%.$(OBJEXT) : interface/%.c
	$(CC) $(CFLAGS) "$<"



%.$(OBJEXT) : $(START_DIR)/%.cpp
	$(CC) $(CPPFLAGS) "$<"

%.$(OBJEXT) : $(START_DIR)\codegen\mex\growManyTreesCompileTest/%.cpp
	$(CC) $(CPPFLAGS) "$<"

%.$(OBJEXT) : interface/%.cpp
	$(CC) $(CPPFLAGS) "$<"



$(TARGET): $(OBJLIST) $(MAKEFILE) $(DIRECTIVES)
	$(LD) $(LINK_FLAGS) $(OBJLIST) $(USER_LIBS) $(SYS_LIBS) @$(DIRECTIVES)
	@cmd /C "echo Build completed using compiler $(EMC_COMPILER)"

$(TARGETMT): $(TARGET)
	mt -outputresource:"$(TARGET);2" -manifest "$(TARGET).manifest"

#====================================================================

