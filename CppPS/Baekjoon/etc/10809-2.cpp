#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main(){
    int results[26];
    string word;
    cin >> word;

    for(int i = 0; i < 26; i++){
        char alpha =  i+97;
        if(word.find(alpha) != string::npos){
            results[i] = word.find(alpha);
        } else {
            results[i] = -1;
        }
    }

    for(int i : results){
        cout << i << ' ';
    }
}