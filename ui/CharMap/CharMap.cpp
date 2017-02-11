//
// File Name: CharMap.cpp
// 
// Date: January 10, 2015
// Author: Asis Kumar Patra (756017)
// Purpose: 
// 
//

#include "CharMap.h"

/* Box drawing character map */
const char DOUBLE_LINE_HORIZONTAL_CHAR[] = { 0xe2, 0x95, 0x90, '\0' };
const char DOUBLE_LINE_VERTICAL_CHAR[] = { 0xe2, 0x95, 0x91, '\0' };
const char DOUBLE_LINE_TL_CHAR[] = { 0xe2, 0x95, 0x94, '\0' };
const char DOUBLE_LINE_TR_CHAR[] = { 0xe2, 0x95, 0x97, '\0' };
const char DOUBLE_LINE_BL_CHAR[] = { 0xe2, 0x95, 0x9a, '\0' };
const char DOUBLE_LINE_BR_CHAR[] = { 0xe2, 0x95, 0x9d, '\0' };

/*
 * H - HORIZONTAL
 * V - VERTICAL
 * U - UP
 * D - DOWN
 * L - LEFT
 * R - RIGHT
 */
const char LIGHT_H_CHAR[] = {0xe2, 0x94, 0x80, '\0'}; /* U+2500 ─ */
const char HEAVY_H_CHAR[] = {0xe2, 0x94, 0x81, '\0'}; /* U+2501 ━ */
const char LIGHT_V_CHAR[] = {0xe2, 0x94, 0x82, '\0'}; /* U+2502 │ */
const char HEAVY_V_CHAR[] = {0xe2, 0x94, 0x83, '\0'}; /* U+2503 ┃ */
const char LIGHT_TRIPLE_DASH_H_CHAR[] = {0xe2, 0x94, 0x84, '\0'}; /* U+2504 ┄ */
const char HEAVY_TRIPLE_DASH_H_CHAR[] = {0xe2, 0x94, 0x85, '\0'}; /* U+2505 ┅ */
const char LIGHT_TRIPLE_DASH_V_CHAR[] = {0xe2, 0x94, 0x86, '\0'}; /* U+2506 ┆ */
const char HEAVY_TRIPLE_DASH_V_CHAR[] = {0xe2, 0x94, 0x87, '\0'}; /* U+2507 ┇ */
const char LIGHT_QUADRULE_DASH_H_CHAR[] = {0xe2, 0x94, 0x88, '\0'}; /* U+2508 ┈ */
const char HEAVY_QUADRULE_DASH_H_CHAR[] = {0xe2, 0x94, 0x89, '\0'}; /* U+2509 ┉ */
const char LIGHT_QUADRULE_DASH_V_CHAR[] = {0xe2, 0x94, 0x8a, '\0'}; /* U+250A ┊ */
const char HEAVY_QUADRULE_DASH_V_CHAR[] = {0xe2, 0x94, 0x8b, '\0'}; /* U+250B ┋ */
const char LIGHT_D_R_CHAR[] = {0xe2, 0x94, 0x8c, '\0'}; /* U+250C ┌ */
const char D_LIGHT_R_HEAVY_CHAR[] = {0xe2, 0x94, 0x8d, '\0'}; /* U+250D ┍ */
const char D_HEAVY_R_LIGHT_CHAR[] = {0xe2, 0x94, 0x8e, '\0'}; /* U+250E ┎ */
const char HEAVY_D_R_CHAR[] = {0xe2, 0x94, 0x8f, '\0'}; /* U+250F ┏ */
const char LIGHT_D_L_CHAR[] = {0xe2, 0x94, 0x90, '\0'}; /* U+2510 ┐ */
const char D_LIGHT_L_HEAVY_CHAR[] = {0xe2, 0x94, 0x91, '\0'}; /* U+2511 ┑ */
const char D_HEAVY_L_LIGHT_CHAR[] = {0xe2, 0x94, 0x92, '\0'}; /* U+2512 ┒ */
const char HEAVY_D_L_CHAR[] = {0xe2, 0x94, 0x93, '\0'}; /* U+2513 ┓ */
const char LIGHT_U_R_CHAR[] = {0xe2, 0x94, 0x94, '\0'}; /* U+2514 └ */
const char U_LIGHT_R_HEAVY_CHAR[] = {0xe2, 0x94, 0x95, '\0'}; /* U+2515 ┕ */
const char U_HEAVY_R_LIGHT_CHAR[] = {0xe2, 0x94, 0x96, '\0'}; /* U+2516 ┖ */
const char HEAVY_U_R_CHAR[] = {0xe2, 0x94, 0x97, '\0'}; /* U+2517 ┗ */
const char LIGHT_U_L_CHAR[] = {0xe2, 0x94, 0x98, '\0'}; /* U+2518 ┘ */
const char U_LIGHT_L_HEAVY_CHAR[] = {0xe2, 0x94, 0x99, '\0'}; /* U+2519 ┙ */
const char U_HEAVY_L_LIGHT_CHAR[] = {0xe2, 0x94, 0x9a, '\0'}; /* U+251A ┚ */
const char HEAVY_U_L_CHAR[] = {0xe2, 0x94, 0x9b, '\0'}; /* U+251B ┛ */
const char LIGHT_V_R_CHAR[] = {0xe2, 0x94, 0x9c, '\0'}; /* U+251C ├ */
const char V_LIGHT_R_HEAVY_CHAR[] = {0xe2, 0x94, 0x9d, '\0'}; /* U+251D ┝ */
const char U_HEAVY_R_D_LIGHT_CHAR[] = {0xe2, 0x94, 0x9e, '\0'}; /* U+251E ┞ */
const char D_HEAVY_R_U_LIGHT_CHAR[] = {0xe2, 0x94, 0x9f, '\0'}; /* U+251F ┟ */
const char V_HEAVY_R_LIGHT_CHAR[] = {0xe2, 0x94, 0xa0, '\0'}; /* U+2520 ┠ */
const char D_LIGHT_R_U_HEAVY_CHAR[] = {0xe2, 0x94, 0xa1, '\0'}; /* U+2521 ┡ */
const char U_LIGHT_R_D_HEAVY_CHAR[] = {0xe2, 0x94, 0xa2, '\0'}; /* U+2522 ┢ */
const char HEAVY_V_R_CHAR[] = {0xe2, 0x94, 0xa3, '\0'}; /* U+2523 ┣ */
const char LIGHT_V_L_CHAR[] = {0xe2, 0x94, 0xa4, '\0'}; /* U+2524 ┤ */
const char V_LIGHT_L_HEAVY_CHAR[] = {0xe2, 0x94, 0xa5, '\0'}; /* U+2525 ┥ */
const char U_HEAVY_L_D_LIGHT_CHAR[] = {0xe2, 0x94, 0xa6, '\0'}; /* U+2526 ┦ */
const char D_HEAVY_L_U_LIGHT_CHAR[] = {0xe2, 0x94, 0xa7, '\0'}; /* U+2527 ┧ */
const char V_HEAVY_L_LIGHT_CHAR[] = {0xe2, 0x94, 0xa8, '\0'}; /* U+2528 ┨ */
const char D_LIGHT_L_U_HEAVY_CHAR[] = {0xe2, 0x94, 0xa9, '\0'}; /* U+2529 ┩ */
const char U_LIGHT_L_D_HEAVY_CHAR[] = {0xe2, 0x94, 0xaa, '\0'}; /* U+252A ┪ */
const char HEAVY_V_L_CHAR[] = {0xe2, 0x94, 0xab, '\0'}; /* U+252B ┫ */
const char LIGHT_D_H_CHAR[] = {0xe2, 0x94, 0xac, '\0'}; /* U+252C ┬ */
const char L_HEAVY_R_D_LIGHT_CHAR[] = {0xe2, 0x94, 0xad, '\0'}; /* U+252D ┭ */
const char R_HEAVY_L_D_LIGHT_CHAR[] = {0xe2, 0x94, 0xae, '\0'}; /* U+252E ┮ */
const char D_LIGHT_H_HEAVY_CHAR[] = {0xe2, 0x94, 0xaf, '\0'}; /* U+252F ┯ */
const char D_HEAVY_H_LIGHT_CHAR[] = {0xe2, 0x94, 0xb0, '\0'}; /* U+2530 ┰ */
const char R_LIGHT_L_D_HEAVY_CHAR[] = {0xe2, 0x94, 0xb1, '\0'}; /* U+2531 ┱ */
const char L_LIGHT_R_D_HEAVY_CHAR[] = {0xe2, 0x94, 0xb2, '\0'}; /* U+2532 ┲ */
const char HEAVY_D_H_CHAR[] = {0xe2, 0x94, 0xb3, '\0'}; /* U+2533 ┳ */
const char LIGHT_U_H_CHAR[] = {0xe2, 0x94, 0xb4, '\0'}; /* U+2534 ┴ */
const char L_HEAVY_R_U_LIGHT_CHAR[] = {0xe2, 0x94, 0xb5, '\0'}; /* U+2535 ┵ */
const char R_HEAVY_L_U_LIGHT_CHAR[] = {0xe2, 0x94, 0xb6, '\0'}; /* U+2536 ┶ */
const char U_LIGHT_H_HEAVY_CHAR[] = {0xe2, 0x94, 0xb7, '\0'}; /* U+2537 ┷ */
const char U_HEAVY_H_LIGHT_CHAR[] = {0xe2, 0x94, 0xb8, '\0'}; /* U+2538 ┸ */
const char R_LIGHT_L_U_HEAVY_CHAR[] = {0xe2, 0x94, 0xb9, '\0'}; /* U+2539 ┹ */
const char L_LIGHT_R_U_HEAVY_CHAR[] = {0xe2, 0x94, 0xba, '\0'}; /* U+253A ┺ */
const char HEAVY_U_H_CHAR[] = {0xe2, 0x94, 0xbb, '\0'}; /* U+253B ┻ */
const char LIGHT_V_H_CHAR[] = {0xe2, 0x94, 0xbc, '\0'}; /* U+253C ┼ */
const char L_HEAVY_R_V_LIGHT_CHAR[] = {0xe2, 0x94, 0xbd, '\0'}; /* U+253D ┽ */
const char R_HEAVY_L_V_LIGHT_CHAR[] = {0xe2, 0x94, 0xbe, '\0'}; /* U+253E ┾ */
const char V_LIGHT_H_HEAVY_CHAR[] = {0xe2, 0x94, 0xbf, '\0'}; /* U+253F ┿ */
const char U_HEAVY_D_H_LIGHT_CHAR[] = {0xe2, 0x95, 0x80, '\0'}; /* U+2540 ╀ */
const char D_HEAVY_U_H_LIGHT_CHAR[] = {0xe2, 0x95, 0x81, '\0'}; /* U+2541 ╁ */
const char V_HEAVY_H_LIGHT_CHAR[] = {0xe2, 0x95, 0x82, '\0'}; /* U+2542 ╂ */
const char L_U_HEAVY_R_D_LIGHT_CHAR[] = {0xe2, 0x95, 0x83, '\0'}; /* U+2543 ╃ */
const char R_U_HEAVY_L_D_LIGHT_CHAR[] = {0xe2, 0x95, 0x84, '\0'}; /* U+2544 ╄ */
const char L_D_HEAVY_R_U_LIGHT_CHAR[] = {0xe2, 0x95, 0x85, '\0'}; /* U+2545 ╅ */
const char R_D_HEAVY_L_U_LIGHT_CHAR[] = {0xe2, 0x95, 0x86, '\0'}; /* U+2546 ╆ */
const char D_LIGHT_U_H_HEAVY_CHAR[] = {0xe2, 0x95, 0x87, '\0'}; /* U+2547 ╇ */
const char U_LIGHT_D_H_HEAVY_CHAR[] = {0xe2, 0x95, 0x88, '\0'}; /* U+2548 ╈ */
const char R_LIGHT_L_V_HEAVY_CHAR[] = {0xe2, 0x95, 0x89, '\0'}; /* U+2549 ╉ */
const char L_LIGHT_R_V_HEAVY_CHAR[] = {0xe2, 0x95, 0x8a, '\0'}; /* U+254A ╊ */
const char HEAVY_V_H_CHAR[] = {0xe2, 0x95, 0x8b, '\0'}; /* U+254B ╋ */
const char LIGHT_DOUBLE_DASH_H_CHAR[] = {0xe2, 0x95, 0x8c, '\0'}; /* U+254C ╌ */
const char HEAVY_DOUBLE_DASH_H_CHAR[] = {0xe2, 0x95, 0x8d, '\0'}; /* U+254D ╍ */
const char LIGHT_DOUBLE_DASH_V_CHAR[] = {0xe2, 0x95, 0x8e, '\0'}; /* U+254E ╎ */
const char HEAVY_DOUBLE_DASH_V_CHAR[] = {0xe2, 0x95, 0x8f, '\0'}; /* U+254F ╏ */
const char DOUBLE_H_CHAR[] = {0xe2, 0x95, 0x90, '\0'}; /* U+2550 ═ */
const char DOUBLE_V_CHAR[] = {0xe2, 0x95, 0x91, '\0'}; /* U+2551 ║ */
const char D_SINGLE_R_DOUBLE_CHAR[] = {0xe2, 0x95, 0x92, '\0'}; /* U+2552 ╒ */
const char D_DOUBLE_R_SINGLE_CHAR[] = {0xe2, 0x95, 0x93, '\0'}; /* U+2553 ╓ */
const char DOUBLE_D_R_CHAR[] = {0xe2, 0x95, 0x94, '\0'}; /* U+2554 ╔ */
const char D_SINGLE_L_DOUBLE_CHAR[] = {0xe2, 0x95, 0x95, '\0'}; /* U+2555 ╕ */
const char D_DOUBLE_L_SINGLE_CHAR[] = {0xe2, 0x95, 0x96, '\0'}; /* U+2556 ╖ */
const char DOUBLE_D_L_CHAR[] = {0xe2, 0x95, 0x97, '\0'}; /* U+2557 ╗ */
const char U_SINGLE_R_DOUBLE_CHAR[] = {0xe2, 0x95, 0x98, '\0'}; /* U+2558 ╘ */
const char U_DOUBLE_R_SINGLE_CHAR[] = {0xe2, 0x95, 0x99, '\0'}; /* U+2559 ╙ */
const char DOUBLE_U_R_CHAR[] = {0xe2, 0x95, 0x9a, '\0'}; /* U+255A ╚ */
const char U_SINGLE_L_DOUBLE_CHAR[] = {0xe2, 0x95, 0x9b, '\0'}; /* U+255B ╛ */
const char U_DOUBLE_L_SINGLE_CHAR[] = {0xe2, 0x95, 0x9c, '\0'}; /* U+255C ╜ */
const char DOUBLE_U_L_CHAR[] = {0xe2, 0x95, 0x9d, '\0'}; /* U+255D ╝ */
const char V_SINGLE_R_DOUBLE_CHAR[] = {0xe2, 0x95, 0x9e, '\0'}; /* U+255E ╞ */
const char V_DOUBLE_R_SINGLE_CHAR[] = {0xe2, 0x95, 0x9f, '\0'}; /* U+255F ╟ */
const char DOUBLE_V_R_CHAR[] = {0xe2, 0x95, 0xa0, '\0'}; /* U+2560 ╠ */
const char V_SINGLE_L_DOUBLE_CHAR[] = {0xe2, 0x95, 0xa1, '\0'}; /* U+2561 ╡ */
const char V_DOUBLE_L_SINGLE_CHAR[] = {0xe2, 0x95, 0xa2, '\0'}; /* U+2562 ╢ */
const char DOUBLE_V_L_CHAR[] = {0xe2, 0x95, 0xa3, '\0'}; /* U+2563 ╣ */
const char D_SINGLE_H_DOUBLE_CHAR[] = {0xe2, 0x95, 0xa4, '\0'}; /* U+2564 ╤ */
const char D_DOUBLE_H_SINGLE_CHAR[] = {0xe2, 0x95, 0xa5, '\0'}; /* U+2565 ╥ */
const char DOUBLE_D_H_CHAR[] = {0xe2, 0x95, 0xa6, '\0'}; /* U+2566 ╦ */
const char U_SINGLE_H_DOUBLE_CHAR[] = {0xe2, 0x95, 0xa7, '\0'}; /* U+2567 ╧ */
const char U_DOUBLE_H_SINGLE_CHAR[] = {0xe2, 0x95, 0xa8, '\0'}; /* U+2568 ╨ */
const char DOUBLE_U_H_CHAR[] = {0xe2, 0x95, 0xa9, '\0'}; /* U+2569 ╩ */
const char V_SINGLE_H_DOUBLE_CHAR[] = {0xe2, 0x95, 0xaa, '\0'}; /* U+256A ╪ */
const char V_DOUBLE_H_SINGLE_CHAR[] = {0xe2, 0x95, 0xab, '\0'}; /* U+256B ╫ */
const char DOUBLE_V_H_CHAR[] = {0xe2, 0x95, 0xac, '\0'}; /* U+256C ╬ */
const char LIGHT_ARC_D_R_CHAR[] = {0xe2, 0x95, 0xad, '\0'}; /* U+256D ╭ */
const char LIGHT_ARC_D_L_CHAR[] = {0xe2, 0x95, 0xae, '\0'}; /* U+256E ╮ */
const char LIGHT_ARC_U_L_CHAR[] = {0xe2, 0x95, 0xaf, '\0'}; /* U+256F ╯ */
const char LIGHT_ARC_U_R_CHAR[] = {0xe2, 0x95, 0xb0, '\0'}; /* U+2570 ╰ */
const char LIGHT_DIAGONAL_UPER_R_TO_LOWER_L_CHAR[] = {0xe2, 0x95, 0xb1, '\0'}; /* U+2571 ╱ */
const char LIGHT_DIAGONAL_UPER_L_TO_LOWER_R_CHAR[] = {0xe2, 0x95, 0xb2, '\0'}; /* U+2572 ╲ */
const char LIGHT_DIAGONAL_CROSS_CHAR[] = {0xe2, 0x95, 0xb3, '\0'}; /* U+2573 ╳ */
const char LIGHT_L_CHAR[] = {0xe2, 0x95, 0xb4, '\0'}; /* U+2574 ╴ */
const char LIGHT_U_CHAR[] = {0xe2, 0x95, 0xb5, '\0'}; /* U+2575 ╵ */
const char LIGHT_R_CHAR[] = {0xe2, 0x95, 0xb6, '\0'}; /* U+2576 ╶ */
const char LIGHT_D_CHAR[] = {0xe2, 0x95, 0xb7, '\0'}; /* U+2577 ╷ */
const char HEAVY_L_CHAR[] = {0xe2, 0x95, 0xb8, '\0'}; /* U+2578 ╸ */
const char HEAVY_U_CHAR[] = {0xe2, 0x95, 0xb9, '\0'}; /* U+2579 ╹ */
const char HEAVY_R_CHAR[] = {0xe2, 0x95, 0xba, '\0'}; /* U+257A ╺ */
const char HEAVY_D_CHAR[] = {0xe2, 0x95, 0xbb, '\0'}; /* U+257B ╻ */
const char LIGHT_L_HEAVY_R_CHAR[] = {0xe2, 0x95, 0xbc, '\0'}; /* U+257C ╼ */
const char LIGHT_U_HEAVY_D_CHAR[] = {0xe2, 0x95, 0xbd, '\0'}; /* U+257D ╽ */
const char HEAVY_L_LIGHT_R_CHAR[] = {0xe2, 0x95, 0xbe, '\0'}; /* U+257E ╾ */
const char HEAVY_U_LIGHT_D_CHAR[] = {0xe2, 0x95, 0xbf, '\0'}; /* U+257F ╿ */

