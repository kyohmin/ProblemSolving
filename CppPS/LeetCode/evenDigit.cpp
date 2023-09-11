#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;
int main(){
    vector<int> vec{1,22,333,4444,5555};
    int cnt = 0;
    for(int i : vec){
        if(to_string(i).size() %2 == 0){
            cnt++;
        }
    }

    sort(vec.begin(), vec.end());

    cout << cnt;
}