#include <iostream>
#include <string>
#include <vector>
#include <string>

using namespace std;
int main(){
    vector<long long> vec;
    vec.push_back(1);
    vec.push_back(1);
    vec.push_back(1);

    int n;
    cin >> n;

    for(int i = 3; i <= n; i++){
        if(vec.size() == i){
            vec.push_back(vec[i-1] + vec[i-2]);
        }
    }

    cout << vec[n];
}