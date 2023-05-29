#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int toInt(string i);

int main(){
    string inNum1, inNum2;
    int num1, num2;
    cin >> inNum1 >> inNum2;
    
    num1 = toInt(inNum1);
    num2 = toInt(inNum2);

    if(num1 > num2){
        cout << num1;
    } else {
        cout << num2;
    }

}

int toInt(string i){
    reverse(i.begin(), i.end());
    return stoi(i);
}