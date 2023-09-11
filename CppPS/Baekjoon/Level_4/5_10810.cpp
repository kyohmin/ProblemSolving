#include <iostream>

using namespace std;
int main(){
    int numBasket, rep, tmp;
    int from, to, marble;

    cin >> numBasket;
    int basket[numBasket];

    for(int i = 0; i < numBasket; i++){
        basket[i] = 0;
    }

    cin >> rep;
    for(int i = 0; i < rep; i++){
        cin >> from;
        cin >> to;
        cin >> marble;
        for(int j = from; j <= to; j++){
            basket[j-1] = marble;
        }
    }

    for(int i : basket){
        cout << i << ' ';
    }

    return 0;
}