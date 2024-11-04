import unittest
from solution import Solution

class TestContainsDuplicate(unittest.TestCase):
    def setUp(self):
        self.solution = Solution()

    def test_case_one(self):
        nums = [1, 2, 3, 1]
        expected = True
        result = self.solution.hasDuplicate(nums)
        self.assertEqual(result, expected)

    def test_case_two(self):
        nums = [1, 2, 3, 4]
        expected = False
        result = self.solution.hasDuplicate(nums)
        self.assertEqual(result, expected)

    def test_case_three(self):
        nums = [1, 1, 1, 3, 3, 4, 3, 2, 4, 2]
        expected = True
        result = self.solution.hasDuplicate(nums)
        self.assertEqual(result, expected)