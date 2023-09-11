#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

bool order(pair<int,int> a, pair<int,int> b){
    if(a.second == b.second){
        return a.first < b.first;
    }

    return a.second > b.second;
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<int> vec;
    vector<pair<int,int>> most;
    
    int rep;
    cin >> rep;
    int sum = 0;
    for(int i = 0; i < rep; i++){
        int tmp;
        cin >> tmp;
        vec.push_back(tmp);
        sum += tmp;
    }

    // #1 Arithmetic Mean
    cout << round((double) sum / vec.size()) + 0.0 << endl;

    // Sorting for #2 ~ #3
    sort(vec.begin(),vec.end());

    // #2 Median
    int mid = vec.size()/2;
    cout << vec[mid] << '\n';

    // #3 Mode
    int cnt = 1;
    for(int i = 1; i < rep; i++){
        int prev = vec[i-1];
        if(vec[i] == prev){
            cnt++;
        } else {
            most.push_back({prev,cnt});
            cnt = 1;
        }

        if(i == rep - 1){
            most.push_back({vec[i],cnt});
        }
        
    }

    sort(most.begin(), most.end(), order);

    if(most.size() >= 2){
        if(most[0].second == most[1].second){
            cout << most[1].first << '\n';
        } else {
            cout << most[0].first << '\n';
        }
    } else {
        cout << vec[0] << '\n';
    }
    
    // #4 Range
    auto mm = minmax_element(vec.begin(),vec.end());
    cout << *mm.second - *mm.first << '\n';
}