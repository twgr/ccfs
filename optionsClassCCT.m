classdef optionsClassCCT
% Options class for individual CCTs and CCF.  Please examine file for
% complete options.  Common options are given below, default option is in
% parens.
% 
% bProjBoot = ('default') | true | false  % Whether to use projection 
%       % bootstrapping.  Default is false when there are only two features
%       % and true otherwise.
%
% lambdaProjBoot = ('log') | 'sqrt' | +ve integer  % Number of features to 
%       % subsample at each node or 'log' for ceil(log2(D)+1)) or 'sqrt'
%       % for ceil(sqrt(D)) 
%
% splitCriterion = ('info') | 'gini'
% 
% minPointsForSplit = 2;            % Minimum number of points at which a
%       % node is allowed to split
%
% dirIfEqual = ('first') | 'rand'   % Direction to choose when multiple
%       % projections can deliver same criterion score
% 
% bBagTrees = ('default') | true | false  % Whether to use Breiman's bagging 
%       % and train each tree on a bootstrap sample  Default is true when 
%       % there are only two features and false otherwise.
% 
% bUseParallel = (false) | true     % If true then trees are learnt in 
%       % parallel
%
% bContinueProjBootDegenerate = (true) | false   %  In the scenario where 
%       % the projection bootstrap makes the local data pure or have no X
%       % variation, the algorithm can either set the node to be a leaf or
%       % resort to using the original data for the CCA
%
% 14/06/15
    
    
    properties            
        %% COMMON TREE OPTIONS
        
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
        % integer or 'log' (equating to ceil(log2(D)+1)) or 'sqrt'
        % (equating to ceil(sqrt(D))).  This is lambda in the paper.
        lambdaProjBoot = 'log';       
                
        % Criterion for choosing the best split.  Valid options are are
        % 'gini' and 'info'
        splitCriterion = 'info';      
                
        % Minimum number of points at which a node is allowed to split 
        minPointsForSplit = 2;
        
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
        
        %% COMMON FOREST OPTIONS
        
        % Whether to use bagging.  Should be 'default', true or false.
        % 'default' is true when only 2 features and false otherwise.  See
        % bProjBoot
        bBagTrees = 'default';
        
        % If true then trees are learnt in parallel      
        bUseParallel = false;
        
        % If the test data is passed to CCF then memory can be saved by not
        % storing the trees themselves
        bKeepTrees = true;
        
        
        %% OPTIONS FOR POSSIBLE EXTENSIONS
        
        % Projections to consider for splitting at each node.  Valid
        % options are 'CCA' (note equivalent to Fisher's LDA), 'PCA',
        % 'CCAclasswise' or a cell array with any combination of the above 
        % in which case multiple projection methods are considered.  Can
        % also be empty with the alogrithm relying on axis aligned splits
        projections = 'CCA';
        
        % Allows original axes to also be considered for splitting in
        % addition to the generated projections.  Valid options are false,
        % 'sampled' and 'all'.  As 'all' considers all possible features in
        % addition to the generated features, this is not recommended if X
        % is high dimensional.
        includeOriginalAxes = false;
        
        % Options allowing each tree to be trained on a different rotation
        % of the dataset in accordance with the rotation forest algorithm  
        bApplyRotForPreprocess = false;
        RotForM = 3; % Note these three options are not usually active but
        RotForpS = 0.5; % are suggested defaults when RotForPreprocess is
        RotForpClassLeaveOut = 0.25; % used
        
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
        
        ancestralProbs
        classNames
         
    end

%%

    methods    
        function obj = optionsClassCCT(D,baseCounts)
            
            if exist('D','var') && ~isempty(D)
                obj = obj.updateForD(D);
            end
            
            if exist('baseCounts','var') && ~isempty(baseCounts)
                obj = obj.updateForBaseCounts(baseCounts);
            end
        end
        
        function obj = updateForD(obj,D)            
            % Updates the options for a particular D when lambdaProjBoot
            % has been set to 'sqrt' or 'log'
            
            if strcmpi(obj.lambdaProjBoot,'sqrt')
                obj.lambdaProjBoot = ceil(sqrt(D));
            elseif strcmpi(obj.lambdaProjBoot,'log')
                obj.lambdaProjBoot = ceil(log2(D)+1);
            elseif ~isnumeric(obj.lambdaProjBoot)
                error('Invalid option set for nIncludeCC');
            end
            
            if strcmpi(obj.bProjBoot,'default')
                if D==2
                    obj.bProjBoot = false;
                else
                    obj.bProjBoot = true;
                end
            end
            
            if strcmpi(obj.bBagTrees,'default')
                if D==2
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
    
end