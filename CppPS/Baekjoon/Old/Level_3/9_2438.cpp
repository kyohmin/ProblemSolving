#include <iostream>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int rep;
    cin >> rep;
    for(int i = 0; i < rep; i++){
        for(int j = 0; j < rep; j++){
            if(j < (rep - (i+1))){
                cout << ' ';
            } else {
                cout << '*';
            }
        }
        cout << "\n";
    }

    return 0;
}