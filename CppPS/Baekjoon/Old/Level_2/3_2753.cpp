// Finding a leap year

#include <iostream>

using namespace std;
int main(){
    int inYear;
    cin >> inYear;
    if(inYear % 400 == 0){
        cout << "1";
    } else if(inYear % 100 == 0){
        cout << "0";
    } else if(inYear % 4 == 0){
        cout << "1";
    } else {
        cout << "0";
    }

    cout << endl;

    return 0;
}