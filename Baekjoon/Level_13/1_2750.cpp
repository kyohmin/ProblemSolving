#include <iostream>
#include <set>

using namespace std;
int main(){
    set<int> result;
    int tmp;

    int rep;
    cin >> rep;

    for(int i = 0; i < rep; i++){
        cin >> tmp;
        result.insert(tmp);    
    }

    for(int i : result){
        cout << i << '\n';
    }
}