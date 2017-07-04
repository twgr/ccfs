function terms = manyRandPerms(nVarTot,nVarSel,nTimes)

    terms = NaN(nTimes,nVarSel);
    for n=1:nTimes
        terms(n,:) = randperm(nVarTot,nVarSel);
    end
end