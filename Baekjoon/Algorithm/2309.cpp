#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    vector<int> heights, result;
    for(int i = 0; i < 9; i++){
        int tmp;
        cin >> tmp;
        heights.push_back(tmp);
    }

    sort(heights.begin(),heights.end());

    int sum;
    int fake1;
    int fake2;

    for(int i = 0; i < 8; i++){
        for(int j = i+1; j < 9; j++){
            vector<int> result;
            sum = 0;
            fake1 = heights[i];
            fake2 = heights[j];

            for(int k = 0; k < 9; k++){
                sum += heights[k];
            }

            sum -= (fake1 + fake2);

            if(sum == 100) break;
        }
        if(sum == 100) break;
    }

    for(int i : heights){
        if(i != fake1 && i != fake2){
            cout << i << '\n';
        }
    }
}