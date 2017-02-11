//
// File Name: Screen.cpp
// 
// Date: September 06, 2013
// Author: Asis Kumar Patra (756017)
// Purpose: 
// 
//

#include <iostream>

using namespace std;

#include "../conio/conio.h"
#include "../Point/Point.h"
#include "../Dimension/Dimension.h"
#include "../Component/Component.h"
#include "Screen.h"

Screen :: Screen() {
	xy=Point(1,1);
	frame=false;
}

void Screen :: add(Container* c) {
	if(c==NULL) return;
	cntnrs.push_back(c);
	c->setParent(this);
}

void Screen :: reSetComponents() {
	int prevHeight=0;
	for(int i=0; i<cntnrs.size(); i++) {
		cntnrs[i]->reSetComponents();
		cntnrs[i]->setXY((get_max_x()-cntnrs[i]->getWidth())/2-1, getY()+cntnrs[i]->getY()-1+prevHeight);
		prevHeight=+cntnrs[i]->getHeight();
	}
}

void Screen :: draw(void) {
	reSetComponents();
	for(int i=0; i<cntnrs.size(); i++) {
		cntnrs[i]->draw();
	}
}
