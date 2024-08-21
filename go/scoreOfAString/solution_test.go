package solution

import "testing"

func TestScoreOfString(t *testing.T) {
	testCases := []struct {
		name  string
		input string
		want  int
	}{
		{"test case one", "hello", 13},
		{"test case two", "zaz", 50},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := scoreOfString(tc.input)

			if got != tc.want {
				t.Errorf("got %d, want %d", got, tc.want)
			}
		})
	}

}
