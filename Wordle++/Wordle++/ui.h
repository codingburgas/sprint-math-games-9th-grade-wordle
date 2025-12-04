#ifndef UI_H
#define UI_H

#include "game.h"
#include <string>

using namespace std;

#define COLOR_RESET "\033[0m"
#define COLOR_RED "\033[31m"
#define COLOR_GREEN "\033[32m"
#define COLOR_YELLOW "\033[33m"
#define COLOR_BLUE "\033[34m"
#define COLOR_GREY "\033[90m"
#define COLOR_BG_GREEN "\033[42m"
#define COLOR_BG_YELLOW "\033[43m"
#define COLOR_BG_GREY "\033[100m"
#define COLOR_BOLD "\033[1m"

void ui_clear();
void ui_show_ascii_logo();
int ui_show_main_menu();
int ui_show_mode_menu();
int ui_show_difficulty_menu();
void ui_show_game_header(GameMode mode, Difficulty diff, int attempt);
void ui_show_input_prompt(int length, GameMode mode);
void ui_show_invalid_input();
void ui_show_feedback(FeedbackChar* feedback, int length);
void ui_show_result(GameResult result);
void ui_show_goodbye();

#endif
