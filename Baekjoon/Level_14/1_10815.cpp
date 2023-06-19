#include <iostream>
#include <set>
#include <algorithm>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    set<int> nSet;
    
    int repN;
    cin >> repN;
    for(int i = 0; i < repN; i++){
        int tmp;
        cin >> tmp;
        nSet.insert(tmp);
    }

    int repM;
    cin >> repM;
    for(int i = 0; i < repM; i++){
        int tmp;
        cin >> tmp;
        if(nSet.find(tmp) != nSet.end()){
            cout << 1 << " ";
        } else {
            cout << 0 << " ";
        }
    }

}