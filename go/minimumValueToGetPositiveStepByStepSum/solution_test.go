package solution

import "testing"

func TestMinStartValue(t *testing.T) {
	testCases := []struct {
		name  string
		input []int
		want  int
	}{
		{
			name:  "test case one",
			input: []int{-3, 2, -3, 4, 2},
			want:  5,
		},
		{
			name:  "test case two",
			input: []int{1, 2},
			want:  1,
		},
		{
			name:  "test case three",
			input: []int{},
			want:  1,
		},
		{
			name:  "test case four",
			input: []int{1, -2, -3},
			want:  5,
		},
		{
			name:  "test case five",
			input: []int{3, 2, 5, 4},
			want:  1,
		},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := minStartValue(tc.input)
			if got != tc.want {
				t.Errorf("got %d, want %d", got, tc.want)
			}
		})
	}
}
