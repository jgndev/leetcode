package solution

func missingNumber(nums []int) int {
	n := len(nums)
	numMap := make(map[int]bool, n+1)

	for _, num := range nums {
		numMap[num] = true
	}

	expectedCount := n + 1

	for i := 0; i < expectedCount; i++ {
		if _, ok := numMap[i]; !ok {
			return i
		}
	}

	return -1
}
