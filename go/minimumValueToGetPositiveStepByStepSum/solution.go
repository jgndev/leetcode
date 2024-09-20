package solution

func minStartValue(nums []int) int {
	// Edge case where the nums slice is empty.
	if len(nums) == 0 {
		// Minimum start value is 1.
		return 1
	}

	// Track the minimum prefix and current sum.
	minPrefixSum := 0
	currentSum := 0

	// Iterate through the slice at least once.
	for _, num := range nums {
		currentSum += num

		if currentSum < minPrefixSum {
			minPrefixSum = currentSum
		}
	}

	// The minimum start value is the opposite of the prefix + 1.
	// This ensures the smallest sum encountered is at least 1.
	return -minPrefixSum + 1
}
