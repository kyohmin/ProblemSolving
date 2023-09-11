#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main(){
    string s = "bbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbccbcbcbccbbabbb";
    int n = s.size();
    int lPtr = 0, rPtr = n -1;
    while(s[lPtr] == s[rPtr] && rPtr > lPtr){
        char tmp = s[lPtr];

        while(s[lPtr] == tmp && lPtr < n){
            lPtr++;
        }

        while(s[rPtr] == tmp && rPtr > 0){
            rPtr--;
        }

        if(rPtr < lPtr){
            return 0;
        }
    }

    return lPtr -rPtr +1;
}