#include <iostream>

using namespace std;
int main(){
    int num;
    int adder = 0;
    cin >> num;
    for(int i = 1; i <= num; i++){
        adder += i;
    }

    cout << adder << endl;

    return 0;
}