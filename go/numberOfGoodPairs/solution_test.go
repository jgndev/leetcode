package solution

import "testing"

func TestNumIdenticalPairs(t *testing.T) {
	testCases := []struct {
		name string
		nums []int
		want int
	}{
		{"test case one", []int{1, 2, 3, 1, 1, 3}, 4},
		{"test case two", []int{1, 1, 1, 1}, 6},
		{"test case three", []int{1, 2, 3}, 0},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := numIdenticalPairs(tc.nums)

			if got != tc.want {
				t.Errorf("got %d, want %d", got, tc.want)
			}
		})
	}
}
