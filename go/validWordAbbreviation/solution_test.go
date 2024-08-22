package validWordAbbreviation

import "testing"

func TestValidWordAbbreviation(t *testing.T) {
	testCases := []struct {
		name string
		word string
		abbr string
		want bool
	}{
		{"test case one", "internationalization", "i12iz4n", true},
		{"test case two", "apple", "a2e", false},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := validWordAbbreviation(tc.word, tc.abbr)

			if got != tc.want {
				t.Errorf("got %v, want %v", got, tc.want)
			}
		})
	}
}
