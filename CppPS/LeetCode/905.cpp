/*
Problem Name: 905. Sort Array By Parity
Date        : Jan-04,2024
Link        : https://leetcode.com/problems/sort-array-by-parity/description/
Difficulty  : Easy
*/

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int lPtr = 0;
        for(int i=0; i<nums.size();i++){
            if(nums[i] % 2 == 0){
                swap(nums[lPtr++], nums[i]);
            }
        }
        return nums;
    }
};

/*
[Self Reflection]
    How the solution works: It is the same code as the "283.cpp" but just sending the odd numbers to back.
*/