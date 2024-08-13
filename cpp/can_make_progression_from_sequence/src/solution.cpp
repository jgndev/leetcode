//
// Created by Jeremy Novak on 8/12/24.
//

#include "solution.h"

bool Solution::can_make_progression(std::vector<int> &nums) {
     const int n = static_cast<int>(nums.size());

     // no comparisions to do in a vector with 1 element
     if (n < 2) {
          return false;
     }

     // sort nums
     std::sort(nums.begin(), nums.end());

     const int diff = nums[1] - nums[0];

     for (int i = 2; i < n; ++i) {
          if (nums[i] - nums[i - 1] != diff) {
               return false;
          }
     }

     return true;
}

