#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    vector<int> vector;
    int rep, tmp;

    cin >> rep;
    for(int i = 0; i < rep; i++){
        cin >> tmp;
        vector.push_back(tmp);
    }

    cout << *min_element(vector.begin(), vector.end()) << ' ' << *max_element(vector.begin(), vector.end());

    return 0;
}