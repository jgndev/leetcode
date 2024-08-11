package moveZeroes

import (
	"slices"
	"testing"
)

func TestMoveZeroes(t *testing.T) {
	testCases := []struct {
		name string
		nums []int
		want []int
	}{
		{"test case one", []int{0, 1, 0, 3, 12}, []int{1, 3, 12, 0, 0}},
		{"test case two", []int{0}, []int{0}},
		{"test case three", []int{0, 1, 5, 0, 7, 0, 0, 11}, []int{1, 5, 7, 11, 0, 0, 0, 0}},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			moveZeroes(tc.nums)

			if !slices.Equal(tc.want, tc.nums) {
				t.Errorf("want: %v, got: %v", tc.nums, tc.want)
			}
		})
	}
}
