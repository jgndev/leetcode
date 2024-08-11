#include "solution.h"

// int Solution::removeDuplicates(std::vector<int>& nums) {
//     if (nums.empty()) {
//        return 0;
//     }
//
//     // initialize a pointer k for where the next element
//     // could be placed in the sorted array
//     int k = 1;
//
//     // iterate through the array from the first element
//     // that could be a duplicate to the end
//     for (int i = 1; i < nums.size(); i++) {
//         // if the element in position i is different from the
//         // element in position i - 1
//         if (nums[i] != nums[i - 1]) {
//             // place the value at i into position k
//             nums[k] = nums[i];
//             // increment k
//             k++;
//         }
//     }
//
//     return k;
// }

int Solution::removeDuplicates(std::vector<int> &nums) {
    if (nums.empty()) {
        return 0;
    }

    int writeIndex = 1;

    for (int readIndex = writeIndex; readIndex < nums.size(); readIndex++) {
        if (nums[readIndex] != nums[writeIndex - 1]) {
           if (writeIndex != readIndex) {
               nums[writeIndex] = nums[readIndex];
           }
           writeIndex++;
        }
    }

    return writeIndex;
}
