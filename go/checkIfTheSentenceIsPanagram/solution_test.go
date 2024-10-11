package solution

import "testing"

func TestCheckIfPanagram(t *testing.T) {
	testCases := []struct {
		name     string
		sentence string
		want     bool
	}{
		{
			name:     "test case one",
			sentence: "thequickbrownfoxjumpsoverthelazydog",
			want:     true,
		},
		{
			name:     "test case two",
			sentence: "leetcode",
			want:     false,
		},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := checkIfPanagram(tc.sentence)

			if got != tc.want {
				t.Errorf("got %v, want %v", got, tc.want)
			}
		})
	}
}
