#include <iostream>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int top, bottom;

    top = a*d + c*b;
    bottom = b*d;

    for(int i = bottom / 2; i > 0; i--){
        if(bottom % i == 0 && top % i == 0){
            top = top / i;
            bottom = bottom / i;
        }
    }

    cout << top << " " << bottom << endl;
}