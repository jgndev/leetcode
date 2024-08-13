package romanInteger

import "testing"

func TestRomanInteger(t *testing.T) {
	testCases := []struct {
		name  string
		roman string
		want  int
	}{
		{"test case one", "III", 3},
		{"test case two", "MCMXCIV", 1994},
		{"test case three", "MMMCMXCIX", 3999},
		{"test case four", "V", 5},
		{"test case five", "LVIII", 58},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := romanToInt(tc.roman)

			if got != tc.want {
				t.Errorf("got %v, want %v", got, tc.want)
			}
		})
	}
}
