#include <vector>
#include <iostream>

using namespace std;

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

int main(){
    Solution sol;
    vector<int> vec1;
    vec1.push_back(5);
    cout << sol.search(vec1, -5);
}
