#include <iostream>

using namespace std;
int main(){
    int total;
    int adder = 0;
    int price, amount;
    int rep;

    cin >> total;

    cin >> rep;
    for(int i = 0; i < rep; i++){
        cin >> price >> amount;
        adder += (price * amount);
    }

    if(adder == total){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}