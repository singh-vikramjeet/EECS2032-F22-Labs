#!/bin/bash
read a b c

firstFunction(){
	case $b in
		/) echo $((a / c));;
		-) echo $(( a - c ));;
		+) echo $(( a + c ));;
		*) echo $(( a * c ));;
	esac
}

secondFunction(){
	case $a in
		min)[[ $b -lt $c ]] && echo $b;;
		max)[[ $b -gt $c ]] && echo $b;;
	esac
}

if [[ $a == min || $a == max ]]; then
	secondFunction
else
	firstFunction
fi
