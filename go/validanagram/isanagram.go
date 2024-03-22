package validanagram

import "maps"

func isAnagram(s, t string) bool {
	sMap := charMap(s)
	tMap := charMap(t)

	return maps.Equal(sMap, tMap)
}

func charMap(s string) map[string]int {
	m := make(map[string]int, len(s))

	for _, char := range s {
		m[string(char)]++
	}

	return m
}
