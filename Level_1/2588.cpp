// Recieve two numbers (both three digit)
// and shows the process of calculation

#include <iostream>

void digitCalc(int num_1, int num_2, int digit);

using namespace std;
int main(){
    int threeDigit1, threeDigit2;
    cin >> threeDigit1 >> threeDigit2;
    digitCalc(threeDigit1,threeDigit2,1);
    digitCalc(threeDigit1,threeDigit2,10);
    digitCalc(threeDigit1,threeDigit2,100);
    cout << threeDigit1*threeDigit2;

    return 0;
}

void digitCalc(int num_1, int num_2, int digit){
    int tmp_digit = digit * 10;
    cout << num_1*((num_2 % tmp_digit)/digit) << endl;
}