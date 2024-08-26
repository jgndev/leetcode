package solution

import "sort"

func frequencySort(nums []int) []int {
	freqs := make(map[int]int)

	for _, num := range nums {
		freqs[num]++
	}

	sort.Slice(nums, func(i, j int) bool {
		if freqs[nums[i]] == freqs[nums[j]] {
			return nums[i] > nums[j]
		}

		return freqs[nums[i]] < freqs[nums[j]]
	})

	return nums
}
