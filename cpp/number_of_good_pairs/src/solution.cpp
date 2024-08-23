//
// Created by Jeremy Novak on 8/14/24.
//

#include "solution.h"

#include <unordered_map>

int Solution::number_of_good_pairs(std::vector<int>& nums) {
    std::unordered_map<int, int> counts;

    int result = 0;

    // {1,2,3,1,1,3}

    for (int num : nums) {
        result += counts[num];
        counts[num]++;
    }

    return result;
}
