#ifndef WORDLIST_H
#define WORDLIST_H
#pragma once
#include "game.h"
#include <string>

using namespace std;


void wordlist_init(); 
string wordlist_get_random_word(Language lang, int length);
bool wordlist_is_valid_word(string word, Language lang);

#endif