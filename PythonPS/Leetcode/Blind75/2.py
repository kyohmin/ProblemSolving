"""
Problem Name: Best Time to Buy and Sell Stock
Date: 2023-11-25
"""

# Solution 1 - One way pass O(n)
class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        lowestDay, largestDiff = prices[0], 0
        for i in prices:
            if i < lowestDay:
                lowestDay = i
            largestDiff = max(largestDiff, i - lowestDay)

        return largestDiff
            
"""
Note:
    The maximum profit can be found using the 'lowestDay' variable.
    Keep track the differences and update it if new maximum difference is found.
    The lowest day have the chance to get the new highest difference; therefore, both lowest day and largestDiff is recorded.
"""