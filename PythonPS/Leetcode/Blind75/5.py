"""
Name        : Maximum Subarray
Date        : 2023-11-30
Difficulty  : Medium
"""

class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        currSum = nums[0]
        maxSum = nums[0]
        for i in nums[1:]:
            currSum = max(i, currSum + i)
            maxSum = max(maxSum, currSum)

        return maxSum
    
"""
Note:
    The lesson is that the list flows from left to right.
    After changing the starting index, the rest is simply getting the maximum value.
"""