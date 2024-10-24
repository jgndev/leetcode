package solution

import "testing"

func TestLargestUniqueNumber(t *testing.T) {
	testCases := []struct {
		name string
		nums []int
		want int
	}{
		{
			name: "test case one",
			nums: []int{5, 7, 3, 9, 4, 9, 8, 3, 1},
			want: 8,
		},
		{
			name: "test case two",
			nums: []int{9, 9, 8, 8},
			want: -1,
		},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := largestUniqueNumber(tc.nums)

			if got != tc.want {
				t.Errorf("got %d, want %d", got, tc.want)
			}
		})
	}
}
