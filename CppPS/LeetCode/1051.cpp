/*
Problem Name: 1051. Height Checker
Date        : Jan-05,2024
Link        : https://leetcode.com/problems/height-checker/description/
Difficulty  : Easy
*/

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected = heights;
        sort(expected.begin(), expected.end());
        int cnt = 0;
        for(int i=0; i<heights.size();i++){
            if(heights[i] != expected[i]) cnt++;
        }
        return cnt;
    }
};

/*
[Self Reflection]
    How the solution works: Make a new array and compare.
*/