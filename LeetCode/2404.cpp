class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        vector<int> even;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] % 2 == 0){
                even.push_back(nums[i]);
            }
        }

        // sort
        sort(even.begin(), even.end());

        int mCnt = 0, prevVal = -1;
        int highestVal = -1;
        int cnt = 0;

        for(int i = 0; i < even.size(); i++){
            if(even[i] == prevVal){
                cnt++;
            } else {
                cnt = 1;
            }

            if(mCnt < cnt){
                mCnt = cnt;
                highestVal = even[i];
            }

            prevVal = even[i];
        }

        return highestVal;
    }
};