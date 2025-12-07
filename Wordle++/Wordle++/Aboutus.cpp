
#include "ui.h"
#include <iostream>
#include <Windows.h>

using namespace std;

#define AQUA 3
#define WHITE 7

void setColor(int color)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

void aboutUs()
{
    setColor(AQUA);
    cout << "\n";
    cout << "                         ================================================================                         \n";
    cout << "                        ||                            ABOUT US                           ||\n";
    cout << "                        ||                                                               ||\n";
    cout << "                        ||                        We are Wordle++                        ||\n";
    cout << "                        ||                                                               ||\n";
    cout << "                        ||               A small team passionate about C++               ||\n";
    cout << "                        ||                    and game development.                      ||\n";
    cout << "                        ||                                                               ||\n";
    cout << "                        ||                        Our Projects:                          ||\n";
    cout << "                        ||                 1. Number Wordle (5-digit puzzle)             ||\n";
    cout << "                        ||                 2. Classic Wordle (5-letter puzzle)           ||\n";
    cout << "                        ||                                                               ||\n";
    cout << "                        ||                  Thank you for playing with us!               ||\n";
    cout << "                         ================================================================                         \n\n";
    setColor(WHITE);
    cout << " Press ENTER to go back to the main menu...";
    cin.ignore();
    cin.get();
}