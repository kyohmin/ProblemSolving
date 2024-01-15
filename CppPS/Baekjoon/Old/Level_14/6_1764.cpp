#include <iostream>
#include <string>
#include <set>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    set<string> nHeardSet, result;

    int nHeard, nSaw;
    cin >> nHeard >> nSaw;
    for(int i = 0; i < nHeard; i++){
        string name;
        cin >> name;
        nHeardSet.insert(name);
    }
    
    for(int i = 0; i < nSaw; i++){
        string name;
        cin >> name;
        if(nHeardSet.find(name) != nHeardSet.end()){
            result.insert(name);
        }
    }

    cout << result.size() << '\n';
    for(string name : result){
        cout << name << '\n';
    }
}