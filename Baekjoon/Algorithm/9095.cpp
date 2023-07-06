#include <iostream>

using namespace std;

int dp[12];

int recursion(int n){
    if(n == 1) return 1;
    else if(n == 2) return 2;
    else if(n == 3) return 4;

    if(dp[n]) return dp[n];

    dp[n] = recursion(n-3) + recursion(n-2) + recursion(n-1);
    
    return dp[n];
}

int main(){
    int rep;
    cin >> rep;
    for(int i = 0; i < rep; i++){
        int n;
        cin >> n;
        cout << recursion(n) << '\n';
    }
}