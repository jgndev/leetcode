package solution

import "testing"

func TestValidPalindrome(t *testing.T) {
	testCases := []struct {
		name  string
		input string
		want  bool
	}{
		{"test case one", "aba", true},
		{"test case two", "abca", true},
		{"test case three", "abc", false},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := validPalindrome(tc.input)

			if got != tc.want {
				t.Errorf("got %v, want %v", got, tc.want)
			}
		})
	}
}
