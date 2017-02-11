/*
 * File Name: Dimension.h
 * 
 * Date: September 06, 2013
 * Author: Asis Kumar Patra (756017)
 * Purpose: 
 * 
 */

#ifndef _DIMENSION_H
#define _DIMENSION_H

class Dimension {
public:
	Dimension();
	Dimension(unsigned short, unsigned short);
	Dimension(const Dimension&);
	void setHeight(unsigned short);
	unsigned short getHeight(void);
	void setWidth(unsigned short);
	unsigned short getWidth(void);
private:
	unsigned short height;
	unsigned short width;
};

#endif
