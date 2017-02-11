/*
 * File Name: Window.h
 * 
 * Date: September 06, 2013
 * Author: Asis Kumar Patra (756017)
 * Purpose: 
 * 
 */

#ifndef _WINDOW_H
#define _WINDOW_H

#include <string>

using namespace std;

#include "../Point/Point.h"
#include "../Container/Container.h"

class Window : public Container {
public:
	Window();

	int getPressedKey();
	void setMessage(string);
	string getMessage();

	void reSetComponents();
	void draw(void);
private:
	int pressedKey;
	Point msgPos;
	string message;
};

#endif
