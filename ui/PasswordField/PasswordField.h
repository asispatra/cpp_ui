/*
 * File Name: PasswordField.h
 * 
 * Date: September 06, 2013
 * Author: Asis Kumar Patra (756017)
 * Purpose: 
 * 
 */

#ifndef _PASSWORDFIELD_H
#define _PASSWORDFIELD_H
#include "../Component/Component.h"
#include "../TextBox/TextBox.h"
#include <iostream>
using namespace std;

class PasswordField : public TextBox {
public:
	PasswordField();
	PasswordField(string);

	void setPasswordChar(char);
	char getPasswordChar();
	
	void draw(void);
	void setFocus(void);
	void printTextInBox(int, int, int, int);
protected:
	char passwdchar;
};

#endif
