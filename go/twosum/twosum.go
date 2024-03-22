package twosum

func twoSum(nums []int, target int) []int {
	seen := make(map[int]int)

	for index, num := range nums {
		if v, ok := seen[target-num]; ok {
			return []int{v, index}
		}

		seen[num] = index
	}

	return nil
}
