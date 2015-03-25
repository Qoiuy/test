#!/bin/bash

read -p  "Please input (Y/N);" yn

#
#
#[ "$yn" == "y" -o "$yn" == "Y"  ] && echo "OK , continue " && exit 0;
#
#[ "$yn" == "n" -o "$yn" == "N"  ] && echo "Oh , interrupt ! " && exit 0;
#
#echo "I do not know what your choice is " && exit 0


if [ "$yn" == "Y" ] || [ "$yn" == "y" ] ; then
echo "OK,continue"
exit 0
fi



if [ "$yn" == "N" ] || [ "$yn" == "n" ] ; then
echo "Oh,inerrupt!"
exit 0
fi

echo "I don't know what your choice is " && exit 0
