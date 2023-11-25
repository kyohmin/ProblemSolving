"""
Problem Name: Two Sum
Date: 2023-11-24
"""

# Solution 1
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        map = {}

        for i, e in enumerate(nums):
            newTarget = target - e
            if newTarget in map:
                return [map[newTarget], i]
            
            map[e] = i


"""
Note:
    Use the map to keep track what numbers were found.
    Using the map, the index and the 'target - current value' can be found if it exist.
"""