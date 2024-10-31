use std::collections::HashMap;

struct Solution {}

impl Solution {
    pub fn max_number_of_balloons(text: String) -> i32 {
        let mut counts = HashMap::new();

        for c in text.chars() {
            *counts.entry(c).or_insert(0) += 1;
        }

        let mut count = *counts.get(&'b').unwrap_or(&0);
        count = count.min(*counts.get(&'a').unwrap_or(&0));
        count = count.min(*counts.get(&'n').unwrap_or(&0));
        count = count.min(*counts.get(&'l').unwrap_or(&0) / 2);
        count = count.min(*counts.get(&'o').unwrap_or(&0) / 2 );

        count
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_case_one() {
        let expected = 1;
        let text = String::from("nlaebolko");
        let result = Solution::max_number_of_balloons(text);
        assert_eq!(result, expected);
    }

    #[test]
    fn test_case_two() {
        let expected = 2;
        let text = String::from("loonbalxballpoon");
        let result = Solution::max_number_of_balloons(text);
        assert_eq!(result, expected);
    }

    #[test]
    fn test_case_three() {
        let expected = 0;
        let text = String::from("leetcode");
        let result = Solution::max_number_of_balloons(text);
        assert_eq!(result, expected);
    }
}