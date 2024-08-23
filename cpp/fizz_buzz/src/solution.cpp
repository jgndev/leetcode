//
// Created by Jeremy Novak on 8/14/24.
//

#include "solution.h"

std::vector<std::string> Solution::fizz_buzz(int n) {
    std::vector<std::string> result;
    result.reserve(n);

    for (int i = 1; i <= n; ++i) {
        if (i % 5 == 0 && i % 3 == 0) {
            result.emplace_back("FizzBuzz");
        } else if (i % 5 == 0) {
            result.emplace_back("Buzz");
        } else if (i % 3 == 0) {
            result.emplace_back("Fizz");
        } else {
            result.emplace_back(std::to_string(i));
        }
    }

    return result;
}
