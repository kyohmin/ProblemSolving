#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector<int> height{1,8,6,2,5,4,8,3,7};
    int left = 0, right = height.size()-1;
    int maxSize = 0;
    while(left != right){
        if(maxSize < (right - left) * min(height[left], height[right])){
            maxSize = (right - left) * min(height[left], height[right]);
        }
        if(height[left] <= height[right]) left++;
        else right--;
    }

    cout << maxSize;
}