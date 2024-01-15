#include <iostream>

using namespace std;
int main(){
    int n,r;
    cin >> n >> r;
    long long up = 1, downL = 1, downR = 1;
    for(int i = n; i > 1; i--){
        up *= i;
        if(r >= i){
            downL *= i;
        }
        if(n-r >= i){
            downR *= i;
        }
    }

    cout << up/(downL*downR);
}