#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool compare(string a, string b){
    if(a.length() == b.length()){
        return a < b;
    }
    return a.length() < b.length();
}

int main(){
    vector<string> strVec;

    int rep;
    cin >> rep;
    for(int i = 0; i < rep; i++){
        string tmp;
        cin >> tmp;
        if(find(strVec.begin(),strVec.end(),tmp) == strVec.end()){
            strVec.push_back(tmp);
        }
    }

    sort(strVec.begin(), strVec.end(), compare);

    for(string i : strVec){
        cout << i << '\n';
    }
}