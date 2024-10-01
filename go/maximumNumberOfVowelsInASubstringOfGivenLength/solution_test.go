package solution

import "testing"

func TestMaxVowels(t *testing.T) {
	testCases := []struct {
		name  string
		input string
		k     int
		want  int
	}{
		{
			name:  "test case one",
			input: "abciiidef",
			k:     3,
			want:  3,
		},
		{
			name:  "test case two",
			input: "aeiou",
			k:     2,
			want:  2,
		},
		{
			name:  "test case three",
			input: "leetcode",
			k:     3,
			want:  2,
		},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := maxVowels(tc.input, tc.k)

			if got != tc.want {
				t.Errorf("got %d, want %d", got, tc.want)
			}
		})
	}
}
