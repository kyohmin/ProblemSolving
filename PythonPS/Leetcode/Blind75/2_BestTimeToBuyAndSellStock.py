"""
Problem: 121. Best Time to Buy and Sell Stock
Level: Easy
"""

class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        startIdx = 0
        maxProfit = 0
        for i, n in enumerate(prices):
            if n < prices[startIdx]:
                startIdx = i;
            else:
                maxProfit = max([maxProfit, n - prices[startIdx]])

        return maxProfit
    

    # Big(O): n