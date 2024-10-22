package solution

import (
	"reflect"
	"testing"
)

func TestWinnders(t *testing.T) {
	t.Run("test case one", func(t *testing.T) {
		matches := [][]int{{1, 3}, {2, 3}, {3, 6}, {5, 6}, {5, 7}, {4, 5}, {4, 8}, {4, 9}, {10, 4}, {10, 9}}
		wanted := [][]int{{1, 2, 10}, {4, 5, 7, 8}}

		result := findWinners(matches)

		if !reflect.DeepEqual(result, wanted) {
			t.Errorf("got %v, wanted %v", result, wanted)
		}
	})

	t.Run("test case two", func(t *testing.T) {
		matches := [][]int{{1, 2}, {1, 3}, {2, 3}, {2, 4}}
		wanted := [][]int{{1}, {2, 4}}

		result := findWinners(matches)

		if !reflect.DeepEqual(result, wanted) {
			t.Errorf("got %v, wanted %v", result, wanted)
		}
	})

	t.Run("test case three", func(t *testing.T) {
		matches := [][]int{{1, 2}, {2, 1}, {1, 2}, {2, 1}}
		wanted := [][]int{{}, {}}

		result := findWinners(matches)

		if !reflect.DeepEqual(result, wanted) {
			t.Errorf("got %v, wanted %v", result, wanted)
		}
	})
}
