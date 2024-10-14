package solution

import (
	"slices"
	"testing"
)

func TestIntersection(t *testing.T) {
	testCases := []struct {
		name string
		nums [][]int
		want []int
	}{
		{
			name: "test case one",
			nums: [][]int{{3, 1, 2, 4, 5}, {1, 2, 3, 4}, {3, 4, 5, 6}},
			want: []int{3, 4},
		},
		{
			name: "test case two",
			nums: [][]int{{1, 2, 3}, {4, 5, 6}},
			want: []int{},
		},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := intersection(tc.nums)

			if !slices.Equal(got, tc.want) {
				t.Errorf("got %v, want %v", got, tc.want)
			}
		})
	}
}
