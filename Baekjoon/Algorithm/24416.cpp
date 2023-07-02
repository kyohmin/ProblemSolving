#include <iostream>

using namespace std;
int fibCnt = 1;

int fib(int n){
    if(n <= 2){
        return 1;
    }
    fibCnt++;
    return fib(n-1) + fib(n-2);
}



int main(){
    int n;
    cin >> n;
    fib(n);

    cout << fibCnt << " " << n-2;
}