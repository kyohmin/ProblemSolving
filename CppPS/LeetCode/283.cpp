/*
Problem Name: 283. Move Zeroes
Date        : Jan-03,2024
Link        : https://leetcode.com/problems/move-zeroes/description/
Difficulty  : Easy
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i=0, next=0;i<nums.size();i++){
            if(nums[i]){
                swap(nums[i],nums[next++]);
            }
        }
    }
};

/*
[Self Reflection]
    Reason why I couldn't solve: Didn't know the swap function and was trying to avoid brute force.
    How the solution works: Swap the closest zero with the first non-zero value.
*/