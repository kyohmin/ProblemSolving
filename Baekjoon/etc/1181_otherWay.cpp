#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool compare(string a, string b){
    if(a.length() == b.length()){
        for(int i = 0; i < a.length(); i++){
            if(a[i] == b[i]){
                continue;
            }
            return a[i] < b[i];
        }
    }
    return a.length() < b.length();
}

int main(){
    vector<string> strVec;
    vector<string> result;

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
        cout << i << endl;
    }
}