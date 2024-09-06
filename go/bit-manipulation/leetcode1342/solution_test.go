package solution

import "testing"

func TestNumberOfSteps(t *testing.T) {
	testCases := []struct {
		name  string
		input int
		want  int
	}{
		{
			name:  "test case one",
			input: 14,
			want:  6,
		},
		{
			name:  "test case two",
			input: 8,
			want:  4,
		},
		{
			name:  "test case three",
			input: 123456,
			want:  22,
		},
		{
			name:  "test case four",
			input: 1024,
			want:  11,
		},
		{
			name:  "test case five",
			input: 0,
			want:  0,
		},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := numberOfSteps(tc.input)

			if got != tc.want {
				t.Errorf("got %d, want %d", got, tc.want)
			}
		})
	}
}
