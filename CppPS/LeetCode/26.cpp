/*
Problem Name: 26. Remove Duplicates from Sorted Array
Date        : Jan-03,2023
Link        : https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
Difficulty  : Easy
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int pointer = 1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i] != nums[i-1]){
                nums[pointer] = nums[i];
                pointer++;
            }
        }
        return pointer;
    }
};

/*
[Self Reflection]
    Reason why I couldn't solve: I didn't read the question carefully.
    How the solution works: If the current "i" value meets unique value, locate it to "pointer" location.
*/