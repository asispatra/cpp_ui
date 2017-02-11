//
// File Name: Window.cpp
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
#include "../Button/Button.h"
#include "../Dimension/Dimension.h"
#include "Window.h"


Window :: Window() {
	xy=Point(1, 1);
	frame=true;
	setFrameStyle(SolidDoubleLine);
}

int Window :: getPressedKey() {
	return pressedKey;
}

void Window :: setMessage(string msg){
	message=msg;
}

string Window :: getMessage() {
	return message;
}

void Window :: reSetComponents() {
	unsigned short x=getX();
	unsigned short y=getY();

	if(frame==false) {
		setWidth(title.length());
		if(getTitle()!="") y+=2;
		msgPos=Point(x,y);
		if(getWidth()<message.length()) setWidth(message.length());
		y+=4;
	}else{
		setWidth(title.length()+4);
		x+=2;
		y+=2;
		msgPos=Point(x,y);
		if(getWidth()<message.length()+4) setWidth(message.length()+4);
		y+=4;
	}
	setHeight(y-getY()+1);
}

void Window :: draw(void) {
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

	gotoxy(msgPos.getX(), msgPos.getY());
	cerr<<message;
	Button ok("Ok");
	ok.setParent(this);
	ok.setXY(msgPos.getX(), msgPos.getY()+2);
	ok.draw();
	pressedKey=kbhit();
	gotoxy(1, get_max_y());
}

