//
// File Name: Panel.cpp
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
#include "../Point/Point.h"
#include "../Dimension/Dimension.h"
#include "../Component/Component.h"
#include "Panel.h"


Panel :: Panel() {
	xy=Point(1, 1);
	frame=true;
	setFrameStyle(SolidDoubleLine);
}

void Panel :: draw(void) {
	reSetComponents();
	if(frame==true) {
		gotoxy(getX(), getY());
		for(int i=0; i<getWidth(); i++) cerr<<HORIZONTAL_CHAR;
		gotoxy(getX(), getY()+getHeight()-1);
		for(int i=0; i<getWidth(); i++) cerr<<HORIZONTAL_CHAR;
		for(int i=1; i<getHeight()-1; i++) {
			gotoxy(getX(), getY()+i);
			cerr<<VERTICAL_CHAR;
			gotoxy(getX()+getWidth()-1, getY()+i);
			cerr<<VERTICAL_CHAR;
		}
		gotoxy(getX(), getY()); cerr<<DOWN_RIGHT_CHAR;
		gotoxy(getX()+getWidth()-1, getY()); cerr<<DOWN_LEFT_CHAR;
		gotoxy(getX(), getY()+getHeight()-1); cerr<<UP_RIGHT_CHAR;
		gotoxy(getX()+getWidth()-1, getY()+getHeight()-1); cerr<<UP_LEFT_CHAR;

	}
	if(getTitle()!="") {
		gotoxy(getX()+(getWidth()-getTitle().length())/2, getY());
		cerr<<getTitle();
	}
	for(int i=0; i<cmpnts.size(); i++) {
		cmpnts[i]->draw();
	}
}
