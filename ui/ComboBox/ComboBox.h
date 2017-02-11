/*
 * File Name: ComboBox.h
 * 
 * Date: September 06, 2013
 * Author: Asis Kumar Patra (756017)
 * Purpose: 
 * 
 */

#ifndef _COMBOBOX_H
#define _COMBOBOX_H

#include <iostream>
#include "../Component/Component.h"
#include <vector>
using namespace std;

class ComboBox : public Component {
private:
	unsigned short label_width;
	string separator;
	string label;
	vector<string> items; // Elements
	int selected;
public:
	ComboBox();
	ComboBox(string);
	ComboBox(vector<string>);
	ComboBox(string, vector<string>);
	
	void setLabelWidth(unsigned short);
	unsigned short getLabelWidth(void);
	void setSeparator(string);
	string getSeparator(void);
	void setLabel(string);
	string getLabel();
	void addItems(vector<string>);
	vector<string> getItems();
	void addItem(string);
	int getSelectedIndex();
	string getSelectedItem();
	unsigned short getMaxItemWidth(void);
	unsigned short getWidth(void);
	void setSelectedIndex(int);

	void draw(void);
	void drawSelectedItem(void);
	void setFocus(void);
};

#endif
