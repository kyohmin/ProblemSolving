#include <iostream>

using namespace std;
int main(){
    int rep, tmp, original;
    cin >> original;
    rep = 2*original-1;
    for(int i = 1; i <= rep; i++){
        if(i <= (rep+1)/2){
            for(int j = 0; j < original - i; j++){   // 1 ~ mid number
                cout << ' ';
            }
            for(int j = 0; j < 2*i-1; j++){
                cout << '*';
            }
        } else {
            tmp = rep+1-i;
            for(int j = 0; j < original - tmp; j++){   // reverse mid number
                cout << ' ';
            }
            for(int j = 0; j < 2*tmp-1; j++){
                cout << '*';
            }
        }
        
        cout << '\n';
    }

    return 0;
}
