#include <iostream>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    int inNum1 = 0, inNum2 = 0;
    int rep;
    cin >> rep;
    for(int i = 0; i < rep; i++){
        cin >> inNum1 >> inNum2;
        cout << inNum1 + inNum2 << "\n";
    }

    return 0;
}