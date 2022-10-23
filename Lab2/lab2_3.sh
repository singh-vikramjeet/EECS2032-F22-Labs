#!/bin/bash
IFS=$'\t'
printname=""
count=0
printcourse=""
printID=""

if [ "$1" == "-s" ]; then
	while read name ID course gpa
	do
		if [ $2 == $ID ];then
			count=$((count+1))
			printname=$name
			printcourse=$course
		fi
	done < course_DB.txt
	if [ $count -eq 0 ];then
		echo No such ID
	else
		echo $printname
		echo $printcourse
	fi
elif [ "$1" == "-m" ]; then
	while read name ID course gpa
	do
		if [ 1 -eq "$(echo "${gpa} < 6.0" | bc)" ];then
			echo $name $ID
		fi
	done < course_DB.txt

elif [ "$1" == "-c" ]; then
	while read name ID course gpa
	do
		if [ 1 -eq "$(echo "${gpa} < $2" | bc)" ];then
			echo $name
		fi
	done < course_DB.txt


fi

