// Created by Jeremy Novak on 8/11/24.
//

#include "solution.h"

void Solution::move_zeroes(std::vector<int>& nums) {
    // writer pointer moves to where non-zero values are written
    int writer = 0;

    // iterate through the array moving reader to non-zero positions
    for (int reader = 0; reader < nums.size(); reader++) {
        if (nums[reader] != 0) {
            // write the value pointed to at reader ito the position
            // pointed to by writer
            nums[writer] = nums[reader];
            // increment writer
            writer++;
        }
    }

    // reader has now reached the end of nums
    // fill in the remaining values with zeroes
    while (writer < nums.size()) {
        nums[writer] = 0;
        writer++;
    }
}
