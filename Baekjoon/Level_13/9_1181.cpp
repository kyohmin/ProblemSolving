#include <iostream>
#include <set>
#include <algorithm>

using namespace std;
int main(){
    set<string> sortedStr;
    int rep;
    cin >> rep;
    for(int i = 0; i < rep; i++){
        string word;
        cin >> word;
        int len = word.length();
        if(len < 10){
            word = '0' + to_string(word.length()) + word;
        } else {
            word = to_string(word.length()) + word;
        }

        sortedStr.insert(word);
    }

    for(string i : sortedStr){
        cout << i.substr(2) << endl;
    }
    
}