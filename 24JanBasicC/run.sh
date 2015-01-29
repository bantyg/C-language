#! bin/bash

file=$1
file1=$2

gcc -c ${file}.c ${file1}.c && gcc ${file}.o ${file1}.o -o ${file} && ${file}