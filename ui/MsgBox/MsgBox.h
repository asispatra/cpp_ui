/*
 * File Name: MsgBox.h
 * 
 * Date: September 09, 2013
 * Author: Asis Kumar Patra (756017)
 * Purpose: 
 * 
 */

#ifndef _MSGBOX_H
	#define _MSGBOX_H

#include <stdio.h>
#include <iostream>

using namespace std;


class MsgBox
{
public:
	static int show(string title, string msg);
	static int show(string title, string msg, unsigned int y);
};


#endif
