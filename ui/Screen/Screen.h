/*
 * File Name: Screen.h
 * 
 * Date: September 06, 2013
 * Author: Asis Kumar Patra (756017)
 * Purpose: 
 * 
 */

#ifndef _SCREEN_H
#define _SCREEN_H
#include "../Container/Container.h"
#include <vector>

class Screen : public Container {
private:
	vector<Container*> cntnrs;
public:
	Screen();
	void add(Container*);
	void reSetComponents();
	void draw(void);
};

#endif
