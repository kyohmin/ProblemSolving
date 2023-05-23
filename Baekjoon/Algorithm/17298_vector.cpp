#include <iostream>
#include <vector>

using namespace std;
int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int sizeVec;
    vector<int> vector;

    cin >> sizeVec;

    int tmp;
    for (int i = 0; i < sizeVec; i++){
        cin >> tmp;
        vector.push_back(tmp);
    }

    for(int i = 0; i < sizeVec-1; i++){
        for(int j = i+1; j < sizeVec; j++){
            if(vector[i] < vector[j]){
                cout << vector[j];
                break;
            } else if(j == sizeVec-1){
                cout << -1;
            }
        }
        cout << ' ';
    }

    cout << -1;

    return 0;
}