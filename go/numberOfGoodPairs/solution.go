package solution

func numIdenticalPairs(nums []int) int {
	counts := make(map[int]int)

	result := 0

	for _, num := range nums {
		if n, ok := counts[num]; ok {
			result += n
		}

		counts[num]++
	}

	return result
}
