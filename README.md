# Canonical Correlation Forests #

Paper: https://arxiv.org/abs/1507.05444

### Updates 25/07/17 ###

- Relatively major code overhaul to accompany new journal submission
- Added support for regression and multiple outputs
- Added implementations for other algorithms such as rotation forests and random roation forests
- Minor changes to call structure of genCCF - there is an additional input after the ouputs (i.e. the fourth input) that specifies whether the problem tackled is a regression or classification problem
- General clean up and improvements
- Unfortunately no longer provide stand-alone applications.  Limited versions of these are availible at commit 91c8ca2 on the master branch.

### How do I get set up? ###

Use the add_path function to add everything to your MATLAB path and your ready to go (you need to do this each time you make a new MATLAB).

### Usage ###

The key functions are genCCF and predictFromCCF which can be called in the following manner:

* CCF = genCCF(nTrees,input_features,outputs) to train a CCF 
* predictions = predictFromCCF(CCF,test_input_features)

See example_scripts folder for various example scripts for regression, classification etc.

### Contribution guidelines ###

Any improvements or conversions to other code formats would be appreciated, send me an email if you would like to contribute / require assistance.

### Datasets ###

Although not all datasets could be added to the repository due to license issues, all are available freely online. Provided datasets can be easily loaded using the loadDataset.m function.  See loadCSVDataset for formatting specifications used.

Most classification datasets are from the UCI repository (https://archive.ics.uci.edu/ml/datasets.html).  Exceptions are spirals for which a local script is provided, ORL which can be found at http://www.cl.cam.ac.uk/research/dtg/attarchive/facedatabase.html, and Polya which can be bound at http://datam.i2r.a-star.edu.sg/datasets/krbd/SequenceData/Polya.html.

Regression datasets are all taken from the WEKA repository (http://www.cs.waikato.ac.nz/ml/weka/datasets.html).

Multi-output datasets come either from the UCI repository or Mulan repository (http://mulan.sourceforge.net/datasets-mtr.html).
 
### Who do I talk to? ###

* Tom Rainforth: twgr@robots.ox.ac.uk