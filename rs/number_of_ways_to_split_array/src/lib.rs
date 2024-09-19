pub fn ways_to_split_array(nums: Vec<i32>) -> i32 {
    let mut result = 0;
    let mut left_sum: i64 = 0;
    let total_sum: i64 = nums.iter().map(|&x| x as i64).sum();

    for (_, &num) in nums.iter().enumerate().take(nums.len() - 1) {
        left_sum += num as i64;
        let right_sum = total_sum - left_sum;
        if left_sum >= right_sum {
            result += 1;
        }
    }

    result
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_case_one() {
        assert_eq!(ways_to_split_array(vec![10, 4, -8, 7]), 2);
    }

    #[test]
    fn test_case_two() {
        assert_eq!(ways_to_split_array(vec![2, 3, 1, 0]), 2);
    }

    #[test]
    fn test_case_three() {
        assert_eq!(ways_to_split_array(vec![1_000_000_000, 1_000_000_000, 1_000_000_000, 1_000_000_000]), 2);
    }

    #[test]
    fn test_case_four() {
        assert_eq!(ways_to_split_array(vec![-1, -2, -3, -4, -5]), 3);
    }

    #[test]
    fn test_case_five() {
        assert_eq!(ways_to_split_array(vec![1, 1]), 1);
    }
}