#include <iostream>
#include <stack>

using namespace std;
int main(){
    stack<char> results;
    int number;
    int base;

    cin >> number >> base;
    while(number != 0){
        int tmp = number % base;
        if(tmp > 9){
            tmp = tmp -10 + 'A';
            results.push(tmp);
        } else {
            tmp = tmp + '0';
            results.push(tmp);
        }

        number /= base;
    }

    while(!results.empty()){
        cout << results.top();
        results.pop();
    }
}