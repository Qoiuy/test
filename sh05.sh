#!/bin/bash

read -p "Input a filename :" filename
test -z $filename && echo "You must input a filename ." && exit 0
test ! -e $filename  && echo "The filename '$filename' do not exist" && exit 0

test -f $filename && filetype="regulare file"
test -d $filename && filetype="directory"
test -r $filename && perm="readable"
test -w $filename && perm="$perm writeable"

echo "The filename : $filename is a $filetype"
echo "And the permission are : $perm"
