class Solution:
    def maxNumberOfBalloons(self, text: str) -> int:
        counts = {}

        for char in text:
            counts[char] = counts.get(char, 0) + 1

        count = counts.get('b', 0)
        count = min(count, counts.get('a', 0))
        count = min(count, counts.get('n', 0))
        count = min(count, counts.get('l', 0) // 2)
        count = min(count, counts.get('o', 0) // 2)

        return count