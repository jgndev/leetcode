//
// Created by Jeremy Novak on 8/12/24.
//

#include "solution.h"

int Solution::array_sign(std::vector<int>& nums) {
    if (nums.empty()) {
        return 0;
    }

    // cache the size of nums instead of calling .size()
    // every iteration
    int n = static_cast<int>(nums.size());
    // store the count of negative numbers seen
    int negative_count = 0;

    for (int i = 0; i < n; ++i) {
        if (nums[i] == 0) {
            // if any number in nums is zero, the result will always be 0
            return 0;
        }

        if (nums[i] < 0) {
            ++negative_count;
        }
    }

    if (negative_count % 2 == 0) {
        // even number of negative numbers will always result in a positive product
        return 1;
    } else {
        // odd number of negative numbers will always result in a negative product
        return -1;
    }
}