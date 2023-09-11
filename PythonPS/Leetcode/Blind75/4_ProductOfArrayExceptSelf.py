"""
Problem: 238. Product of Array Except Self
Level: Medium
"""

class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        pre = 1
        li = [1] * len(nums)
        for i in range(len(nums)):
            li[i] = pre
            pre *= nums[i]

        post = 1
        for i in range(len(nums)-1, -1, -1):
            li[i] *= post 
            post *= nums[i]

        return li