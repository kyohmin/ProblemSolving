#include <iostream>
#include <string>

using namespace std;
int main(){
    int rep, wordRep;
    string word;
    cin >> rep;
    for(int i = 0; i < rep; i++){
        cin >> wordRep >> word;
        for(int j = 0; j < word.size(); j++){
            for(int k = 0; k < wordRep; k++){
                cout << word[j];
            }
        }
        cout << '\n';
    }

    return 0;
}