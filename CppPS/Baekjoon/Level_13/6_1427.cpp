#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    vector<int> digits;
    int num;
    cin >> num;

    while(num != 0){
        digits.push_back(num%10);
        num /= 10;
    }

    sort(digits.rbegin(),digits.rend());

    for(int i : digits){
        cout << i;
    }

}