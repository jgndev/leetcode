package solution

import "testing"

func TestAreOccurrencesEqual(t *testing.T) {
	testCases := []struct {
		name string
		s    string
		want bool
	}{
		{
			name: "test case one",
			s:    "abacbc",
			want: true,
		},
		{
			name: "test case two",
			s:    "aaabb",
			want: false,
		},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := areOccurrencesEqual(tc.s)

			if got != tc.want {
				t.Errorf("got %v, want %v", got, tc.want)
			}
		})
	}
}
