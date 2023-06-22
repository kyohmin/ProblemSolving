#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    unordered_set<string> differentValues;
    string word;
    cin >> word;
    for(int i = 0; i < word.size(); i++){
        for(int j = 1; j < word.size()-i+1; j++){
            differentValues.insert(word.substr(i,j));
        }
    }

    cout << differentValues.size();

}