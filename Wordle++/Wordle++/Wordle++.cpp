#include <iostream>
#include <cstdlib>
#include <ctime>
#include "game.h"      
#include "ui.h"
#include "wordlist.h"
#include "Functions.h"

using namespace std;

int main() {
    srand(time(0));

    bool running = true;

    while (running) {
        ui_clear();
        ui_show_ascii_logo();

        int mainChoice = ui_show_main_menu();

        if (mainChoice == 1) {
            // Play Game
            ui_clear();
            int modeChoice = ui_show_mode_menu();
            GameMode mode;

            if (modeChoice == 1) {
                mode = MODE_NUMBERS;
            }
            else if (modeChoice == 2) {
                mode = MODE_LETTERS;
            }
            else {
                continue;
            }

            ui_clear();
            int diffChoice = ui_show_difficulty_menu();
            Difficulty diff;

            switch (diffChoice) {
            case 1: diff = EASY; break;
            case 2: diff = MEDIUM; break;
            case 3: diff = HARD; break;
            case 4: diff = EXPERT; break;
            default: continue;
            }

            // Play the game
            GameResult result = game_play(mode, diff);

            // Show results
            ui_clear();
            ui_show_result(result);

            cout << "\nPress ENTER to continue...";
            cin.ignore();
            cin.get();
        }
        else if (mainChoice == 2) {
            // About Us
            ui_clear();
            aboutUs();
        }
        else if (mainChoice == 3) {
            // Exit
            running = false;
            ui_clear();
            ui_show_goodbye();
        }
    }

    return 0;
}