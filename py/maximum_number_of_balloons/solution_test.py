import unittest
from solution import Solution

class TestMaxNumberOfBalloons(unittest.TestCase):
    solution = Solution()

    def test_case_one(self):
        text = "nlaebolko"
        expected = 1
        result = self.solution.maxNumberOfBalloons(text)
        self.assertEqual(result, expected)

    def test_case_two(self):
        text = "loonbalxballpoon"
        expected = 2
        result = self.solution.maxNumberOfBalloons(text)
        self.assertEqual(result, expected)

    def test_case_three(self):
        text = "leetcode"
        expected = 0
        result = self.solution.maxNumberOfBalloons(text)
        self.assertEqual(result, expected)
