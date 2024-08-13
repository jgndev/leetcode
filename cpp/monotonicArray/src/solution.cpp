//
// Created by Jeremy Novak on 8/13/24.
//

#include "solution.h"

bool Solution::is_monotonic(std::vector<int> &nums) {
    const int n = static_cast<int>(nums.size());

    bool increasing = true;
    bool decreasing = true;

    for (int i = 1; i < n; ++i) {
        if (nums[i] > nums[i - 1]) {
            decreasing = false;
        }

        if (nums[i] < nums[i - 1]) {
            increasing = false;
        }

        if (!increasing && !decreasing) {
            return false;
        }
    }

    return true;
}
