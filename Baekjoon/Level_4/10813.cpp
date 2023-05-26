#include <iostream>

using namespace std;
int main(){
    int numBasket;
    cin >> numBasket;

    int basket[numBasket];

    for(int i = 0; i < numBasket; i++){
        basket[i] = i;
    }

    int rep, tmp, b1, b2;
    cin >> rep;
    for(int i = 0; i < rep; i++){
        cin >> b1 >> b2;
        tmp = basket[b1-1];
        basket[b1-1] = basket[b2-1];
        basket[b2-1] = tmp;
    }

    for(int i : basket){
        cout << i+1 << ' ';
    }

    return 0;
}