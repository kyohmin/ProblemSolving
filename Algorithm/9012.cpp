// Parenthesis

#include <iostream>
#include <string>

using namespace std;
int main(){
    int numRow;
    cin >> numRow;
    cin.ignore();

    string sentence, answer;
    int openCounter, closeCounter;
    int currentLoc;
    for(int i = 0; i < numRow; i++){
        answer = "NO";
        openCounter = 0;
        closeCounter = 0;
        getline(cin, sentence);
        while(!sentence.empty()){
            currentLoc = sentence.front();
            if(currentLoc == ')'){
                closeCounter += 1;
                if(closeCounter > openCounter){
                    break;
                }
            } else if (currentLoc == '('){
                openCounter += 1;
            }
            sentence.erase(sentence.begin()+0);
        }

        if(openCounter == closeCounter){
            cout << "YES" << endl;
        } else {
            cout << answer << endl;
        }
    }

    return 0;
}