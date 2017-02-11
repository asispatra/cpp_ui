/*
 * File Name: conio.h
 * 
 * Date: 2013-08-05
 * Author: Asis Kumar Patra
 * Purpose: 
 * 
 */

#ifndef _CONIO_H
#define _CONIO_H
#include <iostream>
using namespace std;
enum color {black, red, green, yellow, blue, magenta, cyan, white};

void set_signal_off(bool s);
bool get_signal_off(void);
void init_keyboard(void);
void close_keyboard(void);
char getch(void);
string executeCmd(char*);
int my_atoi(std::string);
int get_max_x();
int get_max_y();
void cur_up();
void cur_up(int);
void cur_down();
void cur_down(int);
void cur_forward();
void cur_forward(int);
void cur_back();
void cur_back(int);
void cur_next_line();
void cur_next_line(int);
void cur_prev_line();
void cur_prev_line(int);
void cur_cols(int);
void gotoxy(int, int);
void clrscr(void);
void clsline();
void cur_save();
void cur_restore();
void cur_hide();
void cur_show();

void set_color(color);
void set_color(color, bool);
void set_bgcolor(color);
void set_bgcolor(color, bool);
void reset_color();

void bold();
void underline();
void negative();
void reset();

extern const char *BOLD;
extern const char *UNDERLINE;
extern const char *NEGATIVE;
extern const char *RESET;

extern const char *SAVECUR;
extern const char *RESTORECUR;

/* Foreground color */
extern const char *BLACK;
extern const char *RED;
extern const char *GREEN;
extern const char *YELLOW;
extern const char *BLUE;
extern const char *MAGENTA;
extern const char *CYAN;
extern const char *WHITE;

/* Bright Foreground color */
extern const char *BLACK_B;
extern const char *RED_B;
extern const char *GREEN_B;
extern const char *YELLOW_B;
extern const char *BLUE_B;
extern const char *MAGENTA_B;
extern const char *CYAN_B;
extern const char *WHITE_B;

/* Background Color */
extern const char *BG_BLACK;
extern const char *BG_RED;
extern const char *BG_GREEN;
extern const char *BG_YELLOW;
extern const char *BG_BLUE;
extern const char *BG_MAGENTA;
extern const char *BG_CYAN;
extern const char *BG_WHITE;

/* Bright Background Color */
extern const char *BG_BLACK_B;
extern const char *BG_RED_B;
extern const char *BG_GREEN_B;
extern const char *BG_YELLOW_B;
extern const char *BG_BLUE_B;
extern const char *BG_MAGENTA_B;
extern const char *BG_CYAN_B;
extern const char *BG_WHITE_B;

/* Constants for Keys */
extern const int KEY_ALT_BASE;

extern const int KEY_ENTER;
extern const int KEY_TAB;
extern const int KEY_ESC;
extern const int KEY_SPACE;
extern const int KEY_BACKSPACE;

extern const int KEY_F1;
extern const int KEY_F2;
extern const int KEY_F3;
extern const int KEY_F4;
extern const int KEY_F5;
extern const int KEY_F6;
extern const int KEY_F7;
extern const int KEY_F8;
extern const int KEY_F9;
extern const int KEY_F10;
extern const int KEY_F11;
extern const int KEY_F12;
extern const int KEY_INSERT;
extern const int KEY_DELETE;
extern const int KEY_PGUP;
extern const int KEY_PGDOWN;
extern const int KEY_HOME;
extern const int KEY_END;
extern const int KEY_UP;
extern const int KEY_DOWN;
extern const int KEY_RIGHT;
extern const int KEY_LEFT;

extern const int KEY_SHIFT_TAB;

int kbhit(void);

#endif
