/*
 * File Name: TextArea.h
 * 
 * Date: May 30, 2015
 * Author: Asis Kumar Patra (756017)
 * Purpose: 
 * 
 */

#ifndef _TEXTAREA_H
#define _TEXTAREA_H
#include "../Component/Component.h"
#include <iostream>
using namespace std;

class TextArea : public Component {
public:
	TextArea();
	TextArea(string);

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
