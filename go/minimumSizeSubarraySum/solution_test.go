package solution

import "testing"

func TestMinSubarrayLen(t *testing.T) {
	testCases := []struct {
		name   string
		nums   []int
		target int
		want   int
	}{
		{
			name:   "test case one",
			nums:   []int{2, 3, 1, 2, 4, 3},
			target: 7,
			want:   2,
		},
		{
			name:   "test case two",
			nums:   []int{1, 4, 3},
			target: 4,
			want:   1,
		},
		{
			name:   "test case three",
			nums:   []int{1, 1, 1, 1, 1, 1, 1, 1},
			target: 11,
			want:   0,
		},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := minSubarrayLen(tc.target, tc.nums)

			if got != tc.want {
				t.Errorf("got %d, want %d", got, tc.want)
			}
		})
	}
}
