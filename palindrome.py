"""
Problem Name: 9. Palindrome Number
Date        : Jan-01,2023
Link        : https://leetcode.com/problems/palindrome-number/description/
Difficulty  : Easy
"""


class Solution:
    def isPalindrome(self, x: int) -> bool:
        strVal = str(x)
        if (strVal[::-1] == strVal):
            return True
        else:
            return False