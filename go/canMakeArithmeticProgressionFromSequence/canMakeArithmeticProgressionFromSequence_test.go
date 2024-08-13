package canMakeArithmeticProgressionFromSequence

import "testing"

func TestCanMakeArithmeticProgression(t *testing.T) {
	testCases := []struct {
		name  string
		input []int
		want  bool
	}{
		{"test case one", []int{3, 5, 1}, true},
		{"test case two", []int{1, 2, 4}, false},
		{"test case three", []int{1, 2}, true},
		{"test case four", []int{1, 3, 4, 6}, false},
		{"test case five", []int{1, 5, 3, 7}, true},
		{"test case six", []int{1}, false},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := canMakeArithmeticProgression(tc.input)

			if got != tc.want {
				t.Errorf("got %v, want %v", got, tc.want)
			}
		})
	}
}
