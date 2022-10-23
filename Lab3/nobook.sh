#!/bin/bash


echo "++++++++++++++++++++++"
echo "++++++++++++++++++++++"

# RmAKE AN ARRAY ARRC with the different courses and ARRAYB with thenumber of required Courses


#Step 1
# read the courses files and store in an array the unique coure numbers.
#Every time we rea a course number, we checkk the array, if this course
#is there, do nothing. Else add it to the array Arr

size=0  # The size of the course array

while IFS='!' read Cnum Cname CISBN CR
do
  #is Cnum in Arr?
  #echo just read from the file Checking $Cnum and the size is $size
  found=0 # a variable used to check if the coure number in the table or not
  

  i=0;

  while [ $i -lt $size ]  #look if Cnum exist in the array?
      do
        #echo checking with $i with ${Arr[$i]} nd $Cnum
        if [[ X$Cnum == X${Arr[$i]} ]]; then
          found=1;
          
        fi
        i=$((i+1))
      done
  

  if [ $found == 0 ]; then  # 0 means the course is not in the array, so add it
    Arr[$size]=$Cnum
    size=$((size+1))
  fi

done <Courses


echo the count is $size and the array is
for i in `seq 0 $((size-1))`; do
  echo "***********  ${Arr[$i]}"
done

#Now check the courses in the array Arr to check if a course does not require text
echo size is $size ans $((size-1))

for i in `seq 0 $((size-1))`
   do
    #echo "Now I am starting with i=$i  ${Arr[$i]]}   "
    required=0
    while IFS='!' read Cnum Cnam CISBN req
    do
      
     #echo "       Comparing $Cnum with ${Arr[$i]}"
      if [ X$Cnum == X${Arr[$i]}  -a $req == R ]
      then
        #echo "               for $Cnum there is a required text"
        required=1
      fi
      
    done < Courses
    #echo "                             Required = $required"
    if [ $required -eq 0 ];
    then
      echo " =======      ${Arr[$i]}      ========"
    fi
  done











