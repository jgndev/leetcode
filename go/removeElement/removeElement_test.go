package removeElement

import "testing"

func TestRemoveElement(t *testing.T) {
	testCases := []struct {
		name string
		nums []int
		val  int
		want int
	}{
		{"test case one", []int{3, 2, 2, 3}, 3, 2},
		{"test case two", []int{0, 1, 2, 2, 3, 0, 4, 2}, 2, 5},
		{"test cae three", []int{}, 1, 0},
		{"test case four", []int{1, 1, 1}, 1, 0},
		{"test case five", []int{1, 2, 3, 4, 3}, 6, 5},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := removeElement(tc.nums, tc.val)

			if got != tc.want {
				t.Errorf("got %d, want %d", got, tc.want)
			}
		})
	}
}
