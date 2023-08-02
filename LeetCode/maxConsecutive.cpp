#include <iostream>
#include <vector>

using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums);

int main(){
    vector<int> vec{1,0,1,1,1};

    cout << findMaxConsecutiveOnes(vec);
}

int findMaxConsecutiveOnes(vector<int>& nums) {
    int cnt = 0;
    int maxCnt = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == 1){
            cnt++;
        } else {
            cnt = 0;
        }

        if(maxCnt < cnt){
            maxCnt = cnt;
        }
    }
    
    return maxCnt;
}