#include <iostream>

using namespace std;
int main(){
    int rep, sum = 0;
    char tmp;
    cin >> rep;
    for(int i = 0; i < rep; i++){
        cin >> tmp;
        sum += (int) tmp - 48;
    }

    cout << sum;

}