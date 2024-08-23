//
// Created by Jeremy Novak on 8/14/24.
//

#include "solution.h"

void Solution::merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
    // last element of nums1
    int pm = m - 1;
    // last element of nums2
    int pn = n - 1;
    // last position of merged array
    int pw = m + n  - 1;

    // while pn is greater than zero, looping through nums2
    while (pn >= 0) {
        // if pm is still in bounds for nums1.
        // check if value pointed at by pm is greater than value pointed at by pn.
        // this just means that the value at pm is larger, for example
        // nums 1 = [1, 2, 3, 0, 0, 0]
        // nums 2 = [2, 5, 6]
        // let pm be at index 2, pn be index 0, and pw be at index 3.
        // nums1[2] = 3 (pm), nums2[0] = 2 (pn), so nums1[2] (pm) goes into the open
        // spot at nums1[3] (pw).
        if (pm >= 0 && nums1[pm] > nums2[pn]) {
            // if they are, write pm in position pw
            nums1[pw] = nums1[pm];
            // walk pointers left
            --pw;
            --pm;
        } else {
            // write the value pointed at by pn into the pw position
            nums1[pw] = nums2[pn];
            // walk pointers left
            --pw;
            --pn;
        }
    }
}
