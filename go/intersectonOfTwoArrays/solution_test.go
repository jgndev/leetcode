package solution

import (
	"testing"
)

// compareUnordered is a helper function for comparing slices that are acceptable
// with elements in any order as long as they have the same values.
func compareUnordered(slice1, slice2 []int) bool {
	if len(slice1) != len(slice2) {
		return false
	}

	// two maps to count occurrences of each
	count1 := make(map[int]int)
	count2 := make(map[int]int)

	for _, num := range slice1 {
		count1[num]++
	}

	for _, num := range slice2 {
		count2[num]++
	}

	// compare the maps
	for num, count := range count1 {
		if count2[num] != count {
			return false
		}
	}

	return true
}

func TestInsersection(t *testing.T) {
	testCases := []struct {
		name  string
		nums1 []int
		nums2 []int
		want  []int
	}{
		{"test case one", []int{1, 2, 2, 1}, []int{2, 2}, []int{2}},
		{"test case two", []int{4, 9, 5}, []int{9, 4, 9, 8, 4}, []int{4, 9}},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := intersection(tc.nums1, tc.nums2)

			accepted := compareUnordered(got, tc.want)

			if !accepted {
				t.Errorf("got %v, want %v", got, tc.want)
			}
		})
	}
}
