package solution

import (
	"testing"
)

// helper function to create a linked list from a slice of integers
func createList(values []int) *Node {
	dummy := &Node{}
	current := dummy

	for _, v := range values {
		current.next = NewNode(v)
		current = current.next
	}

	return dummy.next
}

func TestGetIntersectionNode(t *testing.T) {
	t.Run("Intersection at the beginning", func(t *testing.T) {
		common := createList([]int{1, 2, 3})
		headA := common
		headB := common

		result := getIntersectionNode(headA, headB)

		if result != common {
			t.Errorf("Expected intersection at %p, but got %p", common, result)
		}
	})

	t.Run("Intersection in the middle", func(t *testing.T) {
		common := createList([]int{7, 8, 9})
		headA := createList([]int{1, 2, 3})
		headB := createList([]int{4, 5, 6})

		// Connect headA to common
		tailA := headA

		for tailA.next != nil {
			tailA = tailA.next
		}

		tailA.next = common

		// Connect headB to common
		tailB := headB

		for tailB.next != nil {
			tailB = tailB.next
		}

		tailB.next = common

		result := getIntersectionNode(headA, headB)

		if result != common {
			t.Errorf("Expected intersection at %p, but got %p", common, result)
		}
	})

	t.Run("No intersection", func(t *testing.T) {
		headA := createList([]int{1, 2, 3})
		headB := createList([]int{4, 5, 6})

		result := getIntersectionNode(headA, headB)

		if result != nil {
			t.Errorf("Expected no intersection, but got intersection at %p", result)
		}
	})

	t.Run("One list is empty", func(t *testing.T) {
		headA := createList([]int{1, 2, 3})
		var headB *Node = nil

		result := getIntersectionNode(headA, headB)

		if result != nil {
			t.Errorf("Expected no intersection, but got intersection at %p", result)
		}
	})

	t.Run("Both lists are empty", func(t *testing.T) {
		var headA, headB *Node = nil, nil

		result := getIntersectionNode(headA, headB)

		if result != nil {
			t.Errorf("Expected no intersection, but got intersection at %p", result)
		}
	})
}
