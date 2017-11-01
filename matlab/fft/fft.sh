#!/usr/bin/sh

T1=$1
T2=$2

7z l ${T1}.7z > ${T1}.txt

Iter=$[200/$T2]


# cut head and tail
sed -i '1,19d' ${T1}.txt
sed -i -e :a -e '$d;N;2,2ba' -e 'P;D'  ${T1}.txt  # delete last but 2 line


# cut file property
sed -i 's/\(.\{53\}\)\(.*\)/\2/g' ${T1}.txt

# delete folder line
sed -i '/^[0-9]\{2\}$/d' ${T1}.txt

# cut folder prefix
sed -i 's/\(.\{8\}\)\(.*\)/\2/g' ${T1}.txt
 
I=0
while ((I<$Iter))
do
    echo Itering $I/$Iter
    sed -i "s/\([a-z0-9]\{${T2}\}.*\)\([a-z0-9]\{${T2}\}$\)/\2\n\1/g" ${T1}.txt
    ((I+=1))
done

echo Itering $I/$Iter

