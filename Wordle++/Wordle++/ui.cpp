#include "ui.h"
#include <iostream>

using namespace std;

void ui_clear() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void ui_show_ascii_logo() {
    cout << COLOR_BLUE << COLOR_BOLD;
    cout << "\n";
    cout << "  ██╗    ██╗ ██████╗ ██████╗ ██████╗ ██╗     ███████╗   ██╗    ██╗\n";
    cout << "  ██║    ██║██╔═══██╗██╔══██╗██╔══██╗██║     ██╔════╝ ██████╗ ██████╗\n";
    cout << "  ██║ █╗ ██║██║   ██║██████╔╝██║  ██║██║     █████╗   ╚═██╔═╝ ╚═██╔═╝\n";
    cout << "  ██║███╗██║██║   ██║██╔══██╗██║  ██║██║     ██╔══╝     ╚═╝     ╚═╝\n";
    cout << "  ╚███╔███╔╝╚██████╔╝██║  ██║██████╔╝███████╗███████╗   ██╗     ██╗\n";
    cout << "   ╚══╝╚══╝  ╚═════╝ ╚═╝  ╚═╝╚═════╝ ╚══════╝╚══════╝   ╚═╝     ╚═╝\n";
    cout << COLOR_RESET << "\n";
}

int ui_show_main_menu() {
    cout << COLOR_BOLD << "MAIN MENU" << COLOR_RESET << "\n";
    cout << "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n";
    cout << "1. Play Game\n";
    cout << "2. About Us\n";
    cout << "3. Exit\n\n";
    cout << "Enter your choice: ";

    int choice;
    cin >> choice;
    return choice;
}

int ui_show_mode_menu() {
    cout << COLOR_BOLD << "SELECT GAME MODE" << COLOR_RESET << "\n";
    cout << "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n";
    cout << "1. Number Wordle\n";
    cout << "2. Word Wordle\n\n";
    cout << "Enter your choice: ";

    int choice;
    cin >> choice;
    return choice;
}

int ui_show_difficulty_menu() {
    cout << COLOR_BOLD << "SELECT DIFFICULTY" << COLOR_RESET << "\n";
    cout << "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n";
    cout << "1. Easy (4 digits/letters)\n";
    cout << "2. Medium (5 digits/letters)\n";
    cout << "3. Hard (6 digits/letters)\n";
    cout << "4. Expert (7 digits/letters)\n\n";
    cout << "Enter your choice: ";

    int choice;
    cin >> choice;
    return choice;
}

void ui_show_game_header(GameMode mode, Difficulty diff, int attempt) {
    cout << COLOR_BOLD;
    if (mode == MODE_NUMBERS) {
        cout << "NUMBER WORDLE";
    }
    else {
        cout << "WORD WORDLE";
    }
    cout << " - ";

    switch (diff) {
    case EASY: cout << "EASY"; break;
    case MEDIUM: cout << "MEDIUM"; break;
    case HARD: cout << "HARD"; break;
    case EXPERT: cout << "EXPERT"; break;
    }

    cout << " (Attempt " << attempt << "/" << MAX_ATTEMPTS << ")" << COLOR_RESET << "\n";
    cout << "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n\n";
}

void ui_show_input_prompt(int length, GameMode mode) {
    cout << "\nEnter your guess (" << length;
    if (mode == MODE_NUMBERS) {
        cout << " digits";
    }
    else {
        cout << " letters";
    }
    cout << "): ";
}

void ui_show_invalid_input() {
    cout << COLOR_RED << "Invalid input! Try again." << COLOR_RESET << "\n";
}

void ui_show_feedback(FeedbackChar* feedback, int length) {
    for (int i = 0; i < length; i++) {
        if (feedback[i].color == 2) {
            cout << COLOR_BG_GREEN << " " << (char)toupper(feedback[i].character) << " " << COLOR_RESET;
        }
        else if (feedback[i].color == 1) {
            cout << COLOR_BG_YELLOW << " " << (char)toupper(feedback[i].character) << " " << COLOR_RESET;
        }
        else {
            cout << COLOR_BG_GREY << " " << (char)toupper(feedback[i].character) << " " << COLOR_RESET;
        }
        cout << " ";
    }
    cout << "\n";
}

void ui_show_result(GameResult result) {
    cout << "\n";
    cout << "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n";

    if (result.won) {
        cout << COLOR_GREEN << COLOR_BOLD;
        cout << "🎉 CONGRATULATIONS! YOU WON! 🎉\n";
        cout << "Attempts: " << result.attempts << "/" << MAX_ATTEMPTS;
        cout << COLOR_RESET << "\n";
    }
    else {
        cout << COLOR_RED << COLOR_BOLD;
        cout << "GAME OVER!\n";
        cout << "The answer was: " << COLOR_BLUE << result.target;
        cout << COLOR_RESET << "\n";
    }

    cout << "\nYour guesses:\n";
    for (int i = 0; i < result.attempts; i++) {
        FeedbackChar* feedback = game_check_guess(result.guesses[i], result.target);
        ui_show_feedback(feedback, result.target.length());
        delete[] feedback;
    }

    cout << "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n";
}

void ui_show_goodbye() {
    cout << COLOR_BLUE << COLOR_BOLD;
    cout << "\n";
    cout << "  ████████╗██╗  ██╗ █████╗ ███╗   ██╗██╗  ██╗███████╗\n";
    cout << "  ╚══██╔══╝██║  ██║██╔══██╗████╗  ██║██║ ██╔╝██╔════╝\n";
    cout << "     ██║   ███████║███████║██╔██╗ ██║█████╔╝ ███████╗\n";
    cout << "     ██║   ██╔══██║██╔══██║██║╚██╗██║██╔═██╗ ╚════██║\n";
    cout << "     ██║   ██║  ██║██║  ██║██║ ╚████║██║  ██╗███████║\n";
    cout << "     ╚═╝   ╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═══╝╚═╝  ╚═╝╚══════╝\n";
    cout << "\n";
    cout << "         Thanks for playing Wordle++!\n\n";
    cout << COLOR_RESET;
}