clear all; close all; clc;

annotations = readtable('/path/of/annotations/file');
annot = table2array(annotations(:,[1 4]));
fileinfoid = fopen('/path/of/fileinfo.txt/file');

clear annotations;

unwanted_files = [0 1 5 7 8 10 11];

txt_file = fopen('/path/of/folder\unwanted_filenames','w');

counter = 1;
tline = fgetl(fileinfoid);

for ii = 1:length(annot)
    
    if (annot(ii,2) == 0 || annot(ii,2) == 1 || annot(ii,2)== 5  || annot(ii,2) == 7 || annot(ii,2) == 8|| annot(ii,2) == 10 || annot(ii,2) == 11)
       
       while ischar(tline) && counter ~= annot(ii,1)
            
        tline = fgetl(fileinfoid);
        counter = counter + 1;
    
       end
       
       if (~ischar(tline))
           
           break
           
       end
        
       loc = strfind(tline,',');
       
       record_name_cell = extractBetween(tline,loc(2)+1,loc(3)-1);
       record_name = string(record_name_cell);
       
       fprintf(txt_file,'%s\n',record_name);
        
    end
    
end

fclose('all');
    
