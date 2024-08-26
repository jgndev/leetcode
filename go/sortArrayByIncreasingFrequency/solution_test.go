package solution

import (
	"slices"
	"testing"
)

func TestFrequencySort(t *testing.T) {
	testCases := []struct {
		name  string
		input []int
		want  []int
	}{
		{"test case one", []int{1, 1, 2, 2, 2, 3}, []int{3, 1, 1, 2, 2, 2}},
		{"test case two", []int{2, 3, 1, 3, 2}, []int{1, 3, 3, 2, 2}},
		{"test case three", []int{-1, 1, -6, 4, 5, -6, 1, 4, 1}, []int{5, -1, 4, 4, -6, -6, 1, 1, 1}},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := frequencySort(tc.input)

			if !slices.Equal(got, tc.want) {
				t.Errorf("got %v, want %v", got, tc.want)
			}
		})
	}
}
