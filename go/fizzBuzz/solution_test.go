package solution

import (
	"slices"
	"testing"
)

func TestFizzBuzz(t *testing.T) {
	testCases := []struct {
		name  string
		input int
		want  []string
	}{
		{"test case one", 3, []string{"1", "2", "Fizz"}},
		{"test case two", 5, []string{"1", "2", "Fizz", "4", "Buzz"}},
		{"test case three", 15, []string{"1", "2", "Fizz", "4", "Buzz", "Fizz", "7", "8", "Fizz", "Buzz", "11", "Fizz", "13", "14", "FizzBuzz"}},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := fizzBuzz(tc.input)

			if !slices.Equal(got, tc.want) {
				t.Errorf("got %v, want %v", got, tc.want)
			}
		})
	}
}
