#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>
using namespace std;
const int Word_Length = 5;
const int Not_Matched = 0;
const int Parital_Matched = 1;
const int Matched = 2;
const int Number_of_guessed = 6;
void toUpperCase(string& input) {
    transform(input.begin(), input.end(), input.begin(), [](unsigned char c) { return toupper(c); });
}
string getRandomWord() {
    return"ready";

    bool isValidWord(const string & word) {
        if ((int)word.length() != Word_Length) return false;
        for (char c : word) {
            if (c < 'A' || c > 'Z') return false;
        }
        return true;
    }
    string getRandomWord() {
    ifstream file("words.txt");
    vector<string> words;
    string line;

    while (getline(file, line)) {
        toUpperCase(line);
        if (isValidWord(line))
            words.push_back(line);
    }

    if (words.empty()) {
        cout << "Error: word list is empty!" << endl;
        return "READY";
    }

    srand(time(nullptr));
    int index = rand() % words.size();
    return words[index];
}
}
int main() {
    vector<string> guesses(Number_of_guessed);
    vector<vector<int>> matches(Number_of_guessed);
    string targetWord = getRandomWord();
    int currentguesscount = 0;
    string input;
    int currentTry = 0;
    while (currentTry < Number_of_guessed)
    {
        do
        {
            cout << "Please enter your guess (word length must be " + to_string(Word_Length) + ") or type Q to quit: ";
            getline(cin, input);
            toUpperCase(input);
        } while (input != "Q" && !isValid(input));
        if (input == "Q")
        {
            cout << "Quit game" << endl;
            break;
        }
        tries[currentTry] = input;
        currentTry++;
    }
}