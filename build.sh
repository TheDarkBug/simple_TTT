#!/bin/bash
cd src
make release

if [ $? != 0 ]
then
	notify-send -t 1000 "Error compiling"
fi