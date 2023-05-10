// Comparing two numbers

#include <iostream>

using namespace std;
int main(){
    int A,B;
    cin >> A >> B;
    if(A>B){
        cout << ">";
    } else if(A<B){
        cout << "<";
    } else if(A==B){
        cout << "==";
    }

    cout << endl;

    return 0;
}