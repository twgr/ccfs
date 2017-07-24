function writeResultCSVs(outputLocation,OutStruct,nOutputsToStore,YTest)
%writeResultCSVs Writes results to csv files in folder.  For format of
%outputs refer to ccfFromFile.m

bDoAccs = true;
if ~exist('YTest','var') || isempty(YTest)
    YTest = []; 
    bDoAccs = false;
end

if nOutputsToStore>1
    if isnumeric(OutStruct.forestPredictsTest)
        if bDoAccs
            csvwrite([outputLocation filesep() 'TrueTestLabels.csv'],YTest);
        end
        csvwrite([outputLocation filesep() 'PredictedTestLabels.csv'],OutStruct.forestPredictsTest);
    else
        if bDoAccs
            writetable(cell2table(YTest),[outputLocation filesep() 'TrueTestLabels.csv'],'WriteVariableNames',false);
        end
        writetable(cell2table(OutStruct.forestPredictsTest),[outputLocation filesep() 'PredictedTestLabels.csv'],'WriteVariableNames',false);
    end
    if bDoAccs
        csvwrite([outputLocation filesep() 'PercentTestMissclassified.csv'],OutStruct.percentMissclassified);
    end
    if nOutputsToStore>2
        if isnumeric(YTest)
            csvwrite([outputLocation filesep() 'PredictedTestProbabilities.csv'],OutStruct.forestProbsTest);
        else
            tableProbs = array2table(OutStruct.forestProbsTest);
            tableProbs.Properties.VariableNames = OutStruct.classNames;
            writetable(tableProbs,[outputLocation filesep() 'PredictedTestProbabilities.csv']);
        end
        if nOutputsToStore>3
            if isnumeric(OutStruct.treePredictsTest)
                csvwrite([outputLocation filesep() 'IndividualTreePredictions.csv'],OutStruct.treePredictsTest);
            else
                writetable(cell2table(OutStruct.treePredictsTest),[outputLocation filesep() 'IndividualTreePredictions.csv'],'WriteVariableNames',false);
            end
            if nOutputsToStore>4
                if isnumeric(OutStruct.cumulativeForestPredictsTest)
                    csvwrite([outputLocation filesep() 'CumulativeForestPredictsTest.csv'],OutStruct.cumulativeForestPredictsTest);
                else
                    writetable(cell2table(OutStruct.cumulativeForestPredictsTest),[outputLocation filesep() 'CumulativeForestPredictsTest.csv'],'WriteVariableNames',false);
                end
                if bDoAccs
                    csvwrite([outputLocation filesep() 'CumulativeForestPercentTestMissclassified.csv'],OutStruct.cumulativeForestPercentMissclassified);
                end
            end
        end
    end
end