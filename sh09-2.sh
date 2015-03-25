#!/bin/bash

#if [ "$1" == "hello" ] ;then
#	echo "Hello ,how are you ?"
#elif  [ "$1" == "" ] ;then
#	echo "You MUST input parameters, ex> {$0 someword}"
#else
#	echo "The only parameter is 'hello' , ex > {$0 hello}"
#fi


case $1 in
"hello")
	echo "Hello,how are you ?"
	;;
"")
	echo "You MUST input parameters,ex>{$1 somword}"
	;;
*)
	echo "Usage $0{hello}"
	;;
esac
