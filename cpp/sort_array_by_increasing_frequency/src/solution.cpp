#include "solution.h"

vector<int> Solution::frequency_sort(vector<int>& nums) {
    unordered_map<int, int> freqs;

    for (int num : nums) {
        freqs[num]++;
    }

    sort(nums.begin(), nums.end(), [&](int a, int b) {
        if (freqs[a] == freqs[b]) {
            return a > b;
        }

        return freqs[a] < freqs[b];
    });

    return nums;
}