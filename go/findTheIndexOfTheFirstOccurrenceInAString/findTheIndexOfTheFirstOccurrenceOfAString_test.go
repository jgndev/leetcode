package findtheindexofthefirstoccurrenceinastring

import (
	"testing"
)

func TestFindTheIndexOfTheFirstOccurrenceInAString(t *testing.T) {
	testCases := []struct {
		name     string
		haystack string
		needle   string
		want     int
	}{
		{"test case one", "sadbutsad", "sad", 0},
		{"test case two", "leetcode", "leeto", -1},
		{"test case three", "abcdef", "def", 3},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := strStr(tc.haystack, tc.needle)

			if got != tc.want {
				t.Errorf("got %v, want %v", got, tc.want)
			}
		})
	}
}
