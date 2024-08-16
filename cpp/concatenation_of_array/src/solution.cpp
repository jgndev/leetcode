#include "solution.h"

std::vector<int> Solution::get_concatenation(std::vector<int>& nums) {
    // get a constant int to the size of nums
    const int n = static_cast<int>(nums.size());
    // double the size of nums
    nums.reserve(2 * n);

    nums.insert(nums.end(), nums.begin(), nums.begin() + nums.size());

    return nums;
}