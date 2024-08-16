package solution

import (
	"slices"
	"testing"
)

func TestSolution(t *testing.T) {
	testCases := []struct {
		name  string
		input []int
		want  []int
	}{
		{"test case one", []int{1, 2, 1}, []int{1, 2, 1, 1, 2, 1}},
		{"test case two", []int{1, 3, 2, 1}, []int{1, 3, 2, 1, 1, 3, 2, 1}},
		{"test case three", []int{4, 5, 5, 2}, []int{4, 5, 5, 2, 4, 5, 5, 2}},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := getConcatenation(tc.input)

			if !slices.Equal(got, tc.want) {
				t.Errorf("got %v, want %v", got, tc.want)
			}
		})
	}
}
