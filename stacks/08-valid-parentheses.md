\# Valid Parentheses



\- \*\*LeetCode:\*\* https://leetcode.com/problems/valid-parentheses/

\- \*\*Difficulty:\*\* Easy

\- \*\*Category:\*\* Stacks



\## Approach



Use a stack to keep track of opening brackets.



Traverse the string:

\- If the character is an opening bracket `(`, `\[`, or `{`, push it onto the stack.

\- If it is a closing bracket, check the top of the stack.

\- If the brackets do not match, return `false`.

\- If there is no opening bracket available for a closing bracket, return `false`.



After processing the entire string, the stack must be empty for the parentheses to be valid.



\## Complexity



\- \*\*Time:\*\* O(n)

\- \*\*Space:\*\* O(n)



\## Local Test Cases



\### Test Case 1

Input: `"()\[]{}"`



Output: `true`



\### Test Case 2

Input: `"(\[)]"`



Output: `false`



\### Test Case 3

Input: `"{\[]}"`



Output: `true`



\## Notes



The solution uses a stack to ensure that brackets are closed in the correct order.

