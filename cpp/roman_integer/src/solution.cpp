//
// Created by Jeremy Novak on 8/13/24.
//

#include "solution.h"

int Solution::roman_int(std::string s) {
    const int n = static_cast<int>(s.length()) - 1;
    int result = 0;
    int prev = 0;

    // working backwards from right to left through the string
    for (int i = n; i >= 0; --i) {
        int current = 0;

        switch (s[i]) {
            case 'I':
                current = 1;
                break;
            case 'V':
                current = 5;
                break;
            case 'X':
                current = 10;
                break;
            case 'L':
                current = 50;
                break;
            case 'C':
                current = 100;
                break;
            case 'D':
                current = 500;
                break;
            case 'M':
                current = 1000;
                break;
            default: ;
                continue;

        }

        if (current < prev) {
            result -= current;
        } else {
            result += current;
        }

        prev = current;
    }

    return result;
}
