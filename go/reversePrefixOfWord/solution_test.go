package solution

import "testing"

func TestReversePrefix(t *testing.T) {
	testCases := []struct {
		name string
		word string
		ch   byte
		want string
	}{
		{
			name: "test case one",
			word: "abcdefd",
			ch:   'd',
			want: "dcbaefd",
		},
		{
			name: "test case two",
			word: "xyxzxe",
			ch:   'z',
			want: "zxyxxe",
		},
		{
			name: "test case three",
			word: "abcd",
			ch:   'z',
			want: "abcd",
		},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := reversePrefix(tc.word, tc.ch)

			if got != tc.want {
				t.Errorf("got %s, want %s", got, tc.want)
			}
		})
	}
}
