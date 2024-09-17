package solution

import "testing"

func TestSubarrayProductLessThanK(t *testing.T) {
	testCases := []struct {
		name string
		nums []int
		k    int
		want int
	}{
		{
			name: "test case one",
			nums: []int{10, 5, 2, 6},
			k:    100,
			want: 8,
		},
		{
			name: "test case two",
			nums: []int{1, 2, 3},
			k:    0,
			want: 0,
		},
		{
			name: "test case three",
			nums: []int{10, 9, 10, 4, 3, 8, 3, 3, 6, 2, 10, 10, 9, 3},
			k:    19,
			want: 18,
		},
	}

	for _, tc := range testCases {
		got := numSubarrayProductLessThanK(tc.nums, tc.k)

		if got != tc.want {
			t.Errorf("got %d, want %d", got, tc.want)
		}

	}
}
