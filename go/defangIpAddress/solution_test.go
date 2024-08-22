package solution

import "testing"

func TestDefangIpAddress(t *testing.T) {
	testCases := []struct {
		name  string
		input string
		want  string
	}{
		{"test case one", "1.1.1.1", "1[.]1[.]1[.]1"},
		{"test case two", "255.100.50.0", "255[.]100[.]50[.]0"},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := defangIpAddress(tc.input)

			if got != tc.want {
				t.Errorf("got %s, want %s", got, tc.want)
			}
		})
	}
}
