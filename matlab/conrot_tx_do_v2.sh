#!/bin/shell

7z l conrot_tx_do_v2_tp.7z > conrot_tx_do_v2_tp.txt

#cut head and tail
sed -i '1,19d' conrot_tx_do_v2_tp.txt
sed -i -e :a -e '$d;N;2,2ba' -e 'P;D'  conrot_tx_do_v2_tp.txt  # method 1


#cut file property
sed -i 's/\(.\{53\}\)\(.*\)/\2/g' conrot_tx_do_v2_tp.txt

# delete folder line
sed -i '/^[0-9]\{2\}$/d' conrot_tx_do_v2_tp.txt

# cut folder prefix
sed -i 's/\(.\{8\}\)\(.*\)/\2/g' conrot_tx_do_v2_tp.txt

I=0
while ((I<12))
do
    sed -i 's/\([a-z0-9]\{16\}.*\)\([a-z0-9]\{16\}$\)/\2\n\1/g' conrot_tx_do_v2_tp.txt
    ((I+=1))
done

