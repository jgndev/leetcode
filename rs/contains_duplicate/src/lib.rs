use std::collections::{HashSet};

struct Solution {}

impl Solution {
    pub fn contains_duplicate(nums: Vec<i32>) -> bool {
        let mut seen = HashSet::new();

        for num in nums {
            if !seen.insert(num) {
                return true;
            }
        }

        false
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_case_one() {
        let nums = vec![1, 2, 3, 1];
        let expected = true;
        let result = Solution::contains_duplicate(nums);
        assert_eq!(result, expected);
    }

    #[test]
    fn test_case_two() {
        let nums = vec![1, 2, 3, 4];
        let expected = false;
        let result = Solution::contains_duplicate(nums);
        assert_eq!(result, expected);
    }

    #[test]
    fn test_case_three() {
        let nums = vec![1, 1, 1, 3, 3, 4, 3, 2, 4, 2];
        let expected = true;
        let result = Solution::contains_duplicate(nums);
        assert_eq!(result, expected);
    }
}