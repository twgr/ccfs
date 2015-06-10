classdef optionsClassCCT
% Options class for individual CCTs and CCF.  Please examine file for
% complete options.  Common options are given below, default option is in
% parens.
% 
% bProjBoot = (false) | true        % Whether to use projection bootstrapping
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
% dirIfEqual = ('maxCorr') | 'rand'   % Direction to choose when multiple
%       % projections can deliver same criterion score
% 
% bBagTrees = (false) | true        % Whether to use Breiman's bagging and 
%       % train each tree on a bootstrap sample
% 
% bUseParallel = (false) | true     % If true then trees are learnt in parallel
% 
% bKeepTrees = (true) | false       % If true the individual trees are not
%       % kept in order to save memory
%
% TR 10/06/15
    
    
    properties            
        %% COMMON TREE OPTIONS
        
        % Whether to use projection bootstrapping
        bProjBoot = false;
                
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
        % ('rand') or take the direction which gave the maximal correlation
        % during the CCA ('maxCorr', default).  In the case of also
        % including search of the original axes, 'maxCorr' is recommended
        dirIfEqual = 'maxCorr';
        
        
        %% COMMON FOREST OPTIONS
        
        % Whether to use bagging
        bBagTrees = false;
        
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
        RotForM = 3;
        RotForpS = 0.5;   
        RotForpClassLeaveOut = 0.25;
        
        % Option allowing random starting rotation
        bRandomRotationStart = false;
        
        % TODO An option for the RF-Ensemble of Zhang might be useful
        
        %% NUMERICAL OPTIONS
        
        % Maximum tree depth at which spliting is allowed.  Should be
        % a positive integer or 'stack' to simply set this to a value that
        % avoids crashing from over-sized stacks.
        maxDepthSplit = 'stack';        
        
        % Points closer than this tolerance are considered the same the
        % avoid splitting on numerical error
        XVariationTol = 1e-10;
        
        
        %% Properties that are not set but used as a store point for passing down algorithm
        
        pWhenEven         
         
    end

%%

    methods    
        function obj = optionsClassCCT(D,parentCounts)
            
            if exist('D','var') && ~isempty(D)
                obj = obj.updateForD(D);
            end
            
            if exist('parentCounts','var') && ~isempty(parentCounts)
                obj = obj.updateForpWhenEven(parentCounts);
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
        end
        
        function obj = updateForpWhenEven(obj,parentCounts)
            % Updates field used for storing details of parents for making
            % decisions when class assignment is a tie.
            
            obj.pWhenEven = parentCounts/sum(parentCounts);
        end
        
    end
    
end