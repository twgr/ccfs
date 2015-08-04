# README #

### How do I get set up? ###

If using the matlab code make sure that the toolbox folder is in your path.  

In addition to the matlab code, standalone applications are available (currently windows and mac).  Details for installation of these is given in the corresponding readme files.

### Usage ###

The key functions are genCCF and predictFromCCF which can be called in the following manner:

* CCF = genCCF(nTrees,feature_matrix,class_vector) to train a CCF 
* predicted_classes = predictFromCCF(CCF,feature_test_matrix)

See exampleScript.m and exampleCrossValidation.m for example scripts

### Contribution guidelines ###

Any conversions to other code formats would be appreciated though we are currently sorting out a few out about the license, send me an email if you would like to contribute / require assistance.

### Datasets ###

Although not all datasets could be added to the repository due to license issues, all are available freely online (ORL can be found at http://www.cl.cam.ac.uk/research/dtg/attarchive/facedatabase.html, Polya at http://datam.i2r.a-star.edu.sg/datasets/krbd/SequenceData/Polya.html and the remainder from the UCI repository https://archive.ics.uci.edu/ml/datasets.html).  

In each case the last column corresponds to class label, while the first row indicates whether the variable is oridinal (1) or an unordered categorical (0).  Datasets can be easily loaded using the loadDataset.m function.
 
### Who do I talk to? ###

* Tom Rainforth: twgr@robots.ox.ac.uk