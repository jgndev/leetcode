package solution

import "testing"

func TestRepeatedCharacters(t *testing.T) {
	testCases := []struct {
		name string
		s    string
		want byte
	}{
		{
			name: "test case one",
			s:    "abccbaacz",
			want: 'c',
		},
		{
			name: "test case two",
			s:    "abcdd",
			want: 'd',
		},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := repeatedChars(tc.s)

			if got != tc.want {
				t.Errorf("got %v, want %v", got, tc.want)
			}
		})
	}
}
