#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    int num, index;
    vector<int> divisorVec;

    cin >> num >> index;

    for(int i = 1; i <= num; i++){
        int tmp = num%i;
        if(tmp == 0 && find(divisorVec.begin(),divisorVec.end(),tmp) == divisorVec.end()){
            divisorVec.push_back(i);
        }
    }

    sort(divisorVec.begin(),divisorVec.end());
    

    if(divisorVec.size() >= index){
        cout << divisorVec.at(index -1);
    } else {
        cout << 0;
    }

}