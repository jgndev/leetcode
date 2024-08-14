package lengthOfLastWord

import "testing"

func TestLengthOfLastWord(t *testing.T) {
	testCases := []struct {
		name  string
		input string
		want  int
	}{
		{"test case one", "luffy is still joyboy", 6},
		{"test case two", " fly me to the moon  ", 4},
		{"test case three", "Hello World", 5},
		{"test case four", "  would chuck wood   ", 4},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := lengthOfLastWord(tc.input)

			if got != tc.want {
				t.Errorf("got %v, want %v", got, tc.want)
			}
		})
	}
}
