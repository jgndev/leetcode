import unittest
from solution import Solution


class TestMaxVowels(unittest.TestCase):
    solution = Solution()

    def test_case_one(self):
        s = "abciiidef"
        k = 3
        expected = 3

        result = self.solution.max_vowels(s, k)

        self.assertEqual(result, expected)

    def test_case_two(self):
        s = "aeiou"
        k = 2
        expected = 2

        result = self.solution.max_vowels(s, k)

        self.assertEqual(result, expected)

    def test_case_three(self):
        s = "leetcode"
        k = 3
        expected = 2

        result = self.solution.max_vowels(s, k)

        self.assertEqual(result, expected)
