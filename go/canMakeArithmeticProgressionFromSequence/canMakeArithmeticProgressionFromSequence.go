package canMakeArithmeticProgressionFromSequence

import "sort"

func canMakeArithmeticProgression(arr []int) bool {
	if len(arr) < 2 {
		return false
	}

	sort.Ints(arr)

	diff := arr[1] - arr[0]
	n := len(arr)

	for i := 2; i < n; i++ {
		if arr[i]-arr[i-1] != diff {
			return false
		}
	}

	return true
}
