#!/bin/sh

7z l c2f.7z > c2f.txt

#cut head and tail
sed -i '1,19d' c2f.txt
sed -i -e :a -e '$d;N;2,2ba' -e 'P;D'  c2f.txt  # method 1


#cut file property
sed -i 's/\(.\{53\}\)\(.*\)/\2/g' c2f.txt

# delete folder line
sed -i '/^[0-9]\{2\}$/d' c2f.txt

# cut folder prefix
sed -i 's/\(.\{8\}\)\(.*\)/\2/g' c2f.txt

I=0
while ((I<100))
do
    sed -i 's/\([a-z0-9]\{2\}.*\)\([a-z0-9]\{2\}$\)/\2\n\1/g' c2f.txt
    ((I+=1))
done


