classdef optionsClassCCF
% Options class for individual CCTs and CCF.  Please examine file for
% complete options.  Common options are given below, default option is in
% parens.  To run CCF-Bag then use options = defaultOptionsCCFBag
% which will set bProjBoot = false and bBagTrees = true.  Note CCF-Bag
% should be used if access to out of bag error is required as CCFs do not
% by default use bagging.
% 
% Although no options require setting, it may be beneficial to change some
% of the following options in certain scenarios.
%
% lambda    = ('log') | 'sqrt' | +ve integer  % Number of features to 
%       % subsample at each node or 'log' for ceil(log2(D)+1)) or 'sqrt'
%       % for ceil(sqrt(D)) 
%
% splitCriterion = ('info') | 'gini'
% 
% bProjBoot = ('default') | true | false  % Whether to use projection 
%       % bootstrapping.  Default is false when there are only two features
%       % and true otherwise.
%
% bBagTrees = ('default') | true | false  % Whether to use Breiman's bagging 
%       % and train each tree on a bootstrap sample  Default is true when 
%       % there are only two features and false otherwise.
% 
% bUseParallel = (false) | true     % If true then trees are learnt in 
%       % parallel
%
% epsilonCCA = (1e-4) | +ve real % Tolerance parameter for rank reduction 
%       % during the CCA.  It can be desirable to lower these if the data
%       % has extreme correlation.  Otherwise I small amount of
%       % regularization against noise / numerical instability is useful.
%
% 09/10/15
    
    
    properties            
        %% COMMON TREE OPTIONS
        % FIXME change this description and others -> its when lambda=D
        % Whether to use projection bootstrapping.  Should be 'default',
        % true or false.  The 'default' is true unless there are only two
        % input features in which case the algorithm by default uses
        % bagging rather than projection bootstrapping.  The rational for
        % this is that with 2 features, one must either resort to axis
        % aligned splits or all the features for each split in which case
        % the projection bootstrap gives insufficient decorrelation to 
        % avoid overfitting.  In both cases bagging is preferable.
        bProjBoot = 'default';
                
        % Number of features to subsample at each node.  Should be positive
        % integer or 'log' (equating to ceil(log2(D)+1)), 'sqrt'
        % (equating to ceil(sqrt(D))) or 'all'.  This is lambda in the paper.
        lambda = 'log';       
                
        % Criterion for choosing the best split.  Valid options are are
        % 'gini' and 'info' for classification and 'mse' for regression
        splitCriterion = 'info';      % Default = 'mse' for regression
        %TODO add alternatives for regression (e.g. curvature)
                
        % Minimum number of points at which a node is allowed to split 
        minPointsForSplit = 2; % Default = 6 for regression
        
        % Minimum number of points allowed in a leaf.
        minPointsLeaf = 1; % Default = 3 for regression
        
        % When multiple projection vectors can give equivalent split
        % criterion scores, one can either choose which to use randomly
        % ('rand') or take the first ('first') on the basis that the 
        % components are in decreasing order of correlation for CCA.  If
        % using more than just CCA for projections, using 'first' also
        % allows preferential treatment to certain projections
        dirIfEqual = 'first';
        
        % In the scenario where the projection bootstrap makes the local
        % data pure or have no X variation, the algorithm can either set
        % the node to be a leaf or resort to using the original data for
        % the CCA
        bContinueProjBootDegenerate = true;
        
        % Tolerance parameter for rank reduction during the CCA
        epsilonCCA = 1e-4;
        
        % When doing regression with mse splits, the node is made into a
        % leaf if the mse (i.e. variance) of the data is less than this
        % tolerance times the mse of the full data set.  
        mseErrorTolerance = 1e-6;
        
        %% COMMON FOREST OPTIONS
        
        % Whether to use bagging.  Should be 'default', true or false.
        % 'default' is true when only 2 features and false otherwise.  See
        % bProjBoot
        bBagTrees = 'default';
        
        % If true then trees are learnt in parallel      
        bUseParallel = true;
        
        %% OPTIONS FOR POSSIBLE EXTENSIONS
        
        % Projections to consider for splitting at each node.  Structure
        % with the possible fields 'CCA', 'PCA', 'CCAclasswise' 
        % (i.e. do CCA on each output / class seperately), 'Original' and 
        % 'Random' (i.e. random rotation).  Each field should be either be 
        % logical or a number between 0 and 1.  When a field is true that 
        % projection is always performed If values are reals, then a 
        % projection is sampled with proportional probability from those 
        % fields.  For example struct('CCA',true,'PCA',0.3,','Random',0.7)
        % will always do a CCA and one of PCA and Random with respective
        % probabilities 0.3 and 0.7.  Note this sampling is done
        % independently at each projection calculation.
        projections = struct('CCA',true);
        
        % If true, doing regression with multiple outputs and doing CCA 
        % projections, then the mse of the output components is calculated 
        % instead of the original values
        bUseOutputComponentsMSE = false;
        
        % Allows rotations of individual trees before training.  Valid
        % options are 'none' (default), 'pca', 'random' and
        % 'rotationForest'.
        treeRotation = 'none'; %FIXME limited support for anything but none at present
        
        RotForM = 3; % Note these three options are not usually active but
        RotForpS = 0.5; % are suggested defaults when Rotation Forest is
        RotForpClassLeaveOut = 0.25; % used for treeRotation
        
        % Option allowing random starting rotation
        bRandomRotationStart = false;
        
        % Option that allows non-equal weighting of votes for each class
        % such that a prior can be placed on the classes.  Further work
        % would be required to establish the exact nature of this prior and
        % its consistency.  There is also likely to be better ways of apply
        % such a prior.  By default the vote factor is constant across
        % classes except that ties are broken by giving preference to
        % classes that occur more commonly in training data.  For non
        % default vector should be set to a row vector of weights for each
        % class.
        voteFactor = 'default';
        
        % Options that allow nonlinear features to be included in the CCA
        % in accordance with Lopez-Paz's randomized kernel cca.  Initial 
        % results suggest that this is not a useful expansion of the model
        
        bRCCA = false;
        rccaLengthScale = 0.1;
        rccaNFeatures = 50;
        rccaRegLambda = 1e-3;
        rccaIncludeOriginal = false;
        
        
        % TODO An option for the RF-Ensemble of Zhang might be useful
        
        %% NUMERICAL OPTIONS
        
        % Maximum tree depth at which spliting is allowed.  Should be
        % a positive integer or 'stack' to simply set this to a value that
        % avoids crashing from over-sized stacks.
        maxDepthSplit = 'stack';        
        
        % Points closer than this tolerance are considered the same the
        % avoid splitting on numerical error
        XVariationTol = 1e-10;
        
        
        %% Properties that are not set but used as a place to store info
        
        ancestralProbs % Used for tie breaking by defaulting to parent node
        classNames     % Used to convert the predictors back to their class names
        
        org_muY        % Used in regression for converting the Z scores back 
        org_stdY       % to original values when creating the leaf model
        
        mseTotal       % Used as a baseline in regression with 
                       % mseErrorTolerance for early termination when
                       % there is negiligable variation in the outputs.
                       % Terminates if mse<mseTotal*mseErrorTolerance
         
    end

%%

    methods    
                        
        function obj = updateForD(obj,D)            
            % Updates the options for a particular D when lambda
            % has been set to 'sqrt' or 'log'
            
            if strcmpi(obj.lambda,'sqrt')
                obj.lambda = ceil(sqrt(D));
            elseif strcmpi(obj.lambda,'log')
                obj.lambda = ceil(log2(D)+1);
            elseif strcmpi(obj.lambda,'all')
                obj.lambda = D;
            elseif ~isnumeric(obj.lambda)
                error('Invalid option set for lambda');
            end
            
            if strcmpi(obj.bProjBoot,'default')
                if D<=obj.lambda
                    obj.bProjBoot = false;
                else
                    obj.bProjBoot = true;
                end
            end
            
            if strcmpi(obj.bBagTrees,'default')
                if D<=obj.lambda
                    obj.bBagTrees = true;
                else
                    obj.bBagTrees = false;
                end
            end
            
        end
        
        function obj = updateForBaseCounts(obj,baseCounts)
            % Updates field used for storing details of parents for making
            % decisions when class assignment is a tie. Also updates the
            % options for tie breaks 
            
            obj.ancestralProbs = baseCounts/sum(baseCounts);
            
            if strcmpi(obj.voteFactor,'default')
                % By default use only a tie breaker based on selecting the
                % most populous class in a tie.  The rand is to ensure we
                % don't give unwanted to preference to earlier classes over
                % random splitting when there is a tie in both the votes
                % and base counts.  Note at the base counts are integers
                % then the random factor is always smaller.  The
                % denominator is setup such that an extra vote always
                % predominates over the difference in the vote factors
                % provided there is less than 1e7 trees.
                obj.voteFactor = 1 + (baseCounts+rand(size(baseCounts)))/(1e7*sum(baseCounts));
            end
            
        end
    end
    
    methods (Static)
        
        
        function obj = defaultOptionsCCFBag
            % Automatically sets up options for running CCF-Bag which using
            % bagging instead of projection bootstrapping (please see the
            % paper for further details).  This options should be used if
            % the oob error is needed (e.g. for hyperparameter
            % optimization).
            
            obj = optionsClassCCF;
            obj.bProjBoot = false;
            obj.bBagTrees = true;
        end
        
        function obj = defaultOptionsForSingleCCTUsage
           % Allows easy calling of a default options set for when growing
           % a single CCT tree for individual use rather than as part of a
           % forest.  First input is number of features prior to expansion
           % D and second is the total number of each counts for each class           
           
            obj = optionsClassCCF;
            obj.bProjBoot = false;
            obj.lambda = 'all';
            obj.bBagTrees = false;
        end
        
        function obj = defaultOptionsReg
            % Constructs default options for regression
            
            obj = optionsClassCCF;
            obj.splitCriterion = 'mse';
            obj.minPointsForSplit = 6;
            obj.minPointsLeaf = 3;
        end
        
        function obj = defaultOptionsRegCCFBag
            % Constructs default options for regression and CCFBag
            
            obj = optionsClassCCF.defaultOptionsReg;
            obj.bProjBoot = false;
            obj.bBagTrees = true;
        end
        
        function obj = defaultOptionsRegForSingleCCTUsage
           % Allows easy calling of a default options set for when growing
           % a single CCT tree for individual use rather than as part of a
           % forest.  First input is number of features prior to expansion
           % D and second is the total number of each counts for each class           
           
            obj = optionsClassCCF.defaultOptionsReg;
            obj.bProjBoot = false;
            obj.lambda = 'all';
            obj.bBagTrees = false;
        end
        
        function obj = defaultOptionsRF
            % Sets up options for running the package as a random forest
            % package.  This is not recommended as general usage (as more
            % efficient implementation exist), but is a useful debugger to
            % check that the differences come from the CCF extension rather
            % than unexpected options variations
           
            obj = optionsClassCCF;
            obj.bBagTrees = true;
            obj.bProjBoot = false;
            obj.projections = struct('Original',true);
        end
        
        function obj = defaultOptionsRFReg
           % As optionsClassCCF.defaultOptionsRF but for regression
           
           obj = optionsClassCCF.defaultOptionsRF;
           obj.splitCriterion = 'mse';
           obj.minPointsForSplit = 6;
           obj.minPointsLeaf = 3;
        end        
    end
    
end