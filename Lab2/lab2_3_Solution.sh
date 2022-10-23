#!/bin/bash

if [ $1 == "-s" ]; then
	while IFS=$'\t' read -a arr #file rea in arr
	do
		#echo $2 ${arr[1]}
		if [ $2 == ${arr[1]} ]; then #${arr[1]} is the student ID
			length=${#arr[@]} # number of fields in the line
			begin=2
			end=$((length-2))
			echo begin = $begin end = $end
			for i in `seq $begin $end`
			do
				echo -n "${arr[$i]} "
			done
			echo
		fi
	done <"course_DB.txt"
	elif [ $1 == "c" ]; then # case "c"
		while IFS=$'\t' read -a arr
	do
		echo ============
		echo ============
		
			length=${#arr[@]}
			cutoff=$2
			gpa=${arr[$((length-1))]}
			c=`echo "$gpa < $cutoff" |bc` # ic c=1, gpa<cutoff
			
			if [ $c -eq 1 ]; then echo ${arr[0]};  fi
			
			
			
		
	done <"course_DB.txt"
		

		###
	elif [ "$1" == "-m" ]; then
	while IFS=$'\t' read -a arr
	do
		#echo ============
		#echo ============
		
			length=${#arr[@]}
			gpa=${arr[$((length-1))]}
			numofcourses=$((length-3))
			#echo gpa = $gpa num = $numofcourses
			c=`echo "$gpa < 6.0" |bc` # if c==1, gpa is less than 6.0
			#echo c = $c  number of courses = $numofcourses
			if [ $c -eq 1 ] && [ $numofcourses -gt 3 ]; then 
				echo ${arr[0]}; 
			fi
			
			
			
		
	done <"course_DB.txt"
		
		
		
		
		 
		
	
		
	
	fi
	
	
