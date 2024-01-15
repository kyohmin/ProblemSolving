#include <iostream>

using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int arr[n][m];
    fill(arr[0],arr[0]+n*m,0);

    int val;
    for(int i = 0; i < 2; i++){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> val;
                arr[i][j] += val;
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}


