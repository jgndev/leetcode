package solution

func intersection(nums1, nums2 []int) []int {
	numsSet := make(map[int]bool)
	for _, num := range nums1 {
		numsSet[num] = true
	}

	resultSet := make(map[int]bool)
	for _, num := range nums2 {
		if numsSet[num] {
			resultSet[num] = true
		}
	}

	result := make([]int, 0, len(resultSet))
	for num := range resultSet {
		result = append(result, num)
	}

	return result
}
