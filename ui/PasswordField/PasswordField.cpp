//
// File Name: PasswordField.cpp
// 
// Date: September 06, 2013
// Author: Asis Kumar Patra (756017)
// Purpose: 
// 
//

#include <vector>
#include <iomanip>
#include <string>

using namespace std;

#include "../conio/conio.h"
#include "../Container/Container.h"
#include "../TextBox/TextBox.h"
#include "PasswordField.h"

PasswordField :: PasswordField() : TextBox() {
	//TextBox();
	passwdchar='*';
}

PasswordField :: PasswordField(string label) : TextBox(label) {
	//TextBox(label);
	passwdchar='*';
}

void PasswordField :: setPasswordChar(char passwdchar){
	this->passwdchar=passwdchar;
}

char PasswordField :: getPasswordChar(){
	return passwdchar;
}

void PasswordField :: draw(void) {
	gotoxy(getX(), getY());
	cerr<<getLabel();
	gotoxy(getX()+getLabelWidth(), getY());
	cerr<<" "<<getSeparator()<<" "<<NEGATIVE;
	for(int i=0; i<getWidth()-getLabelWidth()-3; i++) cerr<<" ";
	printTextInBox(getX()+getLabelWidth()+3, getWidth()-getLabelWidth()-3, 1, 0);
	cerr<<RESET;

}

void PasswordField :: printTextInBox(int boxStartX, int boxWidth, int curPos, int indexPos) {
	gotoxy(boxStartX, getY());
	cerr<<setfill(passwdchar)<<setw(value.substr(indexPos-curPos+1, curPos-1).length())<<string("")<<SAVECUR;
	for(int i=0; i<boxWidth-curPos+1; i++) cerr<<" ";
	cerr<<RESTORECUR<<setfill(passwdchar)<<setw(value.substr(indexPos, boxWidth-curPos+1).length())<<string("");
	gotoxy(boxStartX+curPos-1, getY());
}

void PasswordField :: setFocus(void) {
	Container *p=NULL;
	vector<Component*> c;
	int curCmp=0; // Current Component
	bool tabflag=false;
	bool shifttabflag=false;
	int boxStartX=getX()+getLabelWidth()+3;
	int boxWidth=getWidth()-getLabelWidth()-3;
	int curPos=1; //cursor position in textbox
	int indexPos=0; //index position in string
	int ch=0;

	gotoxy(boxStartX, getY());
	cerr<<NEGATIVE<<BLUE<<BG_WHITE_B;
	for(int i=0; i<boxWidth; i++) cerr<<" ";
	printTextInBox(boxStartX, boxWidth, curPos, indexPos);
	gotoxy(boxStartX, getY());
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
		else if(ch==10) {}
		else if(ch==KEY_LEFT and curPos>1) {
			cur_back();
			curPos--;
			indexPos--;
			if(curPos==1 and indexPos>=8) {
				curPos=8+1;
				printTextInBox(boxStartX, boxWidth, curPos, indexPos);
			}
			else if(curPos==1 and indexPos<8) {
				curPos=indexPos+1;
				printTextInBox(boxStartX, boxWidth, curPos, indexPos);
			}
		}
		else if(ch==KEY_RIGHT and curPos<boxWidth and curPos<value.length()+1) {
			cur_forward();
			curPos++;
			indexPos++;
			if(curPos==boxWidth and indexPos<=value.length()-8) {
				curPos=curPos-8;
				printTextInBox(boxStartX, boxWidth, curPos, indexPos);
			}
			else if(curPos==boxWidth and indexPos>value.length()-8) {
				curPos=boxWidth-(value.length()-indexPos);
				printTextInBox(boxStartX, boxWidth, curPos, indexPos);
			}
		}
		else if(isEnable() and ch==KEY_DELETE) {
				value.replace(indexPos, 1, "");
				printTextInBox(boxStartX, boxWidth, curPos, indexPos);
		
		}
		else if(isEnable() and ch==KEY_BACKSPACE) {
			if(curPos>1 and indexPos<boxWidth) 
				curPos--;
			if(indexPos>0) {
				value.replace(--indexPos, 1, "");
				printTextInBox(boxStartX, boxWidth, curPos, indexPos);
			}
			
		}
		//else if(ch>=32 and ch<127 and (size==0 or value.length()<size)){
		else if(isEnable() and ch>=32 and ch<127 and (size==0 or value.length()<size) and findInAllowedCharacters(ch)){
			if(curPos<boxWidth) 
				curPos++;
				
				value.insert(indexPos++, 1, char(ch));
				printTextInBox(boxStartX, boxWidth, curPos, indexPos);
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
