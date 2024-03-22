package validanagram

import (
	"testing"
)

func TestValidAnagram(t *testing.T) {
	testCases := []struct {
		name     string
		s        string
		t        string
		expected bool
	}{
		{"test case one", "anagram", "nagaram", true},
		{"test case two", "rat", "car", false},
		{"test case three", "alerted", "altered", true},
		{"test case four", "gallery", "largely", true},
		{"test case five", "bog", "cog", false},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := isAnagram(tc.s, tc.t)
			if got != tc.expected {
				t.Errorf("got %v, expected %v", got, tc.expected)
			}
		})
	}
}
