//
// File Name: Dimension.cpp
// 
// Date: September 06, 2013
// Author: Asis Kumar Patra (756017)
// Purpose: 
// 
//


#include <iostream>
#include <vector>

using namespace std;

#include "../conio/conio.h"
#include "Dimension.h"

Dimension :: Dimension() {
	height=width=0;
}

Dimension :: Dimension(unsigned short width, unsigned short height) {
	this->width=width;
	this->height=height;
}

Dimension :: Dimension(const Dimension& d) {
	this->width=d.width;
	this->height=d.height;
}

void Dimension :: setHeight(unsigned short height) {
	this->height=height;
}

unsigned short Dimension :: getHeight(void) {
	return height;
}

void Dimension :: setWidth(unsigned short width) {
	this->width=width;
}

unsigned short Dimension :: getWidth(void) {
	return width;
}
