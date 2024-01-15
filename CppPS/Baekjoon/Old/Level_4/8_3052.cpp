#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    int tmp;
    vector<int> vector;
    for(int i = 0; i < 10; i++){
        cin >> tmp;
        tmp %= 42;
        if(find(vector.begin(), vector.end(), tmp) == vector.end()){
            vector.push_back(tmp);
        }
    }

    cout << vector.size();

    return 0;
}