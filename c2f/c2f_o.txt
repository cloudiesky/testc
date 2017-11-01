clc,clear
fidTpM = fopen("D:\proj\LTE\writetofile\c2f.m","r");

A = fread(fidTpM);
sz = size(A);

numPerFile = 200/2; % 8bit per char
numFile = ceil(sz(1)/numPerFile); % 518400 data
numDir = ceil(numFile/1000);
tmp_i = 0;
cntDir = 0;
for i= 1 : numFile
    str = [];
    if mod(i,1000) == 1
        cntDir = cntDir + 1
        strDir = [num2str(cntDir,'%02d')];
        if ~exist(strDir,'dir')
            mkdir(strDir);
        end
    end
    for j = 1 : numPerFile
        if ((i-1)*numPerFile + j) > sz(1)
            break;
        end
        str = [num2str(A((i-1)*numPerFile + j),'%02x'),str];
        if  ((i-1)*numPerFile + j) > sz(1)
            break;
        end
    end
    str = [num2str(mod((i-1),1000),'%04d'),'_',str];
    fid=fopen([strDir,'/',str],'w');
    fclose(fid);    
    if  ((i-1)*numPerFile + j) > sz(1)
        break;
    end
end 
