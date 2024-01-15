// Reversing words

#include <iostream>
#include <sstream>
#include <string>

using namespace std;
int main(){
    int numSen;
    string sentence, word;

    cin >> numSen;
    cin.ignore();
    for(int i = 0; i < numSen; i++){
        getline(cin, sentence);
        istringstream iss(sentence);
        while (getline(iss, word, ' ')){
            while(!word.empty()){
                cout << word.back();
                word.pop_back();
            }
            cout << " ";
            
        }

        cout << endl;
    }
    
    return 0;
}