package solution

import "testing"

func TestCaseOne(t *testing.T) {
	head := NewNode(2)
	tail := NewNode(1)

	head.next = tail

	want := "Even"
	got := gameResult(head)

	if got != want {
		t.Errorf("got %s, want %s", got, want)
	}
}

func TestCaseTwo(t *testing.T) {
	head := NewNode(2)
	a := NewNode(5)
	b := NewNode(4)
	c := NewNode(7)
	d := NewNode(20)
	tail := NewNode(5)

	head.next = a
	a.next = b
	b.next = c
	c.next = d
	d.next = tail

	want := "Odd"
	got := gameResult(head)

	if got != want {
		t.Errorf("got %s, want %s", got, want)
	}
}

func TestCaseThree(t *testing.T) {
	head := NewNode(4)
	a := NewNode(5)
	b := NewNode(2)
	tail := NewNode(1)

	head.next = a
	a.next = b
	b.next = tail

	want := "Tie"
	got := gameResult(head)

	if got != want {
		t.Errorf("got %s, want %s", got, want)
	}
}
