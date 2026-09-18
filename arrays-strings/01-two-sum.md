## Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

### Approach

I used two nested loops to check every possible pair of numbers in the array.
When the sum of two numbers equals the target, their indices are returned.

### Complexity

- Time: O(n²)
- Space: O(1)

### Notes

The same array element cannot be used twice, so the second loop starts from `i + 1`.
I also tested the solution locally with a normal case and a duplicate-value case.