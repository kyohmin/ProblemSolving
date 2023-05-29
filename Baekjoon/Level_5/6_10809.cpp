#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main(){
    string word;
    cin >> word;
    int alpha[26];
    fill_n(alpha,26,-1);
    for(int i = 0; i < word.size(); i++){
        if(alpha[(char) word[i] - 97] == -1){
            alpha[(char) word[i] - 97] = i;
        }
    }

    for(int i : alpha){
        cout << i << ' ';
    }

    return 0;
}