package findthedifference

import "testing"

func TestFindTheDifference(t *testing.T) {
	testCases := []struct {
		name string
		s    string
		t    string
		want byte
	}{
		{"test case one", "abcd", "abcde", 'e'},
		{"test case two", "", "y", 'y'},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := findTheDifference(tc.s, tc.t)

			if got != tc.want {
				t.Errorf("got %v, want %v", got, tc.want)
			}
		})
	}
}
