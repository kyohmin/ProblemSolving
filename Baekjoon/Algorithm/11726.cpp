#include <iostream>

using namespace std;
int main(){
    long long dp[1002]{};

    int n;
    cin >> n;
    int result = 0;
    dp[1] = 1;
    dp[2] = 1;
    for(int i = 3; i <= n+1; i++){
        if(!dp[i]){
            dp[i] = (dp[i-1] + dp[i-2]);
            dp[i] %= 10007;
        }
    }

    cout << dp[n+1] << '\n';
}