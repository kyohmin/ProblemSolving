#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>

using namespace std;


int main(){
    map<int,int> numMap;
    int nums[3,2,3,2,2,2];
    for(int i : nums){
        if(numMap.find(i) == numMap.end()){
            numMap.insert(i,1);
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