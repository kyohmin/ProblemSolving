#include <iostream>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n;
    int cnt = 0;
    cin >> n;
    while(n != 1){
        if(n % 3 != 0){
            n--;
        } else if(n % 3 == 0){
            n /= 3;
        } else if(n % 2 == 0){
            n /= 2;
        }

        cnt++;
    }

    cout << cnt;
}