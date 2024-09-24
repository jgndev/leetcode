package solution

import "testing"

func TestReverseWord(t *testing.T) {
	testCases := []struct {
		name  string
		input string
		want  string
	}{
		{
			name:  "test case one",
			input: "Let's take LeetCode contest",
			want:  "s'teL ekat edoCteeL tsetnoc",
		},
		{
			name:  "test case two",
			input: "Mr Ding",
			want:  "rM gniD",
		},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := reverseWords(tc.input)

			if got != tc.want {
				t.Errorf("got %s, want %s", got, tc.want)
			}
		})
	}
}
