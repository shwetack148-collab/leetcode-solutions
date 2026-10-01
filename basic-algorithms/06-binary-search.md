# Binary Search

- **LeetCode:** https://leetcode.com/problems/binary-search/
- **Difficulty:** Easy

## Approach

Use binary search on the sorted array.

Keep two pointers:
- `left` at the beginning
- `right` at the end

Find the middle element and compare it with the target:
- If equal, return the index.
- If the middle value is smaller, search the right half.
- Otherwise, search the left half.

If the target is not found, return `-1`.

## Complexity

- **Time:** O(log n)
- **Space:** O(1)

## Local Test Cases

### Test Case 1
Input: `[-1, 0, 3, 5, 9, 12]`, target = `9`

Output: `4`

### Test Case 2
Input: `[-1, 0, 3, 5, 9, 12]`, target = `2`

Output: `-1`

## Notes

The array must be sorted for binary search to work correctly.# Binary Search

- **LeetCode:** https://leetcode.com/problems/binary-search/
- **Difficulty:** Easy

## Approach

Use binary search on the sorted array.

Keep two pointers:
- `left` at the beginning
- `right` at the end

Find the middle element and compare it with the target:
- If equal, return the index.
- If the middle value is smaller, search the right half.
- Otherwise, search the left half.

If the target is not found, return `-1`.

## Complexity

- **Time:** O(log n)
- **Space:** O(1)

## Local Test Cases

### Test Case 1
Input: `[-1, 0, 3, 5, 9, 12]`, target = `9`

Output: `4`

### Test Case 2
Input: `[-1, 0, 3, 5, 9, 12]`, target = `2`

Output: `-1`

## Notes

The array must be sorted for binary search to work correctly.