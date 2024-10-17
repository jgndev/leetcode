package solution

import "testing"

func TestSubarraySum(t *testing.T) {
	testCases := []struct {
		name string
		nums []int
		k    int
		want int
	}{
		{
			name: "test case one",
			nums: []int{1, 1, 1},
			k:    2,
			want: 2,
		},
		{
			name: "test case two",
			nums: []int{1, 2, 3},
			k:    3,
			want: 2,
		},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := subarraySum(tc.nums, tc.k)

			if got != tc.want {
				t.Errorf("got %d, want %d", got, tc.want)
			}
		})
	}
}
