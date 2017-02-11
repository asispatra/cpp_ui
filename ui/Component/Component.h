/*
 * File Name: Component.h
 * 
 * Date: September 06, 2013
 * Author: Asis Kumar Patra (756017)
 * Purpose: 
 * 
 */
#ifndef _COMPONENT_H
#define _COMPONENT_H

#include "../Point/Point.h"
#include "../Dimension/Dimension.h"

class Container;

class Component {
public:
	virtual void setEnable(bool);
	virtual bool isEnable(void);
	virtual void setX(unsigned short);
	virtual unsigned short getX(void);
	virtual void setY(unsigned short);
	virtual unsigned short getY(void);
	virtual void setXY(unsigned short, unsigned short);
	virtual void setXY(Point);
	virtual Point getXY(void);
	virtual void setHeight(unsigned short);
	virtual unsigned short getHeight(void);
	virtual void setWidth(unsigned short);
	virtual unsigned short getWidth(void);
	virtual void setDimension(unsigned short, unsigned short);
	virtual void setDimension(Dimension);
	virtual Dimension getDimensin(void);
	virtual void setParent(Container*);
	virtual Container* getParent(void);

	virtual void setFocus(void);
	virtual void lostFocus(void);
	
	virtual void draw(void)=0;
protected:
	bool enable;
	Point xy;
	Dimension dim;
	Container *parent;
};

#endif
