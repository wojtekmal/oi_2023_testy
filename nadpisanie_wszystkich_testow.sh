#!/bin/bash
for i in {1..6000}
do
    echo $i
    if [ -f ./IN/$i.in ]
    then
        ../cza.exe < ./IN/$i.in > ./OUT/$i.out
    fi
done

