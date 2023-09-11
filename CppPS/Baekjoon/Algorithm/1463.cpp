#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main(){
    int n;
    cin >> n;

    vector<int> dp(n+1);
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;



    for(int i = 4; i <= n; i++){
        if(i%2 != 0 && i%3 != 0){
            dp[i] = dp[i-1] + 1;
        } else if(i%2 == 0 && i%3 == 0){
            dp[i] = min(dp[i/3] +1, dp[i/2] + 1);
        } else if(i%2 == 0){
            dp[i] = min(dp[i-1]+1, dp[i/2] +1);
        } else if(i%3 == 0){
            dp[i] = min(dp[i-1]+1, dp[i/3] +1);
        }
    }

    cout << dp[n];

}