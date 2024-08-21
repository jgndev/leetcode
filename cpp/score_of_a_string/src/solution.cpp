//
// Created by Jeremy Novak on 8/14/24.
//

#include "solution.h"

int Solution::score_of_string(const std::string& s) {
    int score = 0;

    for (size_t i = 0; i < s.length() - 1; ++i) {
        score += std::abs(s[i] - s[i + 1]);
    }


    return score;
}
