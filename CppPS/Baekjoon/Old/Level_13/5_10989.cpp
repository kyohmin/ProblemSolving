#include <iostream>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[10001]{};
    int rep;
    cin >> rep;

    for(int i = 0; i < rep; i++){
        int tmp;
        cin >> tmp;

        arr[tmp]++;
    }

    for(int i = 0; i < 100001; i++){
        for(int j = 0; j < arr[i]; j++){
            cout << i << '\n';
        }
    }
}