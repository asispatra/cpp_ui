//
// File Name: TextBox.cpp
// 
// Date: September 06, 2013
// Author: Asis Kumar Patra (756017)
// Purpose: 
// 
//

#include <vector>
#include "../conio/conio.h"
#include "../Point/Point.h"
#include "../Dimension/Dimension.h"
#include "../Container/Container.h"
#include "TextBox.h"

TextBox :: TextBox() {
	enable=true;
	xy=Point(1, 1);
	dim=Dimension(36, 1);
	label_width=10;
	separator=":";
	label="Label";
	value="New Value";
	size=0; //No limit
	allowedChars=""; // allow all characters
	parent=(Container*)NULL;
}

TextBox :: TextBox(string label) {
	enable=true;
	xy=Point(1, 1);
	dim=Dimension(36, 1);
	label_width=10;
	separator=":";
	this->label=label;
	value="";
	size=0; //No limit
	allowedChars=""; // allow all characters
	parent=(Container*)NULL;
}

void TextBox :: setAllowedCharacters(string str){
	allowedChars=str;
}

string TextBox :: getAllowedCharacters(){
	return allowedChars;
}

void TextBox :: setSize(int n){
	size=n;
}
int TextBox :: getSize(){
	return size;
}

void TextBox :: setLabelWidth(unsigned short label_width) {
	this->label_width=label_width;
}

unsigned short TextBox :: getLabelWidth(void) {
	return label_width;
}

void TextBox :: setSeparator(string separator) {
	this->separator=separator;
}

string TextBox :: getSeparator(void) {
	return separator;
}

void TextBox :: setLabel(string label) {
	this->label=label;
}

string TextBox :: getLabel(void) {
	return label;
}

void TextBox :: setValue(string value) {
	this->value=value;
}

string TextBox :: getValue(void) {
	return value;
}

void TextBox :: draw(void) {
	gotoxy(getX(), getY());
	cerr<<getLabel();
	gotoxy(getX()+getLabelWidth(), getY());
	cerr<<" "<<getSeparator()<<" "<<NEGATIVE<<SAVECUR;
	for(int i=0; i<getWidth()-getLabelWidth()-3; i++) cerr<<" ";
	/*
	cerr<<RESTORECUR<<getValue();
	cerr<<RESET;
	*/
	printTextInBox(getX()+getLabelWidth()+3, getWidth()-getLabelWidth()-3, 1, 0);
	cerr<<RESET;

}

void TextBox :: printTextInBox(int boxStartX, int boxWidth, int curPos, int indexPos) {
	gotoxy(boxStartX, getY());
	cerr<<value.substr(indexPos-curPos+1, curPos-1)<<SAVECUR;
	for(int i=0; i<boxWidth-curPos+1; i++) cerr<<" ";
	cerr<<RESTORECUR<<value.substr(indexPos, boxWidth-curPos+1);
	gotoxy(boxStartX+curPos-1, getY());

}

bool TextBox :: findInAllowedCharacters(char ch) {
	bool result=false;
	if(allowedChars.length()==0) result=true;
	for(int i=0; i<allowedChars.length(); i++) {
		if(allowedChars[i]>='A' and allowedChars[i]<='Z' and ch>='A' and ch<='Z') {
			result=true;
			break;
		}
		else if(allowedChars[i]>='a' and allowedChars[i]<='z' and ch>='a' and ch<='z') {
			result=true;
			break;
		}
		else if(allowedChars[i]>='0' and allowedChars[i]<='9' and ch>='0' and ch<='9') {
			result=true;
			break;
		}
		else if(allowedChars[i]==ch) {
			result=true;
			break;
		}
	}
	return result;
}

void TextBox :: setFocus(void) {
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
		else if(isEnable() and ch>=32 and ch<127 and (size==0 or value.length()<size) and findInAllowedCharacters(ch)){
			if(curPos<boxWidth) 
				curPos++;
				
			value.insert(indexPos++, 1, char(ch));
			printTextInBox(boxStartX, boxWidth, curPos, indexPos);
		}
	}
	cerr<<RESET;
	if(tabflag==true || shifttabflag==true) {
		gotoxy(boxStartX, getY());
		cerr<<NEGATIVE;
		for(int i=0; i<boxWidth; i++) cerr<<" ";
		gotoxy(boxStartX, getY());
		if(value.length()<=boxWidth) cerr<<value;
		else cerr<<value.substr(0, boxWidth);
		cerr<<RESET;
	}
	if(tabflag==true) {
		c[curCmp+1]->setFocus();
	}else if(shifttabflag==true) {
		c[curCmp-1]->setFocus();
	}
}
