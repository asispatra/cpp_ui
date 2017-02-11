//
// File Name: MsgBox.cpp
// 
// Date: September 09, 2013
// Author: Asis Kumar Patra (756017)
// Purpose: 
// 
//

#include <iostream>

using namespace std;

#include "../Window/Window.h"
#include "../Screen/Screen.h"
#include "../conio/conio.h"
#include "MsgBox.h"
int MsgBox :: show(string title, string msg) {
		clrscr();
		Window w;
		w.setTitle(title);
		w.setMessage(msg);

		Screen s;
		s.add(&w);
		s.draw();
		clrscr();
		return w.getPressedKey();
}

int MsgBox :: show(string title, string msg, unsigned int y){
		clrscr();
		Window w;
		w.setY(y);
		w.setTitle(title);
		w.setMessage(msg);

		Screen s;
		s.add(&w);
		s.draw();
		clrscr();
		return w.getPressedKey();
}


