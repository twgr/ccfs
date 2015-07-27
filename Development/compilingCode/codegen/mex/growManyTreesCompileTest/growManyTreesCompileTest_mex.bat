@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2014a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2014a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=growManyTreesCompileTest_mex
set MEX_NAME=growManyTreesCompileTest_mex
set MEX_EXT=.mexw64
call mexopts.bat
echo # Make settings for growManyTreesCompileTest > growManyTreesCompileTest_mex.mki
echo COMPILER=%COMPILER%>> growManyTreesCompileTest_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> growManyTreesCompileTest_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> growManyTreesCompileTest_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> growManyTreesCompileTest_mex.mki
echo LINKER=%LINKER%>> growManyTreesCompileTest_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> growManyTreesCompileTest_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> growManyTreesCompileTest_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> growManyTreesCompileTest_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> growManyTreesCompileTest_mex.mki
echo BORLAND=%BORLAND%>> growManyTreesCompileTest_mex.mki
echo OMPFLAGS= >> growManyTreesCompileTest_mex.mki
echo OMPLINKFLAGS= >> growManyTreesCompileTest_mex.mki
echo EMC_COMPILER=msvcsdk>> growManyTreesCompileTest_mex.mki
echo EMC_CONFIG=optim>> growManyTreesCompileTest_mex.mki
"C:\Program Files\MATLAB\R2014a\bin\win64\gmake" -B -f growManyTreesCompileTest_mex.mk
