#include <iostream>

using namespace std;
int main(){
    bool attendance[30] = {false};
    int tmp;
    
    for(int i = 0; i < 28; i++){
        cin >> tmp;
        attendance[tmp-1] = true;
    }

    for(int i = 0; i < 30; i++){
        if(attendance[i] == false){
            cout << i+1 << '\n';
        }
    }

    return 0;
}