package twosum

func twoSum(nums []int, target int) []int {
	seen := make(map[int]int)

	for index, num := range nums {
		if v, ok := seen[target-num]; ok {
			return []int{v, index}
		}

		seen[num] = index
	}

	// for i := 0; i < len(nums); i++ {
	// 	diff := target - nums[i]
	// 	num := nums[i]
	//
	// 	if j, ok := seen[diff]; ok {
	// 		return []int{j, i}
	// 	}
	//
	// 	seen[num] = i
	// }

	return nil
}
