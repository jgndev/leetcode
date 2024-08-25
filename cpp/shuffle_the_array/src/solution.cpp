#include "solution.h"

std::vector<int> Solution::shuffle(std::vector<int>&nums, int n) {
    // get a new vector with 2 * n capacity
    std::vector<int> result(2 * n);

    // - loop going up to n exclusive.
    // - we are essentially "weaving" the elements
    // from nums placing one from the "x" side and
    // then one from the "y" side one after another.
    for (int i = 0; i < n; ++i) {
        // place element from the x side.
        result[2 * i] = nums[i];
        // place element from the y side.
        result[2 * i + 1] = nums[n + i];
    }

    return result;
}