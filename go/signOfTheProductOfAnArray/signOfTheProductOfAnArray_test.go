package signOfTheProductOfAnArray

import (
	"testing"
)

func TestArraySign(t *testing.T) {
	testCases := []struct {
		name     string
		input    []int
		expected int
	}{
		{"Example 1", []int{-1, -2, -3, -4, 3, 2, 1}, 1},
		{"Example 2", []int{1, 5, 0, 2, -3}, 0},
		{"Example 3", []int{-1, 1, -1, 1, -1}, -1},
		{"All Positive", []int{1, 2, 3, 4, 5}, 1},
		{"All Negative", []int{-1, -2, -3, -4, -5}, -1},
		{"Single Zero", []int{0}, 0},
		{"Single Positive", []int{42}, 1},
		{"Single Negative", []int{-42}, -1},
		{"Empty Array", []int{}, 0},
		{"Mixed with Zero", []int{-1, 1, 0, 1, -1}, 0},
		{"Alternating Signs Even", []int{1, -1, 1, -1, 1, -1}, -1},
		{"Alternating Signs Odd", []int{1, -1, 1, -1, 1}, 1},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			result := arraySign(tc.input)
			if result != tc.expected {
				t.Errorf("arraySign(%v) = %d; want %d", tc.input, result, tc.expected)
			}
		})
	}
}
