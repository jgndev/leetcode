package solution

func largestUniqueNumber(nums []int) int {
	n := len(nums)
	seen := make(map[int]int, n)

	for _, num := range nums {
		seen[num]++
	}

	largest := -1

	for k, v := range seen {
		if k > largest && v == 1 {
			largest = k
		}
	}

	return largest
}
