class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> results;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size()-2; i++){
            int left = i+1;
            int right = nums.size()-1;
            int target = -nums[i];
            while(left < right){
                int sum = nums[left] + nums[right];

                if(sum > target){
                    right--;
                } else if(sum < target){
                    left++;
                } else {
                    vector<int> tmp = {nums[i], nums[left], nums[right]};
                    results.push_back(tmp);

                    while(left < right && nums[left] == tmp[1]) left++;
                    while(left < right && nums[right] == tmp[2]) right--;
                }
            }
            while(i+ 1 < nums.size() && nums[i + 1] == nums[i]) i++;

        }

        return results;
    }
};