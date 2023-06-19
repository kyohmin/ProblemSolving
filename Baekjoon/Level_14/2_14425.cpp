#include <iostream>
#include <set>
#include <string>

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    set<string> stringSet;
    
    int repN, repM;
    cin >> repN >> repM;

    for(int i = 0; i < repN; i++){
        string tmp;
        cin >> tmp;
        stringSet.insert(tmp);
    }

    int counter = 0;
    for(int i = 0; i < repM; i++){
        string tmp;
        cin >> tmp;
        if(stringSet.find(tmp) != stringSet.end()){
            counter++;
        }
    }

    cout << counter << '\n';
}