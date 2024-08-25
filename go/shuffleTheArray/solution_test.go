package solution

import (
	"slices"
	"testing"
)

func TestShuffle(t *testing.T) {
	testCases := []struct {
		name  string
		input []int
		n     int
		want  []int
	}{
		{"test case one", []int{2, 5, 1, 3, 4, 7}, 3, []int{2, 3, 5, 4, 1, 7}},
		{"test case two", []int{1, 2, 3, 4, 4, 3, 2, 1}, 4, []int{1, 4, 2, 3, 3, 2, 4, 1}},
		{"test case three", []int{1, 1, 2, 2}, 2, []int{1, 2, 1, 2}},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := shuffle(tc.input, tc.n)

			if !slices.Equal(got, tc.want) {
				t.Errorf("got %v, want %v", got, tc.want)
			}
		})
	}
}
