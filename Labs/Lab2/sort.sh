#!/bin/sh

declare -a ARRAY
ARRAY=(9 7 4 8 1 6 2 5 3)

n=${#ARRAY[@]}
echo "Size: $n"

for((i=0; i < n-1; ++i))
do
  min=${ARRAY[$i]}
  pos=$i
  for((j=i+1; j < n; ++j))
  do
    if ((ARRAY[j] < min)); then
      min=${ARRAY[$j]}
      pos=$j
    fi
  done
  temp=${ARRAY[$i]}
  ARRAY[$i]=${ARRAY[$pos]}
  ARRAY[$pos]=$temp
done

#print array
echo "Implementing Selection Sort: "
for((i=0; i < n; i++))
do
  echo ${ARRAY[$i]}
done

