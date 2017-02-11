/*
 * File Name: Container.h
 * 
 * Date: September 06, 2013
 * Author: Asis Kumar Patra (756017)
 * Purpose: 
 * 
 */

#ifndef _CONTAINER_H
#define _CONTAINER_H

#include "../Component/Component.h"
#include "../CharMap/CharMap.h"
#include <vector>
#include <iostream>
using namespace std;

class Container : public Component {
public:
	virtual void add(Component*);
	virtual void setComponents(vector<Component*>);
	virtual vector<Component*> getComponents(void);
	virtual void setFrame(bool);
	virtual bool hasFrame(void);
	virtual void setTitle(string);
	virtual string getTitle(void);
	virtual void setFrameStyle(LineStyle);
	virtual LineStyle getFrameStyle();
//protected:
	virtual void reSetComponents(void);
protected:
	vector<Component*> cmpnts;
	bool frame;
	string title;
	LineStyle frameStyle;
	const char *DOWN_RIGHT_CHAR;
	const char *DOWN_LEFT_CHAR;
	const char *UP_RIGHT_CHAR;
	const char *UP_LEFT_CHAR;
	const char *HORIZONTAL_CHAR;
	const char *VERTICAL_CHAR;
};

#endif
