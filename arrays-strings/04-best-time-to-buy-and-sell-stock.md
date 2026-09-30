## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

I used a single pass through the array.
I kept track of the lowest price seen so far and calculated the profit by selling at the current price.
The maximum profit found during the scan is returned.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The stock must be bought before it is sold.
If no profitable transaction is possible, the answer is 0.
I tested the solution locally with a normal case and a case where no profit is possible.