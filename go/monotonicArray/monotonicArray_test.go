package monotonicArray

import "testing"

func TestIsMonotonic(t *testing.T) {
	testCases := []struct {
		name string
		nums []int
		want bool
	}{
		{"test case one", []int{1, 2, 3, 4}, true},
		{"test case two", []int{4, 3, 2, 1}, true},
		{"test case three", []int{5, 6, 4, 7, 1}, false},
		{"test case four", []int{4, 1, 3, 2}, false},
		{"test case five", []int{9, 8, 7, 6, 5, 4, 3, 2, 1}, true},
		{"test case six", []int{9, 7, 8, 5, 6, 3, 4, 1, 2}, false},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := isMonotonic(tc.nums)

			if got != tc.want {
				t.Errorf("got %v, want %v", got, tc.want)
			}
		})
	}
}
