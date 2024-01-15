/*
Problem Name: 2805. 나무자르기
Date        : Jan-01,2024
Link        : https://www.acmicpc.net/problem/2805
Difficulty  : Silver 2
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long rep, m;
    vector<int> trees;
    cin >> rep >> m;

    for(int i=0; i<rep; i++){
        int x;
        cin >> x;
        trees.push_back(x);
    }

    sort(trees.begin(), trees.end());

    long long start = 0;
    long long end = trees.back();

    long long result;

    while(start <= end){
        long long sum = 0;
        long long mid = (start + end) / 2;

        for(int i = 0; i < rep; i++){
            if(trees[i] - mid > 0) sum += trees[i] - mid;
        }

        if(sum >= m){
            result = mid;
            start = mid+1;
        } else {
            end = mid-1;
        }

    }


cout << result;
    return 0;
}

/*
[Self Reflection]
    How the solution works: Repeat binary search and cut trees.
                            Then check if the trees have less or more than expectation.
*/