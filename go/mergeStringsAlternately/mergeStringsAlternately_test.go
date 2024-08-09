package mergestringsalternately

import "testing"

func TestMergeStringsAlternately(t *testing.T) {
	testCases := []struct {
		name  string
		word1 string
		word2 string
		want  string
	}{
		{"test case one", "abc", "pqr", "apbqcr"},
		{"test case two", "ab", "pqrs", "apbqrs"},
		{"test case three", "abcd", "pq", "apbqcd"},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := mergeStringsAlternately(tc.word1, tc.word2)

			if got != tc.want {
				t.Errorf("got %v, want %v", got, tc.want)
			}
		})
	}
}
