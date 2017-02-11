/*
 * File Name: Button.h
 * 
 * Date: September 06, 2013
 * Author: Asis Kumar Patra (756017)
 * Purpose: 
 * 
 */

#ifndef _BUTTON_H
#define _BUTTON_H

#include "../Component/Component.h"

class Button : public Component {
private:
	string caption;
public:
	Button();
	Button(string);

	void setCaption(string caption);
	string getCaption();

	void draw(void);
	void setFocus(void);
};

#endif
