#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>

using namespace std;

const int Word_Length = 5;
const int Not_Matched = 0;
const int Partial_Matched = 1;
const int Matched = 2;
const int Number_of_guessed = 6;

void toUpperCase(string& input) {
    transform(input.begin(), input.end(), input.begin(),
        [](unsigned char c) { return toupper(c); });
}

bool isValidWord(const string& word) {
    if ((int)word.length() != Word_Length) return false;
    for (char c : word) {
        if (c < 'A' || c > 'Z') return false;
    }
    return true;
}

string getRandomWord() {
   
    return "READY";
}

int main() {
    vector<string> guesses(Number_of_guessed);
    vector<vector<int>> matches(Number_of_guessed);

    string targetWord = getRandomWord();

    int currentTry = 0;
    string input;

    while (currentTry < Number_of_guessed) {

        do {
            cout << "Please enter your guess (word length must be "
                << Word_Length << ") or type Q to quit: ";

            getline(cin, input);
            toUpperCase(input);

        } while (input != "Q" && !isValidWord(input));

        if (input == "Q") {
            cout << "Quit game" << endl;
            break;
        }

        guesses[currentTry] = input;
        currentTry++;

        
    }
}
