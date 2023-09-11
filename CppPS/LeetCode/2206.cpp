class Solution {
public:
    bool divideArray(vector<int>& nums) {
        map<int,int> numMap;
        for(int i : nums){
            if(numMap.find(i) == numMap.end()){
                numMap.insert({i,1});
            } else {
                numMap.find(i) -> second++;
            }
        }

        for(auto i = numMap.begin(); i != numMap.end(); i++){
            if(i->second % 2 != 0){
                return false;
            }
        }

        return true;
    }
};

class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int arr[501]{};
        for(int i : nums){
            arr[i]++;
        }

        for(int i : arr){
            if(i != 0 && i%2 != 0){
                return false;
            }
        }

        return true;
    }
};