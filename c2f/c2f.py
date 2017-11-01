#!/usr/bin/python

file_in = open('c2f.txt','r')
file_out = open('c2f_o.txt','w')
try: 
    for line in file_in:
        string=''.join(line);
        string = string.rstrip('\n');
        num = int(string, 16);
        char = chr(num);
        file_out.write(char);
finally:
     file_in.close()
     file_out.close()

