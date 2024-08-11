package removeDuplicatesFromSortedArray

import "testing"

func TestRemoveDuplicatesFromSortedArray(t *testing.T) {
	testCases := []struct {
		name string
		nums []int
		want int
	}{
		{"test case one", []int{1, 1, 2}, 2},
		{"test case two", []int{0, 0, 1, 1, 1, 2, 2, 3, 3, 4}, 5},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := removeDuplicatesFromSortedArray(tc.nums)

			if got != tc.want {
				t.Errorf("got %d, want %d", got, tc.want)
			}
		})
	}
}
