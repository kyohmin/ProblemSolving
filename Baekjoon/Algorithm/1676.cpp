#include <iostream>

using namespace std;
int main(){
    int n;
    cin >> n;
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(i % 125 == 0) cnt+=3;
        else if(i % 25 == 0) cnt += 2;
        else if(i % 5 == 0) cnt += 1;
    }

    cout << cnt;
}