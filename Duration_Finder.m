clear all; close all; clc;

folders = [2 3 4 6 9 11 12];

for ii = folders
    
    str1 = '/path/of/folder';
    str2 = num2str(ii);
    path = strcat(str1,str2);

    files = dir(path);
    
    silo(length(files)-2) = struct('duration',[],'name',[]);
    
    
    for jj = 3:length(files)
        
        filename = files(jj).name;
        filepath = strcat(path,'\',filename);
        
        [x,fs] = audioread(filepath);
        
        silo(jj-2).duration = length(x)/fs;
        silo(jj-2).name = filename;
        
    end
    
    [a,idx]=sort([silo.duration],'descend');
    silo = silo(idx);
    
    %loc = strcat(str1,'work',num2str(ii),'.mat');
    %save(loc,'silo');
    % siloyu txt dosyasına alabiliriz.
  
end