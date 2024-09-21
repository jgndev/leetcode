package solution

import (
	"slices"
	"testing"
)

func TestGetAverages(t *testing.T) {
	testCases := []struct {
		name string
		nums []int
		k    int
		want []int
	}{
		{
			name: "test case one",
			nums: []int{1, 3, 2, 6, 2},
			k:    1,
			want: []int{-1, 2, 3, 3, -1},
		},
		{
			name: "test case two",
			nums: []int{7, 4, 3, 9, 1, 8, 5, 2, 6},
			k:    3,
			want: []int{-1, -1, -1, 5, 4, 4, -1, -1, -1},
		},
		{
			name: "test case three",
			nums: []int{5, 2, 8, 1, 9},
			k:    0,
			want: []int{5, 2, 8, 1, 9},
		},
		{
			name: "test case four",
			nums: []int{1, 2, 3, 4, 5},
			k:    3,
			want: []int{-1, -1, -1, -1, -1},
		},
		{
			name: "test case five",
			nums: []int{100000, 200000, 300000, 400000, 500000},
			k:    1,
			want: []int{-1, 200000, 300000, 400000, -1},
		},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := getAverages(tc.nums, tc.k)

			if !slices.Equal(got, tc.want) {
				t.Errorf("got %v, want %v", got, tc.want)
			}
		})
	}
}
