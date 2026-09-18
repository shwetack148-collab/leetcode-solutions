## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

I used a frequency-counting array to keep track of how many times each
character appears. I increase the count for every character in the first
string and decrease it for every character in the second string. If all
counts are zero, the two strings are anagrams.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

I tested a typical anagram case (`anagram`, `nagaram`) and a case that is
not an anagram (`rat`, `car`). The edge cases show that different character
frequencies correctly produce a false result.