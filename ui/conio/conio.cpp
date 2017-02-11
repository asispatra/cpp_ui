/*
 * File Name: conio.c
 * 
 * Date: 2013-08-05
 * Author: Asis Kumar Patra
 * Purpose: 
 * 
 */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

#include "conio.h"

static struct termios initial_settings, new_settings;

FILE *input=stdin;
FILE *output=stdout;
bool signaloff=false;
char ESC=27;

void set_signal_off(bool s) {
	signaloff=s;
}

bool get_signal_off(void) {
	return signaloff;
}

void init_keyboard(void) {
	tcgetattr(fileno(input), &initial_settings);
	new_settings = initial_settings;
	new_settings.c_lflag &= ~ICANON;
	new_settings.c_lflag &= ~ECHO;
	if(signaloff==true) new_settings.c_lflag &= ~ISIG;
	new_settings.c_cc[VMIN] = 1;
	new_settings.c_cc[VTIME] = 0;
	if(tcsetattr(fileno(input), TCSANOW, &new_settings)) {
		fprintf(output, "Could not set attributes\n");
		exit(2);
	}
}

void close_keyboard(void) {
	tcsetattr(fileno(input), TCSANOW, &initial_settings);
}

char getch(void) {
	char ch;
	init_keyboard();
	read(fileno(input), &ch, 1);
	close_keyboard();
	return ch;
}

string executeCmd(char *cmd) {
	FILE *pipe = popen(cmd, "r");
	if(!pipe) {
		cerr<<"Error: Unable to execute shell command!"<<endl;
		exit(3);
	}
	char buffer[128];
	string str = "";
	while(!feof(pipe)) {
		if(fgets(buffer, 128, pipe) != NULL)
			str += buffer;
	}
	pclose(pipe);
	return str;
}

int my_atoi(string s) {
	//cout<<s.length()<<endl;
	int n=0;
	for(int i=0; i<s.length()-1; i++) n=n*10+(s[i]-'0');
	return n;
}

int get_max_x() {
	return (my_atoi(executeCmd("stty size | awk '{print $2}'")));
}

int get_max_y() {
	return (my_atoi(executeCmd("stty size | awk '{print $1}'")));
}

void cur_up() {
	cerr<<ESC<<"[A";
}

void cur_up(int n) {
	if(n>0)cerr<<ESC<<"["<<n<<"A";
}

void cur_down() {
	cerr<<ESC<<"[B";
}

void cur_down(int n) {
	if(n>0)cerr<<ESC<<"["<<n<<"B";
}

void cur_forward() {
	cerr<<ESC<<"[C";
}

void cur_forward(int n) {
	if(n>0)cerr<<ESC<<"["<<n<<"C";
}

void cur_back() {
	cerr<<ESC<<"[D";
}

void cur_back(int n) {
	if(n>0)cerr<<ESC<<"["<<n<<"D";
}

void cur_next_line() {
	cerr<<ESC<<"[E";
}

void cur_next_line(int n) {
	if(n>0)cerr<<ESC<<"["<<n<<"E";
}

void cur_prev_line() {
	cerr<<ESC<<"[F";
}

void cur_prev_line(int n) {
	if(n>0)cerr<<ESC<<"["<<n<<"F";
}

void cur_cols(int n) {
	if(n>0)cerr<<ESC<<"["<<n<<"G";
}

void gotoxy(int m, int n) {
	if(n>0 && m>0)cerr<<ESC<<"["<<n<<";"<<m<<"H";
}

void clrscr(void) {
	cerr<<ESC<<"[2J";
	gotoxy(1, 1);
}

void clsline() {
	cerr<<ESC<<"[2K";
	cur_cols(1);
}

void cur_save() {
	cerr<<ESC<<"[s";
}

void cur_restore() {
	cerr<<ESC<<"[u";
}

void cur_hide() {
	cerr<<ESC<<"[?25l";
}

void cur_show() {
	cerr<<ESC<<"[?25h";
}

void set_color(color x) {
	cerr<<ESC<<"[3"<<x<<"m";
}

void set_color(color x, bool b) {
	if(b==true)
		cerr<<ESC<<"[3"<<x<<";1m";
	else
		cerr<<ESC<<"[3"<<x<<"m";
}

void set_bgcolor(color x) {
	cerr<<ESC<<"[4"<<x<<"m";
}

void set_bgcolor(color x, bool b) {
	if(b==true)
		cerr<<ESC<<"[4"<<x<<";1m";
	else
		cerr<<ESC<<"[4"<<x<<"m";
}

void reset_color() {
	cerr<<ESC<<"[0m";
}

void bold() {
	cerr<<ESC<<"[1m";
}

void underline() {
	cerr<<ESC<<"[4m";
}

void negative() {
	cerr<<ESC<<"[7m";
}

void reset() {
	cerr<<ESC<<"[0m";
}


const char *BOLD="\x1b[1m";
const char *UNDERLINE="\x1b[4m";
const char *NEGATIVE="\x1b[7m";
const char *RESET="\x1b[0m";

const char *SAVECUR="\x1b[s";
const char *RESTORECUR="\x1b[u";

const char *BLACK="\x1b[30m";
const char *RED="\x1b[31m";
const char *GREEN="\x1b[32m";
const char *YELLOW="\x1b[33m";
const char *BLUE="\x1b[34m";
const char *MAGENTA="\x1b[35m";
const char *CYAN="\x1b[36m";
const char *WHITE="\x1b[37m";
const char *BLACK_B="\x1b[30;1m";
const char *RED_B="\x1b[31;1m";
const char *GREEN_B="\x1b[32;1m";
const char *YELLOW_B="\x1b[33;1m";
const char *BLUE_B="\x1b[34;1m";
const char *MAGENTA_B="\x1b[35;1m";
const char *CYAN_B="\x1b[36;1m";
const char *WHITE_B="\x1b[37;1m";

const char *BG_BLACK="\x1b[40m";
const char *BG_RED="\x1b[41m";
const char *BG_GREEN="\x1b[42m";
const char *BG_YELLOW="\x1b[43m";
const char *BG_BLUE="\x1b[44m";
const char *BG_MAGENTA="\x1b[45m";
const char *BG_CYAN="\x1b[46m";
const char *BG_WHITE="\x1b[47m";
const char *BG_BLACK_B="\x1b[40;1m";
const char *BG_RED_B="\x1b[41;1m";
const char *BG_GREEN_B="\x1b[42;1m";
const char *BG_YELLOW_B="\x1b[43;1m";
const char *BG_BLUE_B="\x1b[44;1m";
const char *BG_MAGENTA_B="\x1b[45;1m";
const char *BG_CYAN_B="\x1b[46;1m";
const char *BG_WHITE_B="\x1b[47;1m";


const int KEY_ALT_BASE=2000;

const int KEY_ENTER=10;
const int KEY_TAB=9;
const int KEY_ESC=27;
const int KEY_SPACE=32;
const int KEY_BACKSPACE=127;

const int KEY_BASE=1000;
const int KEY_F1=KEY_BASE+1;
const int KEY_F2=KEY_BASE+2;
const int KEY_F3=KEY_BASE+3;
const int KEY_F4=KEY_BASE+4;
const int KEY_F5=KEY_BASE+5;
const int KEY_F6=KEY_BASE+6;
const int KEY_F7=KEY_BASE+7;
const int KEY_F8=KEY_BASE+8;
const int KEY_F9=KEY_BASE+9;
const int KEY_F10=KEY_BASE+10;
const int KEY_F11=KEY_BASE+11;
const int KEY_F12=KEY_BASE+12;
const int KEY_INSERT=KEY_BASE+13;
const int KEY_DELETE=KEY_BASE+14;
const int KEY_PGUP=KEY_BASE+15;
const int KEY_PGDOWN=KEY_BASE+16;
const int KEY_HOME=KEY_BASE+17;
const int KEY_END=KEY_BASE+18;
const int KEY_UP=KEY_BASE+19;
const int KEY_DOWN=KEY_BASE+20;
const int KEY_RIGHT=KEY_BASE+21;
const int KEY_LEFT=KEY_BASE+22;

const int KEY_SHIFT_BASE=1100;
const int KEY_SHIFT_TAB=KEY_SHIFT_BASE+1;

int kbhit(void) {
	char key[8]="";
	int num_chars;
	int pressed=-1;
	init_keyboard();
	num_chars=read(fileno(input), key, 5);
	key[num_chars]='\0';
	if(num_chars==1) {
		pressed=key[0];
	}else if(num_chars==2 && key[0]==27) {
		pressed=KEY_ALT_BASE+key[1];
	}
	else if(strcmp(key, "\x1b[[A")==0) pressed=KEY_F1;
	else if(strcmp(key, "\x1b[[B")==0) pressed=KEY_F2;
	else if(strcmp(key, "\x1b[[C")==0) pressed=KEY_F3;
	else if(strcmp(key, "\x1b[[D")==0) pressed=KEY_F4;
	else if(strcmp(key, "\x1b[[E")==0) pressed=KEY_F5;
	else if(strcmp(key, "\x1b[17~")==0) pressed=KEY_F6;
	else if(strcmp(key, "\x1b[18~")==0) pressed=KEY_F7;
	else if(strcmp(key, "\x1b[19~")==0) pressed=KEY_F8;
	else if(strcmp(key, "\x1b[20~")==0) pressed=KEY_F9;
	else if(strcmp(key, "\x1b[21~")==0) pressed=KEY_F10;
	else if(strcmp(key, "\x1b[23~")==0) pressed=KEY_F11;
	else if(strcmp(key, "\x1b[24~")==0) pressed=KEY_F12;
	else if(strcmp(key, "\x1b[2~")==0) pressed=KEY_INSERT;
	else if(strcmp(key, "\x1b[3~")==0) pressed=KEY_DELETE;
	else if(strcmp(key, "\x1b[5~")==0) pressed=KEY_PGUP;
	else if(strcmp(key, "\x1b[6~")==0) pressed=KEY_PGDOWN;
	else if(strcmp(key, "\x1b[1~")==0) pressed=KEY_HOME;
	else if(strcmp(key, "\x1b[4~")==0) pressed=KEY_END;
	else if(strcmp(key, "\x1b[A")==0) pressed=KEY_UP;
	else if(strcmp(key, "\x1b[B")==0) pressed=KEY_DOWN;
	else if(strcmp(key, "\x1b[C")==0) pressed=KEY_RIGHT;
	else if(strcmp(key, "\x1b[D")==0) pressed=KEY_LEFT;
	else if(strcmp(key, "\x1b[Z")==0) pressed=KEY_SHIFT_TAB;
	close_keyboard();
	return pressed;
		
}

