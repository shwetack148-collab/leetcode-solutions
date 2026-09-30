## Problem: Reverse String (Easy)

**Link:** https://leetcode.com/problems/reverse-string/

### Approach

I used the two-pointer technique. One pointer starts at the beginning and the other at the end, and the characters are swapped while moving both pointers toward the center.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The string must be modified in-place. A single-character string is already reversed, so the loop does not perform any unnecessary swaps.

### Local Test Cases

- Test Case 1: `hello` → `o l l e h`
- Test Case 2: `a` → `a`