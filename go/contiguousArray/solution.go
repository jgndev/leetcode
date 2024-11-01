package solution

func findMaxLength(nums []int) int {
	// store the length of nums once
	n := len(nums)
	// initialize maxLen and sum to 0s
	maxLen, sum := 0, 0

	// slice length too short, max value is zero
	if n < 2 {
		return 0
	}

	m := make(map[int]int, n)

	for i := 0; i < n; i++ {
		if nums[i] == 0 {
			nums[i] = -1
		}

		sum += nums[i]

		if sum == 0 {
			maxLen = max(maxLen, i+1)
		} else if idx, ok := m[sum]; ok {
			maxLen = max(i-idx, maxLen)
		} else {
			m[sum] = i
		}
	}

	return maxLen
}
