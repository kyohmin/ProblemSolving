/*
Problem Name: 27. Remove Element
Date        : Jan-04,2023
Link        : https://leetcode.com/problems/remove-element/description/
Difficulty  : Easy
*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int lPtr = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != val){
                swap(nums[i], nums[lPtr++]);
            }
        }
        return lPtr;
    }
};

/*
[Self Reflection]
    How the solution works: It is the same problem as "26.cpp," It only requries swap on the specified value.
*/