losingDataSets = {'banknote','iris','libras','parkinsons'};

for nL = 1:numel(losingDataSets)
    
    namesToAdd = {losingDataSets{nL},losingDataSets{nL}};
    nInstances = [1,1];
    cumsumInstances = cumsum(nInstances);
    
    XTrain = [];
    YTrain = [];
    XTest = [];
    YTest = [];
    
    sizeSep = 1000;
    sizeAdd = 100;
    
    for n=1:numel(namesToAdd)
        for m=1:nInstances(n)
            [XTrainNew,~,YTrainNew,XTestNew,~,YTestNew] = getUCIData('C:\Users\Tom\Documents\DataSets\Formatted for Experiments\',namesToAdd{n},false);
            
            X = [XTrainNew;XTestNew];
            
            % seperate
            X = bsxfun(@plus,sizeSep*(2*(n==1)-1)*ones(1,size(X,2)),X);
            
            % Expand
            X = [X,sizeAdd*randn(size(X,1),1)];
            
            % Muffle
            if n==1
                X(:,1:(size(X,2)-1)) = X(:,1:(size(X,2)-1))+bsxfun(@times,(2*(rand(1,size(X,2)-1)>0.5)-1),X(:,end));
            else
                X(:,1:(size(X,2)-1)) = X(:,1:(size(X,2)-1))+bsxfun(@times,(2*(rand(1,size(X,2)-1)>0.5)-1),X(:,end));
            end
            
            XTrain = [XTrain;X(1:size(XTrainNew,1),:)];
            XTest = [XTest;X((size(XTrainNew,1)+1):end,:)];
            if n~=1
                if m==1
                    oldMax = max(max(YTrain),max(YTest));
                end
                YTrainNew = YTrainNew+oldMax;
                YTestNew = YTestNew+oldMax;
            end
            YTrain = [YTrain;YTrainNew];
            YTest = [YTest;YTestNew];
        end
    end
    
    X = [XTrain;XTest];
    Y = [YTrain;YTest];
    
    %save(['C:\Users\Tom\Documents\DataSets\Formatted for Experiments\ArtificialCorrelations\crossVal', filesep(), losingDataSets{nL}, datestr(now,30)],'X','Y');
    
end


%%
% 
% possibleLabels = 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ';
% YlabelTrain = cell(size(YTrain,1),1);
% YlabelTest = cell(size(YTest,1),1); K = max(YTrain);
% for k=1:K
%     YlabelTrain(YTrain==k) = {possibleLabels(k)};
%     YlabelTest(YTest==k) = {possibleLabels(k)};
% end
% fullCell = [num2cell([XTrain;XTest]),[YlabelTrain;YlabelTest]];
% fullTable = cell2table(fullCell);
% writetable(fullTable,'doubleBalance.csv');
% 
% %%
% 
% optionsFor = optionsClassCCF;
% %optionsFor.bUseParallel = true;
% optionsFor.epsilonCCA = 1e-12;
% optionsFor.XVariationTol = 1e-12;
% tic; [CCF,locPreds,probs,treePreds,cumForPreds] = genCCF(100,XTrain,YTrain,optionsFor,XTest,true); toc
% tic; Bag = TreeBagger(100,XTrain,YTrain,'NVarToSample',3); ypreds = predict(Bag,XTest); ypreds = cellfun(@str2double,ypreds); toc
% mean(locPreds==YTest)
% mean(ypreds==YTest)

%%

% namesToAdd = {'balanceScale','balanceScale'};
% nInstances = [1,1];
% cumsumInstances = cumsum(nInstances);
% 
% XTrain = [];
% YTrain = [];
% XTest = [];
% YTest = [];
% 
% sizeAdd = 100;
% bRot = false;
% bIntentifier = 'first';
% bCorrelate = true;
% 
% for n=1:numel(namesToAdd)
%     for m=1:nInstances(n)
%         [XTrainNew,~,YTrainNew,XTestNew,~,YTestNew] = getUCIData('C:\Users\Tom\Documents\DataSets\Formatted for Experiments\',namesToAdd{n},false);
%         R = random_rotation(size(XTrainNew,2));
%         if n==1
%             iCorner = m;
%         else
%             iCorner = cumsumInstances(n-1)+m;
%         end
%         if bCorrelate
%             randN = sizeAdd*randn(size(XTrainNew,1)+size(XTestNew,1),1);
%             XTrainNew = bsxfun(@plus,XTrainNew,randN(1:size(XTrainNew,1),1));
%             XTestNew = bsxfun(@plus,XTestNew,randN((1+size(XTrainNew,1)):end,1));
%         end
%         
%         if strcmpi(bIntentifier,'first')
%             bPosNeg = zeros(1,size(XTrainNew,2));
%             bPosNeg(1) = (2*(n==1)-1);
%         elseif bIntentifier
%             bPosNeg = 2*de2bi(iCorner-1,size(XTrainNew,2))-1;
%         else
%             bPosNeg = zeros(1,size(XTrainNew,2));
%         end
%         if bRot
%             XTrainNew = XTrainNew*R;
%             XTestNew = XTestNew*R;
%         end
%         XTrainNew = bsxfun(@plus,XTrainNew,sizeAdd*100*bPosNeg);
%         XTestNew = bsxfun(@plus,XTestNew,sizeAdd*100*bPosNeg);
% 
%         XTrain = [XTrain;XTrainNew];
%         XTest = [XTest;XTestNew];
%         if n~=1
%             if m==1
%                 oldMax = max(max(YTrain),max(YTest));
%             end
%             YTrainNew = YTrainNew+oldMax;
%             YTestNew = YTestNew+oldMax;
%         end
%         YTrain = [YTrain;YTrainNew];
%         YTest = [YTest;YTestNew];
%     end
% end
