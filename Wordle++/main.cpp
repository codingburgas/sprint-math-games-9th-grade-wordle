#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 const int Word_Length = 5;
 const int Not_Matched = 0;
 const int Parital_Matched = 1;
 const int Matched = 2;
 const int Number_of_guessed = 6;
 void toUpperCase(string&input){
    transform(input.begin(), input.end(), input.begin(), [](unsigned char c ){return toupper(c); }); 
 }
 string getRandomWord(){
    return"ready";

    bool isValidWord(string word){
        return word.legnth() == Word_Length && word.find_first_not_of(Ptr: "ABCDEFGHIJKLMNOPQRSTUVWXYZ") == string::npos;
    }
 }
int main(){
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