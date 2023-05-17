#include <iostream>

using namespace std;
int main(){
    int inNum;
    cin >> inNum;
    int rep = inNum/4;
    for(int i = 0; i < rep; i++){
        cout << "long ";
    }

    cout << "int" << endl;

    return 0;
}