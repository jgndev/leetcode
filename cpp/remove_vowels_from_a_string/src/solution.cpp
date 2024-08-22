//
// Created by Jeremy Novak on 8/14/24.
//

#include "solution.h"

std::string Solution::remove_vowels(std::string& s) {
    // place vowels in a map
    std::unordered_map<char, char> vowels = {
        {'a', 'a'},
        {'e', 'e'},
        {'i', 'i'},
        {'o', 'o'},
        {'u', 'u'},
    };

    std::string result;

    for (char c : s) {
        // if c is not in the vowels map
        if (!vowels[c]) {
            // append to the std::result string
            result += c;
        }
    }

    return result;
}
