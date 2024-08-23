//
// Created by Jeremy Novak on 8/14/24.
//

#include "solution.h"

bool check_palindrome(std::string s, int left, int right) {
    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

bool Solution::valid_palindrome(std::string s) {
    int left = 0;
    int right = static_cast<int>(s.length() - 1);

    while (left < right) {
        if (s[left] != s[right]) {
            // found a mismatch
            // try without the rightmost character,
            // then try without the leftmost character
            return (check_palindrome(s, left, right - 1) ||
                check_palindrome(s, left + 1, right));
        }

        left++;
        right--;
    }

    return true;
}
