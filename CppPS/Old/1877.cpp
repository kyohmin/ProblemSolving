class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        long long maxVal = 0;

        for(int i = 0; i < nums.size()/2; i++){
            int rightIdx = nums.size()-i-1;
            if(nums[rightIdx] + nums[i] > maxVal){
                maxVal = nums[rightIdx] + nums[i];
            }
        }

        return maxVal;
    }
};