package solution

import "testing"

func TestRemoveVowels(t *testing.T) {
	testCases := []struct {
		name  string
		input string
		want  string
	}{
		{"test case one", "leetcodeisacommunityforcoders", "ltcdscmmntyfrcdrs"},
		{"test case two", "aeiou", ""},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := removeVowels(tc.input)

			if got != tc.want {
				t.Errorf("got %s, want %s", got, tc.want)
			}
		})
	}
}
