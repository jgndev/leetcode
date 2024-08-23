package solution

func merge(nums1, nums2 []int, m, n int) {
	// last position of nums1
	pm := m - 1
	// last position of nums2
	pn := n - 1
	// last position of the merged array
	pw := m + n - 1

	for pn >= 0 {
		if pm >= 0 && nums1[pm] > nums2[pn] {
			nums1[pw] = nums1[pm]
			pw--
			pm--
		} else {
			nums1[pw] = nums2[pn]
			pw--
			pn--
		}
	}
}
