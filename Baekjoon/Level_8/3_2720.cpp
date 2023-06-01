#include <iostream>
#include <algorithm>

using namespace std;
int main(){
    int rep;
    int cents, coin[4]{};

    cin >> rep;
    for(int i = 0; i < rep; i++){
        fill_n(coin, 4, 0);
        cin >> cents;
        if(cents / 25 > 0){
            coin[0] = cents / 25;
            cents %= 25;
        }
        if(cents / 10 > 0){
            coin[1] = cents / 10;
            cents %= 10;
        }
        if(cents / 5 > 0){
            coin[2] = cents / 5;
            cents %= 5;
        }
        
        coin[3] = cents;

        for(int i : coin){
            cout << i << ' ';
        }
        cout << '\n';
    }

    return 0;
}