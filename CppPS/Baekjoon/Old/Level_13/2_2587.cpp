#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    vector<int> vec;

    for(int i = 0; i < 5; i++){
        int tmp;
        cin >>  tmp;
        vec.push_back(tmp);
    }

    sort(vec.begin(),vec.end());

    int avg = 0;
    for(int i : vec){
        avg += i;
    }
    avg /= vec.size();

    int midPoint = vec[2];

    cout << avg << '\n';
    cout << midPoint << '\n';
}