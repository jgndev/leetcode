#include "solution.h"

std::vector<int> Solution::two_sum(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> complements;
    const int n = static_cast<int>(nums.size());

    for (int i = 0; i < n; ++i) {
        const int num = nums[i];
        const int complement = target - num;

        if (complements.find(complement) != complements.end()) {
           return { complements[complement], i };
        }

        complements[num] = i;
    }

    return { -1, -1 };
}