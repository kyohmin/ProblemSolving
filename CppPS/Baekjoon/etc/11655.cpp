#include <iostream>
#include <string>

using namespace std;

char rot13(char alpha){
    if(alpha == ' ') return alpha;

    int intAlpha = (int) alpha;
    
    if(intAlpha >= 65 && intAlpha <= 65+26){
        intAlpha += 13;
        if(intAlpha >= 65+26){
            intAlpha -= 26;
        }
    } else if(intAlpha >= 97 && intAlpha <= 97+26){
        intAlpha += 13;
        if(intAlpha >= 97+26){
            intAlpha -= 26;
        }
    }

    alpha = (char) intAlpha;

    return alpha;
}

int main(){
    string sentence;
    string result = "";
    getline(cin,sentence);
    for(char i : sentence){
        result += rot13(i);
    }

    cout << result;
}