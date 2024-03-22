package twosum

import (
	"slices"
	"testing"
)

func TestTwoSum(t *testing.T) {
	testCases := []struct {
		name     string
		numbers  []int
		target   int
		expected []int
	}{
		{"test case one", []int{2, 7, 11, 15}, 9, []int{0, 1}},
		{"test case two", []int{3, 2, 4}, 6, []int{1, 2}},
		{"test case three", []int{3, 3}, 6, []int{0, 1}},
		{"test case four", []int{1, 2, 3, 4, 5}, 9, []int{3, 4}},
		{"test case five", []int{100, 200, 300, 400, 500}, 700, []int{2, 3}},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := twoSum(tc.numbers, tc.target)
			if !slices.Equal(got, tc.expected) {
				t.Errorf("got %v, want %v", got, tc.expected)
			}
		})
	}
}
