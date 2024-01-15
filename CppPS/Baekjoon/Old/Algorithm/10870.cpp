#include <iostream>

using namespace std;
int main(){
    long long memo[21]{};
    int n;
    cin >> n;
    memo[1] = 1;
    memo[2] = 1; 
    for(int i = 3; i <= n; i++){
        if(memo[i] == 0){
            memo[i] = memo[i-1] + memo[i-2];
        }
    }

    cout << memo[n];
    
}