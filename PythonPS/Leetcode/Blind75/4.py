"""
Name        : Product of Array Except Self
Date        : 2023-11-28
Difficulty  : Medium
"""

# My Solution
class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        right = [1] * (len(nums)+2)
        left = [1] * (len(nums)+2)
        for i in range(len(nums),0,-1): # Right to left
            right[i] = right[i+1]*nums[i-1]

        for i in range(1,len(nums)+1): # Left to right
            left[i] = left[i-1]*nums[i-1]

        result = []
        for i in range(len(nums)): # Right+2 * Left
            result.append(left[i] * right[i+2])
        return result
    
# Solution without additional list
class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        size = len(nums)
        arr = [1] * size
        pre, post = 1,1

        for i in range(size):
            # Left to right
            arr[i] *= pre
            pre = pre * nums[i]
            
            # Right to left
            arr[size-i-1] *= post
            post = post*nums[size-i-1]

        return arr
    
"""
Note:
    The key point of the problem is to get muliplied arrays.
    One from left to right and other with right to left.
"""