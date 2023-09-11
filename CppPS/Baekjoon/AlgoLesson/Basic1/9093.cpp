#include <iostream>
#include <string>
#include <stack>

using namespace std;
int main(){
    int rep;
    cin >> rep;
    cin.ignore();

    // Rep for test cases
    for(int i = 0; i < rep; i++){
        stack<char> stk;
        string sentence;
        getline(cin,sentence);

        // Cycle through the word
        for(int i = 0; i < sentence.size(); i++){
            char letter = sentence[i];

            if(letter == ' ' || i == sentence.size()-1){ // Flush out
                if(sentence.size()-1 == i) stk.push(letter);
                while(!stk.empty()){
                    cout << stk.top();
                    stk.pop();
                }
                cout << ' ';
            } else {  // Letter comes in
                stk.push(letter);
            }
        }
        cout << '\n';
    }
}