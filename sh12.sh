#!/bin/bash

echo "This program will print your selection!"

case $1 in
"one")
	echo "Your choice is ONE"
	;;
"two")
	echo "Your choice is TWO"
	;;
"three")
	echo "Your choice is ThREE"
	;;
*)
	echo "Usage $0{one|two|three}"
	;;
esac
