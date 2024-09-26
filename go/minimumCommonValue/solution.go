package solution

func getCommon(nums1 []int, nums2 []int) int {
	// initialize two pointers, i is for nums1 and j is for nums2
	i, j := 0, 0
	// store the lengths once for nums1 and nums2
	n1 := len(nums1)
	n2 := len(nums2)

	// continue the loop until we reach the end of either array
	for i < n1 && j < n2 {
		// case 1: common element found
		if nums1[i] == nums2[j] {
			// this is guaranteed to be the minimum common value because
			// the arrays are sorted and we're starting from the beginning
			return nums1[i]
			// case 2: the element in nums1 is smaller than the element in nums2
		} else if nums1[i] < nums2[j] {
			// move the nums1 pointer forward
			i++
			// case 3: the element in nums2 is smaller than the element in nums1
		} else {
			// move the nums2 pointer forward
			j++
		}
	}

	// we reached the end of the loop not having found a common element,
	// return -1 per the problem description
	return -1
}
