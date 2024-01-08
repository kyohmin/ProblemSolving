/*
Problem Name: 2070. Most Beautiful Item for Each Query
Date        : Jan-08,2024
Link        : https://leetcode.com/problems/most-beautiful-item-for-each-query/
Difficulty  : Medium
*/

class Solution {
    int BinarySearch(vector<vector<int>>& items, int query, vector<int> &beauty){
        int start = 0, end = items.size()-1;
        int val = 0;
        while(start <= end){
            int mid = start + (end-start)/2;
            if(query >= items[mid][0]){
                val = beauty[mid];
                start = mid+1;
            } else {
                end = mid -1;
            }
        }
        return val;
    }

public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        int n = items.size();
        vector<int> result, mxBeauty(n);
        sort(items.begin(), items.end());

        // 
        mxBeauty[0] = items[0][1];
        for(int i=1; i < n; i++){
            mxBeauty[i] = max(mxBeauty[i-1],items[i][1]);
        }

        // 
        for(int &q: queries){
            result.push_back(BinarySearch(items, q, mxBeauty));
        }

        return result;
    }
};

/*
[Self Reflection]
    Why I got wrong: Solved using brute force with O(n^2), resulting time over.
    How this solution works: Find the maximum value of each query and send it to binarySearch to find maxVal.
    What I need to remember: 1. Separate max value (mxBeauty) from finding max of query (final result).
*/