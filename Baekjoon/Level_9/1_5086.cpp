#include <iostream>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int num1, num2;
    while(true){
        cin >> num1 >> num2;
        if(num1 == 0 && num2 == 0){
            break;
        }

        if(num1 < num2 && num2 % num1 == 0){
            cout << "factor" << endl;
        } else if(num1 > num2 && num1 % num2 == 0){
            cout << "multiple" << endl;
        } else {
            cout << "neither" << endl;
        }

    }

    return 0;
}