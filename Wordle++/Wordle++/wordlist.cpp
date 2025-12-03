#include "wordlist.h"
#include <cstdlib>
#include <algorithm>
#include <fstream>
#include <vector>

using namespace std;


vector<string> words_en_4, words_en_5, words_en_6, words_en_7;


bool wordsLoaded = false;


void load_words_from_file(string filename, vector<string>& wordlist, int length) {
    ifstream file(filename);
    if (!file.is_open()) {
        return; 
    }

    string word;
    while (file >> word) {
      
        transform(word.begin(), word.end(), word.begin(), ::tolower);

        
        if (word.length() == length) {
            wordlist.push_back(word);
        }
    }

    file.close();
}


void wordlist_init() {
    if (wordsLoaded) return;

  
    load_words_from_file("words/english_4.txt", words_en_4, 4);
    load_words_from_file("words/english_5.txt", words_en_5, 5);
    load_words_from_file("words/english_6.txt", words_en_6, 6);
    load_words_from_file("words/english_7.txt", words_en_7, 7);

    
    
    if (words_en_4.empty()) {
        words_en_4 = { "home", "love", "time", "word", "life", "hand", "help", "book", "tree", "moon" };
    }
    if (words_en_5.empty()) {
        words_en_5 = { "about", "world", "house", "water", "money", "music", "heart", "table", "dream", "light" };
    }
    if (words_en_6.empty()) {
        words_en_6 = { "friend", "school", "family", "window", "summer", "winter", "spring", "garden", "coffee", "people" };
    }
    if (words_en_7.empty()) {
        words_en_7 = { "machine", "animals", "brother", "kitchen", "weather", "morning", "evening", "picture", "himself", "country" };
    }

   
    wordsLoaded = true;
}

string wordlist_get_random_word(Language lang, int length) {
    
    if (!wordsLoaded) {
        wordlist_init();
    }

    vector<string>* wordlist = nullptr;

    if (lang == ENGLISH) {
        if (length == 4) wordlist = &words_en_4;
        else if (length == 5) wordlist = &words_en_5;
        else if (length == 6) wordlist = &words_en_6;
        else if (length == 7) wordlist = &words_en_7;
    }
   
    

    if (wordlist && !wordlist->empty()) {
        int idx = rand() % wordlist->size();
        return (*wordlist)[idx];
    }

    return "hello";
}

bool wordlist_is_valid_word(string word, Language lang) {
    if (!wordsLoaded) {
        wordlist_init();
    }

    int len = word.length();
    vector<string>* wordlist = nullptr;

    if (lang == ENGLISH) {
        if (len == 4) wordlist = &words_en_4;
        else if (len == 5) wordlist = &words_en_5;
        else if (len == 6) wordlist = &words_en_6;
        else if (len == 7) wordlist = &words_en_7;
    }
    

    if (wordlist) {
        for (const string& w : *wordlist) {
            if (w == word) return true;
        }
    }

    return true; 
}