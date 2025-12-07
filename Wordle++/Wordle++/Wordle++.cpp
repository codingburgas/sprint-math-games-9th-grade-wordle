#include <iostream>
#include <cstdlib>
#include "game.h"
#include "ui.h"
#include "wordlist.h"

using namespace std;

int main() {
    srand(time(0));

    Language lang;
    GameMode mode;
    Difficulty diff;
    bool playAgain = true;


    bool running = true;

    while (running) {
        ui_clear();
        ui_show_ascii_logo();

        int mainChoice = ui_show_main_menu();

        if (mainChoice == 1) {
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

            GameResult result = game_play(lang, mode, diff);

            ui_clear();
            ui_show_result(result);

            std::cout << "\nPress ENTER to continue...";
            std::cin.ignore();
            std::cin.get();

        }
        else if (mainChoice == 2) {
            ui_clear();


        }
        else if (mainChoice == 3) {
            running = false;
            ui_clear();
            ui_show_goodbye();
        }
    }


    while (playAgain) {

        ui_clear();
        std::cout << "Select Language / Избери Език / Sprache wählen:\n";
        std::cout << "1. English\n2. Български\n3. Deutsch\n";
        int langChoice;
        std::cin >> langChoice;

        switch (langChoice) {
        case 1: lang = ENGLISH; break;

        default: lang = ENGLISH;
        }

        ui_clear();
        ui_show_mode_menu();
        int modeChoice;
        std::cin >> modeChoice;
        mode = (modeChoice == 1) ? MODE_NUMBERS : MODE_LETTERS;


        ui_clear();
        ui_show_difficulty_menu();
        int diffChoice;
        std::cin >> diffChoice;

        switch (diffChoice) {
        case 1: diff = EASY; break;
        case 2: diff = MEDIUM; break;
        case 3: diff = HARD; break;
        case 4: diff = EXPERT; break;
        default: diff = MEDIUM;
        }


        GameResult result = game_play(lang, mode, diff);


        ui_clear();
        ui_show_result(result);


        std::cout << "\n";

        char choice;
        std::cin >> choice;
        playAgain = (choice == 'y' || choice == 'Y' || choice == 'д' || choice == 'Д' || choice == 'j' || choice == 'J');
    }


    return 0;