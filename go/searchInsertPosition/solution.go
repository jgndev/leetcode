package solution

func searchInsert(nums []int, target int) int {
	lo := 0
	hi := len(nums) - 1

	for lo <= hi {
		mid := lo + (hi-lo)/2

		if nums[mid] == target {
			return mid
		} else if target < nums[mid] {
			// target is on the left side of the array
			hi = mid - 1
		} else {
			// target is on the right side of the array
			lo = mid + 1
		}
	}

	return lo
}
