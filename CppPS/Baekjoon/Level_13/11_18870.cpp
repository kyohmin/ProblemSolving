#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> original;
    vector<int> result;
    int rep;
    cin >> rep;

    for(int i = 0; i < rep; i++){
        int tmp;
        cin >> tmp;

        original.push_back(tmp);
        result.push_back(tmp);
    }

    sort(result.begin(),result.end());
    result.erase(unique(result.begin(),result.end()),result.end());

    for(int i = 0; i < rep; i++){
        auto it = lower_bound(result.begin(),result.end(),original[i]);
        cout << it - result.begin() << ' ';
    }
}