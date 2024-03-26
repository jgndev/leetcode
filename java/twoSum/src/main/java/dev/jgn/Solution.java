package dev.jgn;

import java.util.HashMap;

public class Solution {

    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> seen = new HashMap<>();

        for (int i = 0; i < nums.length; i++) {
            var diff = target - nums[i];
            var value = nums[i];

            if (seen.containsKey(diff)) {
                return new int[] {seen.get(diff), i};
            }

            seen.put(value, i);
        }

        return new int[] {};
    }

}
