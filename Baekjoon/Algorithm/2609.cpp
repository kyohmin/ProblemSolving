#include <iostream>

using namespace std;

int gcd(int a, int b){   //Euclidean algorithm 
    int c = a % b;
    while(c != 0){
        a = b;
        b = c;
        c = a % b;
    }
    return b;
}

int lcm(int a, int b){    // lcm * gcd = a*b   -> lcm = a*b / gcd
    return (a*b) / gcd(a,b);
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << gcd(a,b) << '\n';
    cout << lcm(a,b) << '\n';
}