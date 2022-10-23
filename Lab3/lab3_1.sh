#!/bin/bash

count=0

if [ $1 == "-num" ]; then
	while IFS=$'!' read -a arr
	do
		if [[ $2 == ${arr[0]} ]]; then
			isbn=${arr[2]}
		fi
	done<"courses"

	while IFS=$'!' read -a arr1
	do
		length=${#arr1[@]}
		begin=2
		end=$((length-2))
		gpa=$((length-1))
		if [[ $isbn == ${arr1[1]} ]]; then
			echo -n "${arr1[0]}: "
		        for i in `seq $begin $end`
		        do
			       echo -n "${arr1[$i]} "
		        done
	 		echo "${arr1[gpa]}"		
		fi
	done<"books"
elif [ $1 == "-nobook" ]; then
	while IFS=$'!' read -a arr2
	do
		if [[ ${arr2[3]} == "O" ]]; then
			echo ${arr2[0]}
		fi
	done<"courses"

fi



