/*
 * File Name: CharMap.h
 * 
 * Date: January 10, 2015
 * Author: Asis Kumar Patra (756017)
 * Purpose: 
 * 
 */

#ifndef _CHARMAP_H
#define _CHARMAP_H

enum LineStyle {
	LightSolidLine, 
	HeavySolidLine, 
	LightDoubleDashLine,
	HeavyDoubleDashLine,
	LightTripleDashLine, 
	HeavyTripleDashLine, 
	LightQuadrupleDashLine, 
	HeavyQuadrupleDashLine, 
	SolidDoubleLine
};

/* Box drawing character map */
extern const char DOUBLE_LINE_HORIZONTAL_CHAR[];
extern const char DOUBLE_LINE_VERTICAL_CHAR[];
extern const char DOUBLE_LINE_TL_CHAR[];
extern const char DOUBLE_LINE_TR_CHAR[];
extern const char DOUBLE_LINE_BL_CHAR[];
extern const char DOUBLE_LINE_BR_CHAR[];

/*
 * H - HORIZONTAL
 * V - VERTICAL
 * U - UP
 * D - DOWN
 * L - LEFT
 * R - RIGHT
 */
extern const char LIGHT_H_CHAR[]; /* U+2500 ─ */
extern const char HEAVY_H_CHAR[]; /* U+2501 ━ */
extern const char LIGHT_V_CHAR[]; /* U+2502 │ */
extern const char HEAVY_V_CHAR[]; /* U+2503 ┃ */
extern const char LIGHT_TRIPLE_DASH_H_CHAR[]; /* U+2504 ┄ */
extern const char HEAVY_TRIPLE_DASH_H_CHAR[]; /* U+2505 ┅ */
extern const char LIGHT_TRIPLE_DASH_V_CHAR[]; /* U+2506 ┆ */
extern const char HEAVY_TRIPLE_DASH_V_CHAR[]; /* U+2507 ┇ */
extern const char LIGHT_QUADRULE_DASH_H_CHAR[]; /* U+2508 ┈ */
extern const char HEAVY_QUADRULE_DASH_H_CHAR[]; /* U+2509 ┉ */
extern const char LIGHT_QUADRULE_DASH_V_CHAR[]; /* U+250A ┊ */
extern const char HEAVY_QUADRULE_DASH_V_CHAR[]; /* U+250B ┋ */
extern const char LIGHT_D_R_CHAR[]; /* U+250C ┌ */
extern const char D_LIGHT_R_HEAVY_CHAR[]; /* U+250D ┍ */
extern const char D_HEAVY_R_LIGHT_CHAR[]; /* U+250E ┎ */
extern const char HEAVY_D_R_CHAR[]; /* U+250F ┏ */
extern const char LIGHT_D_L_CHAR[]; /* U+2510 ┐ */
extern const char D_LIGHT_L_HEAVY_CHAR[]; /* U+2511 ┑ */
extern const char D_HEAVY_L_LIGHT_CHAR[]; /* U+2512 ┒ */
extern const char HEAVY_D_L_CHAR[]; /* U+2513 ┓ */
extern const char LIGHT_U_R_CHAR[]; /* U+2514 └ */
extern const char U_LIGHT_R_HEAVY_CHAR[]; /* U+2515 ┕ */
extern const char U_HEAVY_R_LIGHT_CHAR[]; /* U+2516 ┖ */
extern const char HEAVY_U_R_CHAR[]; /* U+2517 ┗ */
extern const char LIGHT_U_L_CHAR[]; /* U+2518 ┘ */
extern const char U_LIGHT_L_HEAVY_CHAR[]; /* U+2519 ┙ */
extern const char U_HEAVY_L_LIGHT_CHAR[]; /* U+251A ┚ */
extern const char HEAVY_U_L_CHAR[]; /* U+251B ┛ */
extern const char LIGHT_V_R_CHAR[]; /* U+251C ├ */
extern const char V_LIGHT_R_HEAVY_CHAR[]; /* U+251D ┝ */
extern const char U_HEAVY_R_D_LIGHT_CHAR[]; /* U+251E ┞ */
extern const char D_HEAVY_R_U_LIGHT_CHAR[]; /* U+251F ┟ */
extern const char V_HEAVY_R_LIGHT_CHAR[]; /* U+2520 ┠ */
extern const char D_LIGHT_R_U_HEAVY_CHAR[]; /* U+2521 ┡ */
extern const char U_LIGHT_R_D_HEAVY_CHAR[]; /* U+2522 ┢ */
extern const char HEAVY_V_R_CHAR[]; /* U+2523 ┣ */
extern const char LIGHT_V_L_CHAR[]; /* U+2524 ┤ */
extern const char V_LIGHT_L_HEAVY_CHAR[]; /* U+2525 ┥ */
extern const char U_HEAVY_L_D_LIGHT_CHAR[]; /* U+2526 ┦ */
extern const char D_HEAVY_L_U_LIGHT_CHAR[]; /* U+2527 ┧ */
extern const char V_HEAVY_L_LIGHT_CHAR[]; /* U+2528 ┨ */
extern const char D_LIGHT_L_U_HEAVY_CHAR[]; /* U+2529 ┩ */
extern const char U_LIGHT_L_D_HEAVY_CHAR[]; /* U+252A ┪ */
extern const char HEAVY_V_L_CHAR[]; /* U+252B ┫ */
extern const char LIGHT_D_H_CHAR[]; /* U+252C ┬ */
extern const char L_HEAVY_R_D_LIGHT_CHAR[]; /* U+252D ┭ */
extern const char R_HEAVY_L_D_LIGHT_CHAR[]; /* U+252E ┮ */
extern const char D_LIGHT_H_HEAVY_CHAR[]; /* U+252F ┯ */
extern const char D_HEAVY_H_LIGHT_CHAR[]; /* U+2530 ┰ */
extern const char R_LIGHT_L_D_HEAVY_CHAR[]; /* U+2531 ┱ */
extern const char L_LIGHT_R_D_HEAVY_CHAR[]; /* U+2532 ┲ */
extern const char HEAVY_D_H_CHAR[]; /* U+2533 ┳ */
extern const char LIGHT_U_H_CHAR[]; /* U+2534 ┴ */
extern const char L_HEAVY_R_U_LIGHT_CHAR[]; /* U+2535 ┵ */
extern const char R_HEAVY_L_U_LIGHT_CHAR[]; /* U+2536 ┶ */
extern const char U_LIGHT_H_HEAVY_CHAR[]; /* U+2537 ┷ */
extern const char U_HEAVY_H_LIGHT_CHAR[]; /* U+2538 ┸ */
extern const char R_LIGHT_L_U_HEAVY_CHAR[]; /* U+2539 ┹ */
extern const char L_LIGHT_R_U_HEAVY_CHAR[]; /* U+253A ┺ */
extern const char HEAVY_U_H_CHAR[]; /* U+253B ┻ */
extern const char LIGHT_V_H_CHAR[]; /* U+253C ┼ */
extern const char L_HEAVY_R_V_LIGHT_CHAR[]; /* U+253D ┽ */
extern const char R_HEAVY_L_V_LIGHT_CHAR[]; /* U+253E ┾ */
extern const char V_LIGHT_H_HEAVY_CHAR[]; /* U+253F ┿ */
extern const char U_HEAVY_D_H_LIGHT_CHAR[]; /* U+2540 ╀ */
extern const char D_HEAVY_U_H_LIGHT_CHAR[]; /* U+2541 ╁ */
extern const char V_HEAVY_H_LIGHT_CHAR[]; /* U+2542 ╂ */
extern const char L_U_HEAVY_R_D_LIGHT_CHAR[]; /* U+2543 ╃ */
extern const char R_U_HEAVY_L_D_LIGHT_CHAR[]; /* U+2544 ╄ */
extern const char L_D_HEAVY_R_U_LIGHT_CHAR[]; /* U+2545 ╅ */
extern const char R_D_HEAVY_L_U_LIGHT_CHAR[]; /* U+2546 ╆ */
extern const char D_LIGHT_U_H_HEAVY_CHAR[]; /* U+2547 ╇ */
extern const char U_LIGHT_D_H_HEAVY_CHAR[]; /* U+2548 ╈ */
extern const char R_LIGHT_L_V_HEAVY_CHAR[]; /* U+2549 ╉ */
extern const char L_LIGHT_R_V_HEAVY_CHAR[]; /* U+254A ╊ */
extern const char HEAVY_V_H_CHAR[]; /* U+254B ╋ */
extern const char LIGHT_DOUBLE_DASH_H_CHAR[]; /* U+254C ╌ */
extern const char HEAVY_DOUBLE_DASH_H_CHAR[]; /* U+254D ╍ */
extern const char LIGHT_DOUBLE_DASH_V_CHAR[]; /* U+254E ╎ */
extern const char HEAVY_DOUBLE_DASH_V_CHAR[]; /* U+254F ╏ */
extern const char DOUBLE_H_CHAR[]; /* U+2550 ═ */
extern const char DOUBLE_V_CHAR[]; /* U+2551 ║ */
extern const char D_SINGLE_R_DOUBLE_CHAR[]; /* U+2552 ╒ */
extern const char D_DOUBLE_R_SINGLE_CHAR[]; /* U+2553 ╓ */
extern const char DOUBLE_D_R_CHAR[]; /* U+2554 ╔ */
extern const char D_SINGLE_L_DOUBLE_CHAR[]; /* U+2555 ╕ */
extern const char D_DOUBLE_L_SINGLE_CHAR[]; /* U+2556 ╖ */
extern const char DOUBLE_D_L_CHAR[]; /* U+2557 ╗ */
extern const char U_SINGLE_R_DOUBLE_CHAR[]; /* U+2558 ╘ */
extern const char U_DOUBLE_R_SINGLE_CHAR[]; /* U+2559 ╙ */
extern const char DOUBLE_U_R_CHAR[]; /* U+255A ╚ */
extern const char U_SINGLE_L_DOUBLE_CHAR[]; /* U+255B ╛ */
extern const char U_DOUBLE_L_SINGLE_CHAR[]; /* U+255C ╜ */
extern const char DOUBLE_U_L_CHAR[]; /* U+255D ╝ */
extern const char V_SINGLE_R_DOUBLE_CHAR[]; /* U+255E ╞ */
extern const char V_DOUBLE_R_SINGLE_CHAR[]; /* U+255F ╟ */
extern const char DOUBLE_V_R_CHAR[]; /* U+2560 ╠ */
extern const char V_SINGLE_L_DOUBLE_CHAR[]; /* U+2561 ╡ */
extern const char V_DOUBLE_L_SINGLE_CHAR[]; /* U+2562 ╢ */
extern const char DOUBLE_V_L_CHAR[]; /* U+2563 ╣ */
extern const char D_SINGLE_H_DOUBLE_CHAR[]; /* U+2564 ╤ */
extern const char D_DOUBLE_H_SINGLE_CHAR[]; /* U+2565 ╥ */
extern const char DOUBLE_D_H_CHAR[]; /* U+2566 ╦ */
extern const char U_SINGLE_H_DOUBLE_CHAR[]; /* U+2567 ╧ */
extern const char U_DOUBLE_H_SINGLE_CHAR[]; /* U+2568 ╨ */
extern const char DOUBLE_U_H_CHAR[]; /* U+2569 ╩ */
extern const char V_SINGLE_H_DOUBLE_CHAR[]; /* U+256A ╪ */
extern const char V_DOUBLE_H_SINGLE_CHAR[]; /* U+256B ╫ */
extern const char DOUBLE_V_H_CHAR[]; /* U+256C ╬ */
extern const char LIGHT_ARC_D_R_CHAR[]; /* U+256D ╭ */
extern const char LIGHT_ARC_D_L_CHAR[]; /* U+256E ╮ */
extern const char LIGHT_ARC_U_L_CHAR[]; /* U+256F ╯ */
extern const char LIGHT_ARC_U_R_CHAR[]; /* U+2570 ╰ */
extern const char LIGHT_DIAGONAL_UPER_R_TO_LOWER_L_CHAR[]; /* U+2571 ╱ */
extern const char LIGHT_DIAGONAL_UPER_L_TO_LOWER_R_CHAR[]; /* U+2572 ╲ */
extern const char LIGHT_DIAGONAL_CROSS_CHAR[]; /* U+2573 ╳ */
extern const char LIGHT_L_CHAR[]; /* U+2574 ╴ */
extern const char LIGHT_U_CHAR[]; /* U+2575 ╵ */
extern const char LIGHT_R_CHAR[]; /* U+2576 ╶ */
extern const char LIGHT_D_CHAR[]; /* U+2577 ╷ */
extern const char HEAVY_L_CHAR[]; /* U+2578 ╸ */
extern const char HEAVY_U_CHAR[]; /* U+2579 ╹ */
extern const char HEAVY_R_CHAR[]; /* U+257A ╺ */
extern const char HEAVY_D_CHAR[]; /* U+257B ╻ */
extern const char LIGHT_L_HEAVY_R_CHAR[]; /* U+257C ╼ */
extern const char LIGHT_U_HEAVY_D_CHAR[]; /* U+257D ╽ */
extern const char HEAVY_L_LIGHT_R_CHAR[]; /* U+257E ╾ */
extern const char HEAVY_U_LIGHT_D_CHAR[]; /* U+257F ╿ */

#endif
