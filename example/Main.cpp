//
// File Name: Main.cpp
// 
// Date: January 05, 2015
// Author: Asis Kumar Patra (756017)
// Purpose: 
// 
//

#include <iostream>

using namespace std;

// #include "Main.h"
#include "ui/ui.h"

int main(int argc, char** argv) {
	// Write your program code here. 
	clrscr();

	Menu m;
	m.setY(5);
	m.setFrame(true);
	m.setTitle("Select any option");
	m.addMenuItem("1. Log In");
	m.addMenuItem("2. Sign Up");
	m.addMenuItem("X. Exit");

	m.setErrorMessage("Error: Invalid selection, Please select correct option.");
	
	Screen s;
	s.add(&m);
	s.draw();
	int selected = m.selectMenuItem();
	clrscr();
	
	switch (selected) {
		case '1':
			break;
		case '2':
		{
			TextBox email("Email");
			email.setSize(64);
			email.setAllowedCharacters("aA.0_@");
			PasswordField pass("Password");
			pass.setSize(32);
			PasswordField repass("Re-password");
			repass.setLabelWidth(10);
			repass.setSize(32);
			ComboBox sex("Gender");
			sex.addItem("Male");
			sex.addItem("Female");
			TextArea addr("Address");
			addr.setSize(64);
			addr.setHeight(3);
			Button signup("Sign Up");
			Panel panel;
			panel.setY(5);
			panel.setTitle("Join with Us");
			panel.add(&email);
			panel.add(&pass);
			panel.add(&repass);
			panel.add(&sex);
			panel.add(&addr);
			panel.add(&signup);

			Screen s;
			s.add(&panel);
			s.draw();
			email.setFocus();

			break;
		}
		case 'x':
		case 'X':
			break;
		default:
			break;
	}
	clrscr();

	//cout<<"Selected: "<<selected<<endl;
	return 0;
}

