package solution

import "strings"

func defangIpAddress(address string) string {
	sb := strings.Builder{}
	// reserve enough space for the address, plus 6 brackets
	sb.Grow(len(address) + 6)

	for _, c := range address {
		// if the rune is a .
		if c == '.' {
			// write [.] to the string builder
			sb.WriteString("[.]")
		} else {
			// write the rune to the string bulder
			sb.WriteRune(c)
		}
	}

	// return the string
	return sb.String()
}
