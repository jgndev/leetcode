package baseballGame

import "testing"

func TestBaseballGame(t *testing.T) {
	testCases := []struct {
		name       string
		operations []string
		want       int
	}{
		{"test case one", []string{"5", "2", "C", "D", "+"}, 30},
		{"test case two", []string{"5", "-2", "4", "C", "D", "9", "+", "+"}, 27},
		{"test case three", []string{"5", "-2", "4", "C", "D", "9", "+", "+"}, 27},
		{"test case four", []string{"1", "2", "3", "4", "5"}, 15},
		{"test case five", []string{"1", "C"}, 0},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := baseballGame(tc.operations)

			if got != tc.want {
				t.Errorf("got %v, want %v", got, tc.want)
			}
		})
	}
}
