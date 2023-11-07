#!/bin/bash
<<doc
Name : Suraj Sunil Patil
Date : 04/11/2023 
Description : fibanocci
Sample Input : any positive number
Sample Output :
doc
read -p " Enter the number : " num
first=0
second=1
next=0
for i in `seq $num`
do
    echo -n "$next"
    first=$second
    second=$next
    next=`expr $first + $second`
done
