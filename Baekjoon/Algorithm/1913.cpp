#include <iostream>

using namespace std;

int lcm(int a, int b){
    int originalA = a;
    int originalB = b;
    int c = a % b;
    while(c != 0){
        a = b;
        b = c;
        c = a % b;
    }

    return (originalA*originalB) / b;
}

int main(){
    int rep;
    cin >> rep;
    for(int i = 0; i < rep; i++){
        int a, b;
        cin >> a >> b;
        cout << lcm(a,b) << '\n';
    }
    
}