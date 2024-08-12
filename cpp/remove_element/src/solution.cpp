//
// Created by Jeremy Novak on 8/12/24.
//

#include "solution.h"

int Solution::remove_element(std::vector<int>& nums, int val) {
    // C++ optimized two pointer solution
    if (nums.empty()) {
        return 0;
    }

    int writer = 0;
    // cache size to avoid repeated calls to nums.size()
    // use static_cast instead of "c-style" cast
    const int size = static_cast<int>(nums.size());

    // use pre-increment operator for slightly better perf
    // than post-increment operator
    for (int reader = 0; reader < size; ++reader) {
        if (nums[reader] != val) {
            nums[writer] = nums[reader];
            ++writer;
        }
    }

    return writer;
}
