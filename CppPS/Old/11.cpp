class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size()-1;
        int maxSize = 0;
        while(left != right){
            if(maxSize < (right - left) * min(height[left], height[right])){
                maxSize = (right - left) * min(height[left], height[right]);
            }
            if(height[left] <= height[right]) left++;
            else right--;
        }

        return maxSize;
    }
};