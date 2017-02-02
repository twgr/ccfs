function plotHierarchicalObliqueSplits(starts,ends,labels,minX,maxX,bPlotEdges,colors,alpha)
% Works on output of CATTreeToLines

figure

if ~exist('bPlotEdges','var') || isempty(bPlotEdges)
    bPlotEdges = true;
end

if ~exist('alpha','var') || isempty(alpha)
    alpha = 0.1;
end

if ~exist('colors','var') || isempty(colors)
    colors = {'b','r','k','c','g','w','b','r'};
end

edgesMin = minX;
edgesMax = maxX;

pX = [edgesMin(:,1);edgesMax(:,1);edgesMax(:,1);edgesMin(:,1);edgesMin(:,1)];
pY = [edgesMin(:,2);edgesMin(:,2);edgesMax(:,2);edgesMax(:,2);edgesMin(:,2)];

hold on;
plot(pX,pY,'k');
hold on;
axis([edgesMin(1)-0.05 edgesMax(1)+0.05 edgesMin(2)-0.05 edgesMax(2)+0.05])

plotSplitRec(starts,ends,labels,pX,pY,colors,bPlotEdges,alpha);

end

function plotSplitRec(sp,ep,la,polyx,polyy,colors,bPlotEdges,alpha)
if isempty(sp)
    if bPlotEdges
        fill(polyx,polyy,colors{la},'FaceAlpha',alpha)
    else
        fill(polyx,polyy,colors{la},'FaceAlpha',alpha,'EdgeColor','none')
    end
    return
end

[xi,yi,ii] = polyxpoly([sp{1}(1),ep{1}(1)],[sp{1}(2),ep{1}(2)],polyx,polyy);

polyleftx = [polyx(1:ii(1,2)); xi(1); xi(2); polyx((ii(2,2)+1):end)];
polylefty = [polyy(1:ii(1,2)); yi(1); yi(2); polyy((ii(2,2)+1):end)];

polyrightx = [xi(1); polyx((ii(1,2)+1):(ii(2,2))); xi(2); xi(1)];
polyrighty = [yi(1); polyy((ii(1,2)+1):(ii(2,2))); yi(2); yi(1)];

if abs(ep{1}(2)-sp{1}(2))<1e-10
    projVec = [0,1];
else
    projVec = [1, -(ep{1}(1)-sp{1}(1))/(ep{1}(2)-sp{1}(2))];
    projVec = projVec*sign(projVec(2));
end

maxAwayLeft = max([polyleftx,polylefty]*projVec');
maxAwayRight = max([polyrightx,polyrighty]*projVec');

if maxAwayLeft<maxAwayRight
    plotSplitRec(sp{2},ep{2},la{2},polyleftx,polylefty,colors,bPlotEdges,alpha)
    plotSplitRec(sp{3},ep{3},la{3},polyrightx,polyrighty,colors,bPlotEdges,alpha)
else
    plotSplitRec(sp{3},ep{3},la{3},polyleftx,polylefty,colors,bPlotEdges,alpha)
    plotSplitRec(sp{2},ep{2},la{2},polyrightx,polyrighty,colors,bPlotEdges,alpha)
end
end