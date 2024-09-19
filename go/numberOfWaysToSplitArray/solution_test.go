package solution

import "testing"

func TestWaysToSplitArray(t *testing.T) {
	testCases := []struct {
		name string
		nums []int
		want int
	}{
		{
			name: "test case one",
			nums: []int{10, 4, -8, 7},
			want: 2,
		},
		{
			name: "test case two",
			nums: []int{2, 3, 1, 0},
			want: 2,
		},
		{
			name: "test case three",
			nums: []int{1000000000, 1000000000, 1000000000, 1000000000},
			want: 2,
		},
		{
			name: "test case four",
			nums: []int{-1, -2, -3, -4, -5},
			want: 3,
		},
		{
			name: "test case five",
			nums: []int{1, 1},
			want: 1,
		},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := waysToSplitArray(tc.nums)

			if got != tc.want {
				t.Errorf("got %d, want %d", got, tc.want)
			}
		})
	}
}
