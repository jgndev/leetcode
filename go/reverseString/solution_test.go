package solution

import (
	"slices"
	"testing"
)

func TestReverseString(t *testing.T) {
	testCases := []struct {
		name  string
		input []byte
		want  []byte
	}{
		{
			name:  "test case one",
			input: []byte{'h', 'e', 'l', 'l', 'o'},
			want:  []byte{'o', 'l', 'l', 'e', 'h'},
		},
	}

	for _, tc := range testCases {
		reverseString(tc.input)

		if !slices.Equal(tc.input, tc.want) {
			t.Errorf("got %v, want %v", tc.input, tc.want)
		}
	}
}
