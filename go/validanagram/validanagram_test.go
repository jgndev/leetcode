package validanagram

import "testing"

func TestValidAnagram(t *testing.T) {
	testCases := []struct {
		name string
		s    string
		t    string
		want bool
	}{
		{"test case one", "monkeyswrite", "newyorktimes", true},
		{"test case two", "anagram", "nagaram", true},
		{"test case three", "rat", "car", false},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := validAnagram(tc.s, tc.t)

			if got != tc.want {
				t.Errorf("got %v, want %v", got, tc.want)
			}
		})
	}
}
