"""
Problem: 217. Contains Duplicate
Level: Easy
"""
    class Solution:
        def containsDuplicate(self, nums: List[int]) -> bool:
            nums.sort()
            prev = nums[0]
            for i in range(1, len(nums)):
                if nums[i] == prev:
                    return True
                prev = nums[i]
            
            return False


    # Big(O): nlogn - Due to sort algorithm


    class Solution:
        def containsDuplicate(self, nums: List[int]) -> bool:
            hashSet = set()
            for i in nums:
                if i in hashSet:
                    return True
                hashSet.add(i)
            return False
        
    # Big(O): n
    #
    # Explanation: Set does not require sort