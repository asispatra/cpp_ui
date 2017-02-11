#!/bin/bash

#
# File Name: install.sh
# 
# Date: February 11, 2017
# Author: Asis Kumar Patra
# Purpose: 
# 
#

# Write your shell script here. 
make clean
make

INSTALL_DIR=/opt/ui
mkdir -p $INSTALL_DIR
INCLUDE_DIR=${INSTALL_DIR}/include
LIB_DIR=${INSTALL_DIR}/lib
mkdir $INCLUDE_DIR
mkdir $LIB_DIR

find ui -name "*.h" -exec cp --parents {} $INCLUDE_DIR \;
cp BUILD/libui.so $LIB_DIR
make clean
