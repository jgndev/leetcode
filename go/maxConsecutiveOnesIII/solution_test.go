package solution

import "testing"

func TestLongestOnes(t *testing.T) {
	testCases := []struct {
		name string
		nums []int
		k    int
		want int
	}{
		{
			name: "test case one",
			nums: []int{1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0},
			k:    2,
			want: 6,
		},
		{
			name: "test case two",
			nums: []int{0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1},
			k:    3,
			want: 10,
		},
		{
			name: "test case three",
			nums: []int{0, 0, 0, 0, 0},
			k:    2,
			want: 2,
		},
		{
			name: "test case four",
			nums: []int{1, 1, 1, 1, 1},
			k:    0,
			want: 5,
		},
		{
			name: "test case five",
			nums: []int{0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1},
			k:    20,
			want: 19,
		},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := longestOnes(tc.nums, tc.k)

			if got != tc.want {
				t.Errorf("got %d, want %d", got, tc.want)
			}
		})
	}
}
