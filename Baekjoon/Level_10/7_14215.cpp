#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    vector<int> sticks;
    int sum;
    int stick1, stick2, stick3;
    cin >> stick1 >> stick2 >> stick3;

    sticks.push_back(stick1);
    sticks.push_back(stick2);
    sticks.push_back(stick3);

    sort(sticks.begin(),sticks.end());

    if(sticks[2] >= sticks[0] + sticks[1]) {
        sticks[2] = sticks[0] + sticks[1] -1;
    }

    sum = sticks[0] + sticks[1] + sticks[2];

    cout << sum;
}