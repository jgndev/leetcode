package solution

import (
	"slices"
	"testing"
)

func TestSortedArray(t *testing.T) {
	testCases := []struct {
		name string
		nums []int
		want []int
	}{
		{
			name: "test case one",
			nums: []int{-4, -1, 0, 3, 10},
			want: []int{0, 1, 9, 16, 100},
		},
		{
			name: "test case two",
			nums: []int{1, 2, 3, 4, 5},
			want: []int{1, 4, 9, 16, 25},
		},
		{
			name: "test case three",
			nums: []int{-7},
			want: []int{49},
		},
	}

	for _, tc := range testCases {
		got := sortedSquares(tc.nums)

		if !slices.Equal(got, tc.want) {
			t.Errorf("got %v, want %v", got, tc.want)
		}
	}
}
