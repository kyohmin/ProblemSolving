#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main(){
    string sen;
    int size = 26;
    int asciiUpperZero = 65;
    int cnt[size];

    for(int i = 0; i < size; i++){
        cnt[i] = 0;
    }

    getline(cin, sen);
    for(char i : sen){
        i = toupper(i);
        cnt[i-asciiUpperZero]++;
    }

    int max = -1;
    int idx = -1;
    bool hasSame = false;
    for(int i = 0; i < size; i++){
        if(cnt[i] == max){
            hasSame = true;
        } else if(cnt[i] > max){
            hasSame = false;
            max = cnt[i];
            idx = i;
        }
    }

    if(hasSame == true){
        cout << '?';
    } else {
        cout << (char) (idx + asciiUpperZero);
    }
    
    return 0;
}