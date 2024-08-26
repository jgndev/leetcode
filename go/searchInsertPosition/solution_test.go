package solution

import "testing"

func TestSearchInsertPosition(t *testing.T) {
	testCases := []struct {
		name   string
		input  []int
		target int
		want   int
	}{
		{"test case one", []int{1, 3, 5, 6}, 5, 2},
		{"test case two", []int{1, 3, 5, 6}, 2, 1},
		{"test case three", []int{1, 3, 5, 6}, 7, 4},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := searchInsert(tc.input, tc.target)

			if got != tc.want {
				t.Errorf("got %d, want %d", got, tc.want)
			}
		})
	}
}
