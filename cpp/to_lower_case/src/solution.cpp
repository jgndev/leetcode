//
// Created by Jeremy Novak on 8/14/24.
//

#include "solution.h"

std::string Solution::to_lower_case(std::string s) {
    for (char& c : s) {
        c = static_cast<char>(std::tolower(c));
    }

    return s;
}