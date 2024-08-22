//
// Created by Jeremy Novak on 8/14/24.
//

#include "solution.h"

std::vector<std::string> Solution::common_chars(std::vector<std::string>& words) {
    // return early if given an empty vector
    if (words.empty()) {
        return {};
    }

    std::array<int, 26> min_freq = {};
    min_freq.fill(INT_MAX);

    for (const std::string &word: words) {
        std::array<int, 26> freq = {};

        for (const char c: word) {
            freq[c - 'a']++;
        }

        for (int i = 0; i < 26; ++i) {
            min_freq[i] = std::min(min_freq[i], freq[i]);
        }
    }

    std::vector<std::string> result;
    for (int i = 0; i < 26; ++i) {
        for (int j = 0; j < min_freq[i]; ++j) {
            result.emplace_back(1, i + 'a');
        }
    }

    return result;
}
