1. Verify the MATLAB Compiler Runtime (MCR) is installed and ensure you have installed version 8.3 (R2014a).   

	. If the MCR is not installed but you have the correct MATLAB version then enter 	>>mcrinstaller in the MATLAB command prompt. The MCRINSTALLER command displays the 	location of the MCR Installer.

	. If you do not have a MATLAB 2014a licence, download the Windows 64-bit version of 	the MCR for R2014a from the MathWorks Web site by navigating to

   		http://www.mathworks.com/products/compiler/mcr/index.html

	and complete the required installation.

2. Navigate terminal to this location or add to path.

3. Run code from the command line such as for example:
     ccfFromFile.exe C:\myTrainData.csv C:\myLoc 200 1
     predictFromCCFFile.exe C:\myLoc C:\myTestData.csv C:\myTestOutputLoc 4
   Detail of the calling syntax can be found in ccfFromFile.m
   and predictFromCCFFile.m.  Format instructions for the csv
   are given in loadCSVDataSet.m





