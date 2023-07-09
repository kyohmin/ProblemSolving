#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector<pair<int,int>> vec;
    vector<int> record;
    int rep;
    cin >> rep;
    for(int i = 0; i < rep; i++){
        int weight, height;
        cin >> weight >> height;
        vec.push_back({weight,height});
    }

    for(int i = 0; i < rep; i++){
        int cnt = 0;
        for(int j = 0; j < rep; j++){
            if(i != j && vec[i].first > vec[j].first && vec[i].second > vec[j].second){
                cnt++;
            }
        }
        record.push_back(cnt);
    }

    for(int i : record){
        cout << i << endl;
    }
}