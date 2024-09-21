package solution

func getAverages(nums []int, k int) []int {
	//if k == 0 {
	//	return nums
	//}
	//
	//windowSize := 2*k + 1
	//n := len(nums)
	//averages := make([]int, n)
	//
	//for i := range averages {
	//	averages[i] = -1
	//}
	//
	//if windowSize > n {
	//	return averages
	//}
	//
	//var windowSum int64 = 0
	//
	//for i := 0; i < windowSize; i++ {
	//	windowSum += int64(nums[i])
	//}
	//
	//averages[k] = int(windowSum / int64(windowSize))
	//
	//for i := windowSize; i < n; i++ {
	//	windowSum = windowSum - int64(nums[i-windowSize]) + int64(nums[i])
	//	averages[i-k] = int(windowSum / int64(windowSize))
	//}
	//
	//return averages

	if k == 0 {
		return nums
	}
	res := make([]int, len(nums))

	left, right, sum, division := 0, 0, 0, 2*k+1

	for ; right < len(nums); right++ {
		sum += nums[right]

		if (right - left + 1) < division {
			res[right] = -1
		} else {
			// shrink window
			res[(left+right)/2] = sum / division
			res[right] = -1
			sum -= nums[left]
			left++
		}
	}

	return res
}
