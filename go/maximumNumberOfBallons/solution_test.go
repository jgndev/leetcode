package solution

import "testing"

func TestMaxNumberOfBalloons(t *testing.T) {
	testCases := []struct {
		name string
		text string
		want int
	}{
		{
			name: "test case one",
			text: "nlaebolko",
			want: 1,
		},
		{
			name: "test case two",
			text: "loonbalxballpoon",
			want: 2,
		},
		{
			name: "test case three",
			text: "leetcode",
			want: 0,
		},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := maxNumberOfBalloons(tc.text)

			if got != tc.want {
				t.Errorf("got %d, wanted %d", got, tc.want)
			}
		})
	}
}
