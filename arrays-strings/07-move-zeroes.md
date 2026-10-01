# Move Zeroes

- **LeetCode:** https://leetcode.com/problems/move-zeroes/
- **Difficulty:** Easy

## Approach

Use a pointer called `position` to keep track of where the next non-zero element should be placed.

Traverse the array:
- If the current element is non-zero, place it at `position`.
- Increase `position`.

After all non-zero elements are placed, fill the remaining positions with zeroes.

## Complexity

- **Time:** O(n)
- **Space:** O(1)

## Local Test Cases

### Test Case 1
Input: `[0, 1, 0, 3, 12]`

Output: `[1, 3, 12, 0, 0]`

### Test Case 2
Input: `[0, 0, 1]`

Output: `[1, 0, 0]`

## Notes

The solution modifies the array in-place and keeps the relative order of non-zero elements unchanged.