package repeatedSubstringPattern

import "testing"

func TestRepeatedSubstringPattern(t *testing.T) {
	testCases := []struct {
		name  string
		input string
		want  bool
	}{
		{"test case one", "abab", true},
		{"test case two", "aba", false},
		{"test case two", "abcabcabcabc", true},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := repeatedSubstringPattern(tc.input)

			if got != tc.want {
				t.Errorf("got %v, want %v", got, tc.want)
			}
		})

	}
}
