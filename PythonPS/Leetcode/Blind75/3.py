"""
Name        : Contains Duplicate
Date        : 2023-11-26
Difficulty  : Easy
"""

# Solution 1 - Using Set
class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        record = set()
        for i in nums:
            if i in record: return True
            record.add(i)
        return False
    

"""
Note:
    To find if the list contains any duplicate, set can be used.
"""