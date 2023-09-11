#include <iostream>

using namespace std;
int main(){
    int arr[9][9];
    int max = -1;
    int iIdx, jIdx;
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            cin >> arr[i][j];
            if(max < arr[i][j]){
                iIdx = i+1;       // +1 as index starts at 0
                jIdx = j+1;       // +1 as index starts at 0
                max = arr[i][j];
            }
        }
    }

    cout << max << '\n' << iIdx << ' ' << jIdx;
}