package solution

import (
	"slices"
	"testing"
)

func TestTwoSum(t *testing.T) {
	testCases := []struct {
		name   string
		nums   []int
		target int
		want   []int
	}{
		{"test case one", []int{2, 7, 11, 15}, 9, []int{0, 1}},
		{"test case two", []int{3, 2, 4}, 6, []int{1, 2}},
		{"test case three", []int{3, 3}, 6, []int{0, 1}},
		{"test case four", []int{2, 7, 4, 1, 8}, 22, []int{-1, -1}},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := twoSum(tc.nums, tc.target)

			if !slices.Equal(got, tc.want) {
				t.Errorf("got %v, want %v", got, tc.want)
			}
		})
	}
}
