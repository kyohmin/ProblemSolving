#include <iostream>
#include <algorithm>

using namespace std;
int main(){
    pair<int,int> arr[50];
    
    int rep;
    cin >> rep;
    for(int i = 0; i < rep; i++){
        cin >> arr[i].first >> arr[i].second;
    }

    for(int i = 0; i < rep; i++){
        int rank = 1;
        for(int j = 0; j < rep; j++){
            if(arr[i].first < arr[j].first && arr[i].second < arr[j].second){
                rank++;
            }
        }

        cout << rank << " ";
    }
}