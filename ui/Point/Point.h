/*
 * File Name: Point.h
 * 
 * Date: September 06, 2013
 * Author: Asis Kumar Patra (756017)
 * Purpose: 
 * 
 */

#ifndef _POINT_H
#define _POINT_H

class Point {
public:
	Point();
	Point(unsigned short, unsigned short);
	Point(const Point&);
	void setX(unsigned short);
	unsigned short getX(void);
	void setY(unsigned short);
	unsigned short getY(void);
private:
	unsigned short x;
	unsigned short y;
};

#endif
