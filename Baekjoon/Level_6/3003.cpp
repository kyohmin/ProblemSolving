#include <iostream>

using namespace std;
int main(){
    int chess[6]{1,1,2,2,2,8};
    int have;
    for(int i = 0; i < 6; i++){   //required - have
        cin >> have;
        chess[i] -= have;
    }

    for(int i : chess){
        cout << i << ' ';
    }

    return 0;
}