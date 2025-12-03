#pragma once
#ifndef GAME_H
#define GAME_H

#include <string>
using namespace std;


enum Language { ENGLISH };
enum GameMode { MODE_NUMBERS, MODE_LETTERS };
enum Difficulty { EASY, MEDIUM, HARD, EXPERT };


const int MAX_ATTEMPTS = 6;


struct GameResult {
    bool won;
    int attempts;
    string target;
    string guesses[MAX_ATTEMPTS];
};

struct FeedbackChar {
    char character;
    int color; // 0=grey, 1=yellow, 2=green
};


GameResult game_play(Language lang, GameMode mode, Difficulty diff);
string game_generate_target(GameMode mode, Difficulty diff, Language lang);
int game_get_length(Difficulty diff);
bool game_validate_input(string input, GameMode mode, int length, Language lang);
FeedbackChar* game_check_guess(string guess, string target);

#endif

