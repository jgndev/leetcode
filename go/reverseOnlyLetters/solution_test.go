package solution

import "testing"

func TestReverseOnlyLetters(t *testing.T) {
	testCases := []struct {
		name  string
		input string
		want  string
	}{
		{
			name:  "test case one",
			input: "ab-cd",
			want:  "dc-ba",
		},
		{
			name:  "test case two",
			input: "a-bC-dEf-ghIj",
			want:  "j-Ih-gfE-dCba",
		},
		{
			name:  "test case three",
			input: "Test1ng-Leet=code-Q!",
			want:  "Qedo1ct-eeLg=ntse-T!",
		},
	}

	for _, tc := range testCases {
		t.Run(tc.name, func(t *testing.T) {
			got := reverseOnlyLetters(tc.input)

			if got != tc.want {
				t.Errorf("got %s, want %s", got, tc.want)
			}
		})
	}
}
