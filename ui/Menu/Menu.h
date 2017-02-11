/*
 * File Name: Menu.h
 * 
 * Date: September 06, 2013
 * Author: Asis Kumar Patra (756017)
 * Purpose: 
 * 
 */

#ifndef _MENU_H
#define _MENU_H

#include <vector>
#include <string>

using namespace std;

#include "../Point/Point.h"
#include "../Container/Container.h"

class Menu : public Container {
public:
	Menu();

	void setErrorMessage(string);
	string getErrorMessage();
	int selectMenuItem();
	void addMenuItems(vector<string>);
	void addMenuItem(string);
	void addMenuItem(string, int);
	vector<string> getMenuItems();
	void reSetComponents();
	void draw(void);
private:
	string errorMessage;
	vector<Point> startXY;
	vector<string> items;
	vector<int> keys;
};

#endif
