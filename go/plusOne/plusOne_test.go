package plusOne

import (
	"slices"
	"testing"
)

func TestPlusOne(t *testing.T) {
	testCases := []struct {
		name   string
		digits []int
		want   []int
	}{
		{"test case one", []int{1, 2, 3}, []int{1, 2, 4}},
		{"test case two", []int{4, 3, 2, 1}, []int{4, 3, 2, 2}},
		{"test case three", []int{9}, []int{1, 0}},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := plusOne(tc.digits)

			if !slices.Equal(got, tc.want) {
				t.Errorf("got %v, want %v", got, tc.want)
			}
		})
	}
}
