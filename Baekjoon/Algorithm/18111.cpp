#include <iostream>

using namespace std;
int main(){
    int arr[500][500]{};
    int m, n, b;
    cin >> n >> m >> b;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    

    cout << minMaxPair.first() << endl;
}