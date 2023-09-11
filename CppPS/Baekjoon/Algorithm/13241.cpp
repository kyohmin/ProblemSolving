#include <iostream>

using namespace std;

long long lcm(long long a, long long b){
    long long originalA = a;
    long long originalB = b;
    long long c = a % b;
    while(c != 0){
        a = b;
        b = c;
        c = a % b;
    }

    return originalA * originalB / b;    
}

int main(){
    long long a, b;
    cin >> a >> b;
    cout << lcm(a,b);
}