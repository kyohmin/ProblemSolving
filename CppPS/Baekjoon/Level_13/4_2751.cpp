#include <iostream>
#include <set>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    set<int> result;
    int rep;
    cin >> rep;
    for(int i = 0; i < rep; i++){
        int tmp;
        cin >> tmp;
        result.insert(tmp);
    }

    for(int i : result){
        cout << i << '\n';
    }
}