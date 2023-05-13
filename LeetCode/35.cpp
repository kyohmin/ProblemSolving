class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left, mid, right;
        int insertIdx = 0;

        // Starting index
        left = 0;
        right = nums.size() -1;
        
        while(left <= right){
            mid = (right + left) / 2;
            if(target == nums[mid]){
                return mid;
            } else if(nums[mid] < target){
                insertIdx = mid + 1;
                left = mid + 1;
            } else if(nums[mid] > target){
                insertIdx = mid;
                right = mid -1;
            }
        }

        return insertIdx;
    }
};