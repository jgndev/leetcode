//
// Created by Jeremy Novak on 8/11/24.
//

#include "solution.h"

std::vector<int> Solution::plus_one(std::vector<int>& digits) {
    // move through the digits from end to start
    for (int i = digits.size() - 1; i >= 0; i--) {
        // set all the nines to zeroes
        if (digits[i] == 9) {
            digits[i] = 0;
        } else {
            // here we have the right-most non-nine
            // increment the value by 1
            digits[i]++;
            // done, return digits
            return digits;
        }
    }

    // all numbers in digits were 9
    // get a new vector with a leading 1
    // and the rest of the elements should be 0
    digits.insert(digits.begin(), 1);
    return digits;
}