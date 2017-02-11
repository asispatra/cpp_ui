#!/bin/bash

#
# File Name: test.sh
# 
# Date: February 11, 2017
# Author: Asis Kumar Patra
# Purpose: 
# 
#

# Write your shell script here. 
g++ -I /opt/ui/include/ -L /opt/ui/lib/ -o output example/Main.cpp -lui
LD_LIBRARY_PATH=/opt/ui/lib:$LD_LIBRARY_PATH ./output
