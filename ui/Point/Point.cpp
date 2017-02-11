//
// File Name: Point.cpp
// 
// Date: September 06, 2013
// Author: Asis Kumar Patra (756017)
// Purpose: 
// 
//

#include "Point.h"

Point :: Point() {
	x=y=0;
}

Point :: Point(unsigned short x, unsigned short y) {
	this->x=x;
	this->y=y;
}

Point :: Point(const Point& p) {
	x=p.x;
	y=p.y;
}

void Point :: setX(unsigned short x) {
	this->x=x;
}

unsigned short Point :: getX(void) {
	return x;
}

void Point :: setY(unsigned short y) {
	this->y=y;
}

unsigned short Point :: getY(void) {
	return y;
}
