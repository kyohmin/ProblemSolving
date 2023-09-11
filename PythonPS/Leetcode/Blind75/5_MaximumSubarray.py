"""
Problem: 238. Product of Array Except Self
Level: Medium
"""

class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        #1 Never start with negative value
        #2 Never finish with negative value
        maxVal = nums[0]
        sumVal = 0
        for n in nums:
            if sumVal < 0:
                sumVal = 0

            sumVal += n
            if sumVal > maxVal: maxVal = sumVal
            
        return maxVal
    
    # Big(O): n
    # Something noticed: using if statement to compare the bigger value is much faster than max function
    #                   However, using max function uses lesser space (by very little)
    #
    # Conclusion: When comparing two values, use if statement