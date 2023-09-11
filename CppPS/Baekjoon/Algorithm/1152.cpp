#include <iostream>
#include <string>

using namespace std;
int main(){
    string sentence;
    int wordCount = 0;
    char prevLetter = '\0';

    getline(cin, sentence);
    for(auto letter: sentence){
        if(prevLetter == ' ' && letter != ' '){
            wordCount += 1;
        } else if(prevLetter == '\0' && letter != ' '){
            wordCount += 1;
        }
        
        prevLetter = letter;
    }
    cout << wordCount << endl;
}