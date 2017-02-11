//
// File Name: Menu.cpp
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
#include "Menu.h"


Menu :: Menu() {
	xy=Point(1, 1);
	frame=true;
	setFrameStyle(SolidDoubleLine);
}

void Menu :: setErrorMessage(string msg) {
	errorMessage=msg;
}

string Menu :: getErrorMessage() {
	return errorMessage;
}

int Menu :: selectMenuItem() {
	gotoxy(1,get_max_y());
	bool perfect=false;
	int key = kbhit();
	for(int i=0; i<keys.size();i++) {
		if(key == keys[i] or (key>='A' and key<='Z' and key+32==keys[i])) {
			perfect=true;
			break;
		}
	}
	if(perfect==false) {
		gotoxy(int(getX()+(getWidth()-(unsigned short)(errorMessage.length()))/2), getY()+getHeight()+1);
		cerr<<getErrorMessage();
		key = selectMenuItem();
	}
	return key;
}

void Menu :: addMenuItems(vector<string> itms){
	for(int i=0; i<itms.size(); i++) addMenuItem(itms[i]);
}

void Menu :: addMenuItem(string str){
	items.push_back(str);
	if(str[0]>='A' and str[0]<='Z') keys.push_back(int(str[0])+32);
	else keys.push_back(int(str[0]));
}

void Menu :: addMenuItem(string str, int key){
	items.push_back(str);
	keys.push_back(key);
}

vector<string> Menu :: getMenuItems(){
	return items;
}

void Menu :: reSetComponents() {
	unsigned short x=getX();
	unsigned short y=getY();

	startXY=vector<Point>(items.size());
	if(frame==false) {
		setWidth(title.length());
		if(getTitle()!="") y+=2;
		for(int i=0; i<items.size(); i++) {
			startXY[i]=Point(x, y);
			y+=2;
			if(getWidth()<items[i].length()) setWidth(items[i].length());
		}
	}else{
		setWidth(title.length()+4);
		x+=2;
		y+=2;
		for(int i=0; i<items.size(); i++) {
			startXY[i]=Point(x, y);
			y+=2;
			if(getWidth()<items[i].length()+4) setWidth(items[i].length()+4);
		}
	}
	setHeight(y-getY()+1);
}

void Menu :: draw(void) {
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

	for(int i=0; i<items.size(); i++) {
		gotoxy(startXY[i].getX(), startXY[i].getY());
		cerr<<items[i];
	}
}
