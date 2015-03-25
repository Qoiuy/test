#!/bin/bash

read -p "The One number :" first
read -p "The second number :" second

#declare -i sum=$first*$second
#
#echo $first
#echo $second
#echo $sum

total=$(($first*$second))
echo $total
