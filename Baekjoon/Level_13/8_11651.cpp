#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int,int> a, pair<int,int> b){
    if(a.second == b.second){
        return a.first < b.first;
    }

    return a.second < b.second;
}

int main(){
    pair<int,int> coor;
    vector<pair<int,int>> vec;

    int rep;
    cin >> rep;

    for(int i = 0; i < rep; i++){
        int x, y;
        cin >> x >> y;
        coor = make_pair(x,y);
        vec.push_back(coor);
    }

    sort(vec.begin(),vec.end(),compare);

    for(pair<int,int> i : vec){
        cout << i.first << " " << i.second << '\n';
    }

}