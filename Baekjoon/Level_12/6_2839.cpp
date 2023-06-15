#include <iostream>

using namespace std;
int main(){
    int sugar;
    cin >> sugar;

    int cnt = 0;

    while(true){
        if(sugar <= 0) break;

        if(sugar % 5 != 0){
            sugar -= 3;
        } else {
            cnt += sugar/5;
            break;
        }
        cnt++;
    }
    if(sugar < 0) cout << -1;
    else cout << cnt;
}