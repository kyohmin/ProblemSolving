#include <iostream>
#include <string>
#include <set>

using namespace std;
int main(){
    set<string> suffix;
    string word;
    cin >> word;
    for(int i = 0; i < word.length();i++){
        suffix.insert(word.substr(i));
    }

    for(string i : suffix){
        cout << i << '\n';
    }
}