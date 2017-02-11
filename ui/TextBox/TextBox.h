/*
 * File Name: TextBox.h
 * 
 * Date: September 06, 2013
 * Author: Asis Kumar Patra (756017)
 * Purpose: 
 * 
 */

#ifndef _TEXTBOX_H
#define _TEXTBOX_H
#include "../Component/Component.h"
#include <iostream>
using namespace std;

class TextBox : public Component {
public:
	TextBox();
	TextBox(string);

	void setLabelWidth(unsigned short);
	unsigned short getLabelWidth(void);
	void setSeparator(string);
	string getSeparator(void);
	void setLabel(string);
	string getLabel(void);
	void setValue(string);
	string getValue(void);
	void setSize(int);
	int getSize();
	void setAllowedCharacters(string);
	string getAllowedCharacters();
	
	virtual void draw(void);
	virtual void setFocus(void);
	virtual void printTextInBox(int, int, int, int);
	bool findInAllowedCharacters(char);
protected:
	unsigned short label_width;
	string separator;
	string label;
	string value;
	int size;
	string allowedChars;
};

#endif
