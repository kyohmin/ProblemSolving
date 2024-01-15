#include <iostream>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int inNum1 = 0;
    int inNum2 = 0;
    int rep;

    cin >> rep;
    for(int i = 1; i <= rep; i++){
        cin >> inNum1 >> inNum2;
        cout << "Case #" << i <<": " << inNum1 + inNum2 << "\n";
    }
}