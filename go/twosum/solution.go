package solution

func twoSum(nums []int, target int) []int {
	n := len(nums)
	complements := make(map[int]int, n)

	for i, num := range nums {
		complement := target - num

		if v, ok := complements[complement]; ok {
			return []int{v, i}
		}

		complements[num] = i

	}

	return []int{-1, -1}
}
