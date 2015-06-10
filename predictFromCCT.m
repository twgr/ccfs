function [prediction, countsLeaf] = predictFromCCT(tree,X)

    if tree.bLeaf
        prediction = tree.label*ones(size(X,1),1);
        countsLeaf = repmat(tree.trainingCounts,size(X,1),1);
    else
        if ~isempty(tree.R)
            X = X*tree.R;
        end
        
        if tree.isCART
            [prediction,~,nodes] = predict(tree.CARTtree,X);
            classesPresent = unique(tree.CARTtree.Y);
            countsLeaf = zeros(size(prediction,1),numel(tree.trainingCounts));
            countsLeaf(:,classesPresent) = tree.CARTtree.ClassCount(nodes,:);
        else            
            bLeft = ((bxfun(@minus,X(:,tree.iIn),tree.muX))*tree.decisionProjection)<=tree.paritionPoint;
            prediction = NaN(size(X,1),1);
            if any(bLeft)
                [prediction(bLeft), countsLeaf(bLeft,:)] = predictFromTreeStructs(tree.lessthanChild,X(bLeft,:));
            end
            if any(~bLeft)
                [prediction(~bLeft), countsLeaf(~bLeft,:)] = predictFromTreeStructs(tree.greaterthanChild,X(~bLeft,:));
            end
        end
    end
end