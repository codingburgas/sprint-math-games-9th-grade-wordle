#include "game.h"
#include "wordlist.h"
#include "ui.h"
#include <iostream>
#include <cstdlib>
#include <cctype>
#include <algorithm>

using namespace std;

int game_get_length(Difficulty diff) {
    switch (diff) {
    case EASY: return 4;
    case MEDIUM: return 5;
    case HARD: return 6;
    case EXPERT: return 7;
    default: return 5;
    }
}

string game_generate_target(GameMode mode, Difficulty diff) {
    int length = game_get_length(diff);
    string target = "";

    if (mode == MODE_NUMBERS) {
        for (int i = 0; i < length; i++) {
            target += to_string(rand() % 10);
        }
    }
    else {
        target = wordlist_get_random_word(length);
    }

    return target;
}

bool game_validate_input(string input, GameMode mode, int length) {
    if (input.length() != length) return false;

    if (mode == MODE_NUMBERS) {
        for (char c : input) {
            if (!isdigit(c)) return false;
        }
    }
    else {
        for (char c : input) {
            if (!isalpha(c)) return false;
        }
        if (!wordlist_is_valid_word(input)) return false;
    }

    return true;
}

FeedbackChar* game_check_guess(string guess, string target) {
    int len = guess.length();
    FeedbackChar* feedback = new FeedbackChar[len];
    bool targetUsed[10] = { false };
    bool guessUsed[10] = { false };

    for (int i = 0; i < len; i++) {
        if (guess[i] == target[i]) {
            feedback[i].character = guess[i];
            feedback[i].color = 2;
            targetUsed[i] = true;
            guessUsed[i] = true;
        }
    }

    for (int i = 0; i < len; i++) {
        if (!guessUsed[i]) {
            bool found = false;
            for (int j = 0; j < len; j++) {
                if (!targetUsed[j] && guess[i] == target[j]) {
                    feedback[i].character = guess[i];
                    feedback[i].color = 1;
                    targetUsed[j] = true;
                    found = true;
                    break;
                }
            }
            if (!found) {
                feedback[i].character = guess[i];
                feedback[i].color = 0;
            }
        }
    }

    return feedback;
}

GameResult game_play(GameMode mode, Difficulty diff) {
    GameResult result;
    result.won = false;
    result.attempts = 0;

    int length = game_get_length(diff);
    string target = game_generate_target(mode, diff);
    result.target = target;

    for (int attempt = 0; attempt < MAX_ATTEMPTS; attempt++) {
        ui_clear();
        ui_show_game_header(mode, diff, attempt + 1);

        for (int i = 0; i < attempt; i++) {
            FeedbackChar* feedback = game_check_guess(result.guesses[i], target);
            ui_show_feedback(feedback, length);
            delete[] feedback;
        }

        string guess;
        bool validInput = false;

        while (!validInput) {
            ui_show_input_prompt(length, mode);
            cin >> guess;

            transform(guess.begin(), guess.end(), guess.begin(), ::tolower);

            if (game_validate_input(guess, mode, length)) {
                validInput = true;
            }
            else {
                ui_show_invalid_input();
            }
        }

        result.guesses[attempt] = guess;
        result.attempts = attempt + 1;

        if (guess == target) {
            result.won = true;
            break;
        }
    }

    return result;
}