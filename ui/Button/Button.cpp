//
// File Name: Button.cpp
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
#include "../Container/Container.h"
#include "Button.h"

Button :: Button() {
	enable=true;
	caption="Button";
	xy=Point(1,1);
	dim=Dimension(caption.length()+2, 1);
	parent=(Container*)NULL;
}

Button :: Button(string caption) {
	enable=true;
	this->caption=caption;
	xy=Point(1,1);
	dim=Dimension(caption.length()+2, 1);
	parent=(Container*)NULL;
}

void Button :: setCaption(string caption) {
	this->caption=caption;
}

string Button :: getCaption() {
	return caption;
}

void Button :: draw(void) {
	cerr<<BG_GREEN<<BLACK;
	int parentWidth=getParent()->getWidth();
	gotoxy(getX()+(parentWidth-getWidth())/2-2, getY());
	for(int i=0; i<getWidth(); i++) cerr<<" ";
	gotoxy(getX()+(parentWidth-caption.length())/2-2, getY());
	cerr<<caption<<RESET;
}

void Button :: setFocus(void) {
	Container *p=NULL;
	vector<Component*> c;
	int curCmp=0; // Current Component
	bool tabflag=false;
	bool shifttabflag=false;
	int ch=0;

	cerr<<NEGATIVE<<GREEN<<BG_WHITE_B;
	int parentWidth=getParent()->getWidth();
	gotoxy(getX()+(parentWidth-getWidth())/2-2, getY());
	for(int i=0; i<getWidth(); i++) cerr<<" ";
	gotoxy(getX()+(parentWidth-caption.length())/2-2, getY());
	cerr<<caption<<RESET;
	
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
		else if(isEnable() and ch==10) {
			gotoxy(1, get_max_y());
			break;
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
