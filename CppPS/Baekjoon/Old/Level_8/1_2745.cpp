#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int main(){
    string inNum;
    int base;
    int idx = 0;
    int sum = 0;

    cin >> inNum >> base;
    for(int i = inNum.size()-1; i >= 0; i--){
        if('A' <= inNum[i] && inNum[i] <= 'Z'){
            sum += (inNum[i]-'A'+10)  * pow(base, idx);
        } else {
            sum += (inNum[i]-'0')  * pow(base, idx); 
        }
        idx++;
    }

    cout << sum;

}