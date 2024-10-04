package solution

import "testing"

func TestLargestAltitude(t *testing.T) {
	testCases := []struct {
		name string
		gain []int
		want int
	}{
		{
			name: "test case one",
			gain: []int{-5, 1, 5, 0, -7},
			want: 1,
		},
		{
			name: "test case two",
			gain: []int{-4, -3, -2, -1, 4, 3, 2},
			want: 0,
		},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := largestAltitude(tc.gain)

			if got != tc.want {
				t.Errorf("got %d, want %d", got, tc.want)
			}
		})
	}
}
