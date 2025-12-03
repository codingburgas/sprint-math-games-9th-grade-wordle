#include <iostream>
#include <cstdlib>
#include "wordlist.h"

using namespace std;

int main() {
    srand(time(0));

    Language lang;
    GameMode mode;
    Difficulty diff;
    bool playAgain = true;

    ui_welcome();

    while (playAgain) {
        
        
        ui_clear();
        ui_show_difficulty_menu(lang);
        int diffChoice;
        cin >> diffChoice;

        switch (diffChoice) {
        case 1: diff = EASY; break;
        case 2: diff = MEDIUM; break;
        case 3: diff = HARD; break;
        case 4: diff = EXPERT; break;
        default: diff = MEDIUM;
        }

       
        GameResult result = game_play(lang, mode, diff);

       
        ui_clear();
        ui_show_result(result, lang);

        
        cout << "\n";
        ui_show_play_again(lang);
        char choice;
        cin >> choice;
        playAgain = (choice == 'y' || choice == 'Y' || choice == 'ä' || choice == 'Ä' || choice == 'j' || choice == 'J');
    }

    ui_goodbye(lang);
    return 0;
}