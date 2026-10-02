\# Longest Common Prefix



\- \*\*LeetCode:\*\* https://leetcode.com/problems/longest-common-prefix/

\- \*\*Difficulty:\*\* Easy

\- \*\*Category:\*\* Arrays \& Strings



\## Approach



Compare the characters of the first string with the characters at the same position in all other strings.



For each position:

\- Store the current character from the first string.

\- Check whether every other string has the same character.

\- If a mismatch is found or a string ends, the common prefix ends there.

\- Otherwise, continue to the next character.



\## Complexity



\- \*\*Time:\*\* O(n × m)

\- \*\*Space:\*\* O(1)



Where `n` is the number of strings and `m` is the length of the shortest string.



\## Local Test Cases



\### Test Case 1



Input: `\["flower", "flow", "flight"]`



Output: `fl`



\### Test Case 2



Input: `\["dog", "racecar", "car"]`



Output: `""`



\## Notes



The local C file contains a `main()` function for testing. The LeetCode submission uses the required `char\* longestCommonPrefix(char\*\* strs, int strsSize)` function.

