from solution import Solution
import unittest


class TestMinSubArrayLen(unittest.TestCase):
    def setUp(self):
        self.solution = Solution()

    def test_case_one(self):
        nums = [2, 3, 1, 2, 4, 3]
        target = 7
        expected = 2

        result = self.solution.minSubArrayLen(target, nums)

        self.assertEqual(result, expected)

    def test_case_two(self):
        nums = [1, 4, 4]
        target = 4
        expected = 1

        result = self.solution.minSubArrayLen(target, nums)

        self.assertEqual(result, expected)

    def test_case_three(self):
        nums = [1, 1, 1, 1, 1, 1, 1, 1]
        target = 11
        expected = 0

        result = self.solution.minSubArrayLen(target, nums)

        self.assertEqual(result, expected)
