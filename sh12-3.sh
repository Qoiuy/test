#!/bin/bash

#----2

#function printit(){
#	echo -n "Your choice is "
#}


function printit(){
	echo -n "Your choice is $1"
}

echo "This program will print your selection!"

#case $1 in
#"one")
#	echo "Your choice is ONE"
#	;;
#"two")
#	echo "Your choice is TWO"
#	;;
#"three")
#	echo "Your choice is ThREE"
#	;;
#*)
#	echo "Usage $0{one|two|three}"
#	;;
#esac


#---2
#case $1 in
#"one")
#	printit ;echo $1 |tr 'a-z' 'A-Z'
#	;;
#"two")
#	printit ;echo $1 |tr 'a-z' 'A-Z'
#	;;
#"three")
#	printit ;echo $1 |tr 'a-z' 'A-Z'
#	;;
#*)
#	echo "Usage $0 {one|two|three}"
#	;;
#esac

case $1 in
"one")
	printit 1
	;;
"two")
	printit 2
	;;
"three")
	printit 3
	;;
*)
	echo "Usage $0 {one|two|three}"
	;;
esac
