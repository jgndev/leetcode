package toLowerCase

import "testing"

func TestToLowerCase(t *testing.T) {
	testCases := []struct {
		name  string
		input string
		want  string
	}{
		{"test case one", "ABC", "abc"},
		{"test case two", "TEXAS", "texas"},
		{"test case three", "COW JUMPED OVER THE MOON", "cow jumped over the moon"},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := toLowerCase(tc.input)

			if got != tc.want {
				t.Errorf("got %v, want %v", got, tc.want)
			}
		})
	}
}
