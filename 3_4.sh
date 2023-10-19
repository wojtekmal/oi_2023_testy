for i in {3001..3999}
do
    echo $i
    echo $i | ./gen_3_4.exe > ./IN/$i.in
    ../cza.exe < ./IN/$i.in > ./OUT/$i.out
done
