//
// File Name: ComboBox.cpp
// 
// Date: September 06, 2013
// Author: Asis Kumar Patra (756017)
// Purpose: 
// 
//


#include "../conio/conio.h"
#include "../Point/Point.h"
#include "../Dimension/Dimension.h"
#include "../Container/Container.h"
#include "ComboBox.h"

ComboBox :: ComboBox() {
	enable=true;
	label="Label";
	label_width=10;
	separator=":";
	selected=0;
	items.push_back("Select");
	xy=Point(1, 1);
	dim=Dimension(getWidth(), 1);
	parent=(Container*)NULL;
}

ComboBox :: ComboBox(string label){
	enable=true;
	this->label=label;
	label_width=10;
	separator=":";
	selected=0;
	items.push_back("Select");
	xy=Point(1, 1);
	dim=Dimension(getWidth(), 1);
	parent=(Container*)NULL;
}

ComboBox :: ComboBox(vector<string> itms){
	enable=true;
	this->label="Label";
	label_width=10;
	separator=":";
	selected=0;
	items.push_back("Select");
	for(int i=0; i<itms.size(); i++) items.push_back(itms[i]);
	xy=Point(1, 1);
	dim=Dimension(getWidth(), 1);
	parent=(Container*)NULL;
}

ComboBox :: ComboBox(string label, vector<string> itms){
	enable=true;
	this->label=label;
	label_width=10;
	separator=":";
	selected=0;
	items.push_back("Select");
	for(int i=0; i<itms.size(); i++) items.push_back(itms[i]);
	xy=Point(1, 1);
	dim=Dimension(getWidth(), 1);
	parent=(Container*)NULL;
}

void ComboBox :: setLabelWidth(unsigned short label_width) {
	this->label_width=label_width;
}

unsigned short ComboBox :: getLabelWidth(void) {
	return label_width;
}

void ComboBox :: setSeparator(string separator) {
	this->separator=separator;
}

string ComboBox :: getSeparator(void) {
	return separator;
}

void ComboBox :: setLabel(string label){
	this->label=label;
}

string ComboBox :: getLabel() {
	return label;
}

void ComboBox :: addItems(vector<string> itms){
	for(int i=0; i<itms.size(); i++) items.push_back(itms[i]);
}

vector<string> ComboBox :: getItems() {
	return items;
}

void ComboBox :: addItem(string item) {
	items.push_back(item);
}

int ComboBox :: getSelectedIndex() {
	return selected;
}

void ComboBox :: setSelectedIndex(int index) {
	if(index>=0 and index<=items.size()) selected=index;
}

string ComboBox :: getSelectedItem() {
	return items[selected];
}

unsigned short ComboBox :: getMaxItemWidth(void){
	unsigned short maxWidth=0;
	for(int i=0; i<items.size(); i++) {
		if(maxWidth<items[i].length()) maxWidth=items[i].length();
	}
	return maxWidth;
}

unsigned short ComboBox :: getWidth(void){
	return (getLabelWidth()+getMaxItemWidth()+3+3+2);
}

void ComboBox :: drawSelectedItem(void) {
	gotoxy(getX(), getY());
	cerr<<getLabel();
	gotoxy(getX()+getLabelWidth(), getY());
	cerr<<" "<<getSeparator()<<" "<<SAVECUR;
	cerr<<NEGATIVE<<BLUE;
	for(int i=0; i<getMaxItemWidth()+2; i++) cerr<<" ";
	cerr<<CYAN<<BG_WHITE_B<<" V "<<RESTORECUR<<BG_BLUE_B<<" "<<items[selected];
	cerr<<RESET;
	gotoxy(getX()+getLabelWidth()+3+getMaxItemWidth()+1+2, getY());

}

void ComboBox :: draw(void) {
	gotoxy(getX(), getY());
	cerr<<getLabel();
	gotoxy(getX()+getLabelWidth(), getY());
	cerr<<" "<<getSeparator()<<" "<<NEGATIVE<<SAVECUR;
	for(int i=0; i<getMaxItemWidth()+2; i++) cerr<<" ";
	cerr<<CYAN<<" V "<<RESTORECUR<<" "<<items[selected];
	cerr<<RESET;
}

void ComboBox :: setFocus(void) {
	Container *p=NULL;
	vector<Component*> c;
	int curCmp=0; // Current Component
	bool tabflag=false;
	bool shifttabflag=false;
	int ch=0;
	
	drawSelectedItem();

	while(true) {
		ch=kbhit();
		if(ch==KEY_TAB || ch==KEY_SHIFT_TAB) {
			p=getParent();
			c = p->getComponents();
			for(curCmp=0; curCmp<c.size(); curCmp++) {
				if(c[curCmp]==this) break;
			}
			if(ch==KEY_TAB and curCmp<c.size()-1) {
				tabflag=true;
				break;
			}
			else if(ch==KEY_SHIFT_TAB and curCmp>0) {
				shifttabflag=true;
				break;
			}
		}
		else if(ch==KEY_ESC) {
			//gotoxy(1, get_max_y());
			//break;
		}
		else if(ch==10) {
			//gotoxy(1, get_max_y());
			//break;
		}
		else if(isEnable() and ch==KEY_UP) {
			if(selected>0) selected--;
			drawSelectedItem();
		}
		else if(isEnable() and ch==KEY_DOWN) {
			if(selected<items.size()-1) selected++;
			drawSelectedItem();
		}

	}
	cerr<<RESET;
	if(tabflag==true || shifttabflag==true) {
		draw();
	}
	if(tabflag==true) {
		c[curCmp+1]->setFocus();
	}else if(shifttabflag==true) {
		c[curCmp-1]->setFocus();
	}
}
