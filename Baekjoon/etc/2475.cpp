#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int a,b,c,d,e;
    int result;
    cin >> a >> b >> c >> d >> e;
    result = pow(a,2) + pow(b,2) + pow(c,2) + pow(d,2) + pow(e,2);
    result %= 10;

    cout << result;
}