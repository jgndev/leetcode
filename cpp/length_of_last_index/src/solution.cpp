//
// Created by Jeremy Novak on 8/13/24.
//

#include "solution.h"

int Solution::length_of_last_index(std::string s) {
    int count = 0;

    int last_index = static_cast<int>(s.size() - 1);

    // discard all trailing spaces
    while (last_index >= 0 && s[last_index] == ' ') {
        last_index--;
    }

    // iterate throug the last word
    while (last_index >= 0 && s[last_index] != ' ') {
        count++;
        last_index--;
    }

    return count;
}

