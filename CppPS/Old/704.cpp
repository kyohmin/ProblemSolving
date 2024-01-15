// Must come back and look again!

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() -1;
        int currentPosition;

        while (true){
            if(start > end){
                return -1;
            }

            currentPosition = ((start + end) / 2);
            if(nums[currentPosition] == target){
                return currentPosition;
            } else if(nums[currentPosition] > target){
                end = currentPosition-1;
            } else if(nums[currentPosition] < target){
                start = currentPosition+1;
            }
        } 
        return currentPosition;
    }
};