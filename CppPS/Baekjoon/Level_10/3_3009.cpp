#include <iostream>

using namespace std;
int main(){
    int x[3], y[3], xAnswer, yAnswer;
    for(int i =0; i < 3; i++){
        cin >> x[i] >> y[i];
    }

    if(x[0] == x[1]){
        xAnswer = x[2];
    } else if (x[0] == x[2]){
        xAnswer = x[1];
    } else {
        xAnswer = x[0];
    }

    if(y[0] == y[1]){
        yAnswer = y[2];
    } else if (y[0] == y[2]){
        yAnswer = y[1];
    } else {
        yAnswer = y[0];
    }

    cout << xAnswer << ' ' << yAnswer;
}