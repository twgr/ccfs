# README #

### How do I get set up? ###

Download.  Make sure that the toolbox folder is in your path.  

### Usage ###

The key functions are genCCF and predictFromCCF which can be called in the following manner:

* CCF = genCCF(nTrees,feature_matrix,class_vector) to train a CCF 
* predicted_classes = predictFromCCF(CCF,feature_test_matrix)

See exampleScript.m and exampleCrossValidation.m for example scripts

### Contribution guidelines ###

Any conversions to other code formats would be appreciated though we are currently sorting out a few out about the license, send me an email if you would like to contribute / require assistance.

### Datasets ###

Although not all datasets could be added to the repository due to license issues, all are available freely online (the majority are from the UCI repository https://archive.ics.uci.edu/ml/datasets.html, others are referenced in the paper).  

In each case the last column corresponds to class label.

### Who do I talk to? ###

* Tom Rainforth: twgr@robots.ox.ac.uk