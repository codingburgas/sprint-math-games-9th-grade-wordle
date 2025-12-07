#pragma once

#ifndef WORDLIST_H
#define WORDLIST_H

#include <string>
using namespace std;

string wordlist_get_random_word(int length);
bool wordlist_is_valid_word(const string& word);

#endif