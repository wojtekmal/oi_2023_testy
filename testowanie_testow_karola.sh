#!/bin/bash
for i in {1..4000}
do
    ../cza.exe < ./IN/$i.in > ./moj_wynik_w_tescie_karola.out
    diff -bw ./OUT/$i.out ./moj_wynik_w_tescie_karola.out

    if [ $? -eq 0 ]
    then
        echo $i "OK"
    else
        echo $i "BLAD"
        break
    fi
done

#rm ./moj_wynik_w_tescie_karola.out
