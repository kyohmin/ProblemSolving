"""
Problem: 1. Two Sum
Level: Easy

Summary: Finding two indices that adds up to the target value
"""

# Solution 1

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for i in range(len(nums)):
            for j in range(i+1, len(nums)):
                if(nums[i] + nums[j] == target):
                    return [i,j]


    # Big(O): n^2

# Solution 2

class Solution:
    class Solution:
        def twoSum(self, nums: List[int], target: int) -> List[int]:
            dic = {}
            for i, val in enumerate(nums):
                tarVal = target - val
                if tarVal in dic:
                    return [dic[tarVal], i]
                else:
                    dic[val] = i
            return _

    # Big(O): n