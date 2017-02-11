//
// File Name: Component.cpp
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
#include "Component.h"

void Component :: setEnable(bool enable) {
	this->enable=enable;
}

bool Component :: isEnable(void) {
	return enable;
}

void Component :: setX(unsigned short x) {
	xy.setX(x);
}

unsigned short Component :: getX(void) {
	return xy.getX();
}

void Component :: setY(unsigned short y) {
	xy.setY(y);
}

unsigned short Component :: getY(void) {
	return xy.getY();
}

void Component :: setXY(unsigned short x, unsigned short y) {
	this->xy=Point(x, y);
}

void Component :: setXY(Point p) {
	this->xy=p;
}

Point Component :: getXY(void) {
	return xy;
}

void Component :: setHeight(unsigned short height) {
	dim.setHeight(height);
}

unsigned short Component :: getHeight(void) {
	return dim.getHeight();
}

void Component :: setWidth(unsigned short width) {
	dim.setWidth(width);
}

unsigned short Component :: getWidth(void) {
	return  dim.getWidth();
}

void Component :: setDimension(unsigned short width, unsigned short height) {
	dim=Dimension(width, height);
}

void Component :: setDimension(Dimension dim) {
	this->dim=dim;
}

Dimension Component :: getDimensin(void) {
	return dim;
}

void Component :: setParent(Container* parent) {
	this->parent=parent;
}

Container* Component :: getParent(void) {
	return parent;
}

void Component :: setFocus(void) {

}

void Component :: lostFocus(void) {
	//gotoxy(1, get_max_y());
}
