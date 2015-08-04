1. Verify the MATLAB Compiler Runtime (MCR) is installed and ensure you have installed version 8.3 (R2014a).   

	. If the MCR is not installed but you have the correct MATLAB version then enter 	>>mcrinstaller in the MATLAB command prompt. The MCRINSTALLER command displays the 	location of the MCR Installer.

	. If you do not have a MATLAB 2014a licence, download the Macintosh version of the 	MCR for R2014a from the MathWorks Web site by navigating to

   		http://www.mathworks.com/products/compiler/mcr/index.html

	and complete the required installation.



2. Navigate terminal to this location or add to path.

3. The standalone applications are run using the files run_ccfFromFile.sh and run_predictFromCCFFile.sh.  
    	 -To run these shell scripts, type
   
       	./run_ccfFromFile.sh <mcr_directory> <argument_list>
       
    	at Linux or Mac command prompt. <mcr_directory> is the directory 
    	where version 8.3 of MCR is installed or the directory where 
    	MATLAB is installed on the machine. <argument_list> is all the 
    	arguments you want to pass to your application. For example, 
	
    	For example if you have version 8.3 of the MCR installed in 
    	/mathworks/home/application/v83, run the shell script as:
    
       	./run_ccfFromFile.sh /mathworks/home/application/v83

    	Details of the argument syntax for these applications can be
    	found respectively in ccfFromFile.m and predictFromCCFFile.m.
	Format instructions for the csv are given in loadCSVDataSet.m

	Example calls:

	./run_ccfFromFile.sh /Applications/MATLAB_R2014a.app /Users/Tom/myTrainData.csv /Users/Tom/myLoc 200 0.7
	./run_predictFromCCFFile.sh /Applications/MATLAB_R2014a.app /Users/Tom/myLoc /Users/Tom/myTestData.csv /Users/Tom/myResultsLocation 3


Appendix (MATLAB’s MCR instructions)

A. Mac systems:
   On the target machine, add the MCR directory to the environment variable 
   DYLD_LIBRARY_PATH by issuing the following commands:

        NOTE: <mcr_root> is the directory where MCR is installed
              on the target machine.         

            setenv DYLD_LIBRARY_PATH
                $DYLD_LIBRARY_PATH:
                <mcr_root>/v83/runtime/maci64:
                <mcr_root>/v83/sys/os/maci64:
                <mcr_root>/v83/bin/maci64


   For more detail information about setting MCR paths, see Distribution to End Users in 
   the MATLAB Compiler documentation in the MathWorks Documentation Center.


     
        NOTE: To make these changes persistent after logout on Linux 
              or Mac machines, modify the .cshrc file to include this  
              setenv command.
        NOTE: The environment variable syntax utilizes forward 
              slashes (/), delimited by colons (:).  
        NOTE: When deploying standalone applications, it is possible 
              to run the shell script file run_predictFromCCFFile.sh 
              instead of setting environment variables. See 
              section 2 "Files to Deploy and Package".    




