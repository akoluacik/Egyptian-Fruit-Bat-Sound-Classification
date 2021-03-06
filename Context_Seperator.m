tic
clear all; close all; clc;

%%% importing files
annotations = readtable('/path/of/annotations/file');
fileinfoid = fopen('/path/of/fileinfo.txt/file');

annot = table2array(annotations(:,[1 4 9 10]));

%%% 1) FileID, 2) Context, 3) StartSample, 4) EndSample
context = annot(:,2);
clear annotations;

for ii = 1:length(context)
    
    if(context(ii) == 2 ||context(ii) == 3 || context(ii) == 4 ||context(ii) == 6....
        || context(ii) == 9 || context(ii) == 11 || context(ii) == 12)
    
    context(ii) = 1;
    
    else
        
        context(ii) = 0;
        
    end
            
end

id_array = zeros(length(context),4); % fileid array

for ii = 1:length(context)
    
    if (context(ii) == 1)
        id_array(ii,1) = annot(ii,1);
        id_array(ii,2) = annot(ii,2);
        id_array(ii,3) = annot(ii,3);
        id_array(ii,4) = annot(ii,4);

    end
end

%%% removing zero values and removing context array
clear context;
clear annot;

id_array = id_array(id_array~=0);
temp = zeros(88110,4);

temp(:,1) = id_array(1:88110);
temp(:,2) = id_array(88111:176220);
temp(:,3) = id_array(176221:264330);
temp(:,4) = id_array(264331:352440);

id_array = zeros(88110,4);
id_array = temp;

clear temp;



%%% accesing the FileInfo lines

counter = 1;
tline = fgetl(fileinfoid);
%names = strings(88110,1);

%%% opening the files for writing
f2 = fopen('/path/of/context/text/file','w');
f3 = fopen('/path/of/context/text/file','w');
f4 = fopen('/path/of/context/text/file','w');
f6 = fopen('/path/of/context/text/file','w');
f9 = fopen('/path/of/context/text/file','w');
f11 = fopen('/path/of/context/text/file','w');
f12 = fopen('/path/of/context/text/file','w');

for ii = 1:length(id_array)
    
        while ischar(tline) && counter ~= id_array(ii)
            
        tline = fgetl(fileinfoid);
        counter = counter + 1;
    
        end
        
        if tline == -1
            break
        end
       
       %%% seperating lines into different txt files
       switch id_array(ii,2)
           case 2
       fprintf(f2,'%s%s\n',tline,',');
           case 3
       fprintf(f3,'%s%s\n',tline,',');
           case 4
       fprintf(f4,'%s%s\n',tline,','); 
           case 6
       fprintf(f6,'%s%s\n',tline,',');
           case 9
       fprintf(f9,'%s%s\n',tline,',');
           case 11
       fprintf(f11,'%s%s\n',tline,',');
           case 12
       fprintf(f12,'%s%s\n',tline,',');
       end
       
       %%% locating the commas
       loc = strfind(tline,',');
       
         %%% locating the folder name
         %folder_number_cell = extractBetween(tline,loc(3)+6,loc(4)-1);
         %folder_number = str2double(char(folder_number_cell));
       
       %%% locating the recording name
       record_name_cell = extractBetween(tline,loc(2)+1,loc(3)-1);
       record_name = string(record_name_cell);
       
       %%% adding these informations into matrixes
       %id_array(ii,5) = folder_number;
       %names(ii) = record_name;

end

clear ii loc counter folder_number folder_number_cell record_name record_name_cell tline
fclose('all');
toc

% tic
% for ii = 51600:length(id_array)
%     
%     source_str = strcat('/path/fruit bat sounds\continued\files',num2str(id_array(ii,5)),'\',char(names(ii)));
%     dest_str = strcat('path/fruit bat sounds\matlab_extraction\',num2str(id_array(ii,2)));
%     
%     copyfile(source_str,dest_str);
% end
% toc

%%% Removing specified rows or columns
%%% https://www.mathworks.com/matlabcentral/answers/105768-how-can-i-delete-certain-rows-of-a-matrix-based-on-specific-column-values
% temp2 = temp(:,2) ~= 3;
% temp(temp2,:) = [];


%%% reopening the files for reading
f2 = fopen('/path/of/context/text/file','r');
f3 = fopen('/path/of/context/text/file','r');
f4 = fopen('/path/of/context/text/file','r');
f6 = fopen('/path/of/context/text/file','r');
f9 = fopen('/path/of/context/text/file','r');
f11 = fopen('/path/of/context/text/file','r');
f12 = fopen('/path/of/context/text/file','r');

fid = [f2 f3 f4 f6 f9 f11 f12]';
c = [2 3 4 6 9 11 12]; % folder counter


for ii = 6:length(fid) % BURAYI CHECK ET !!!!!
   
    temp = id_array(:,2) == c(ii);
    check = id_array(temp,:);
    
    tline = fgetl(fid(ii));
    
    while ischar(tline)
        
        loc = strfind(tline,',');     
        
        % extracting the recording names
        record_name_cell = extractBetween(tline,loc(2)+1,loc(3)-1);
        record_name = char(string(record_name_cell));
        
        % extracting the id of the recording
        
        rec_id = str2double(char(extractBetween(tline,1,loc(1)-1)));
        
        audio = strcat('/path/of/folder\',num2str(c(ii)),'\',record_name);
        [x,fs] = audioread(audio);
        
        %%% 
        locs = loc(6:end);
        samples = zeros(length(locs)-1,1); % sample array
        
        %%% accesing the exact sample intervals
         for jj = 1:length(locs)-1
             
          samples(jj) = str2double(char(extractBetween(tline,locs(jj)+1,locs(jj+1)-1)));
             
         end
        
         counter = 0;

         % finding matched recording id rows
         temp2 = check(:,1) == rec_id;
         check2 = check(temp2,[3 4]);
         sc2 = size(check2);
         
         
         for kk = 1:sc2(1)
             
             for aa = 1:2:length(samples)
                 
                 if samples(aa)>=check2(kk,1) && samples(aa+1)<=check2(kk,2) 
                 
                     % calculating necessary memory
                    counter = counter + (samples(aa+1) - samples(aa) + 1);
                     
                 end
                 
             end
             
         end
         
         % preallocation of memory
         ext = zeros(counter,1);
         index1 = 1;
         index2 = 0;
         
          for kk = 1:sc2(1)
             
             for aa = 1:2:length(samples)
                 
                 if samples(aa)>=check2(kk,1) && samples(aa+1)<=check2(kk,2) 
                      
                    index2 = index2 + (samples(aa+1) - samples(aa)+1);
                    
                    ext(index1:index2) = x(samples(aa):samples(aa+1));
                     
                    index1 = index1 + (samples(aa+1) - samples(aa) + 1);
                 end
                 
             end
             
          end
         
         path = strcat('/path/of/folder','\',num2str(c(ii)),'\',record_name);
         audiowrite(path,ext,fs);
         
        tline = fgetl(fid(ii));
        
    end
  
end

fclose('all');
clear f2 f3 f4 f6 f9 f11 f12 fileinfoid;