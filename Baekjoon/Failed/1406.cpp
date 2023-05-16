#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main(){
    vector<char> sentence;
    string inSentence;
    int cursor = 0;

    cin >> inSentence;
    for(char i : inSentence){
        sentence.push_back(i);
        cursor ++;
    }

    int rep;
    char val;
    cin >> rep;
    for(int i = 0; i < rep; i++){
        cin >> val;
        if(val == 'L'){
            if(cursor != 0){
                cursor -= 1;
            }
        } else if (val == 'D'){
            if(cursor != sentence.size()){
                cursor += 1;
            }
        } else if (val == 'B'){
            if(cursor != 0){
                sentence.erase(sentence.begin() + (cursor-1));
                cursor -= 1;
            }
        } else if (val == 'P'){
            cin >> val;
            sentence.insert(sentence.begin() + (cursor),val);
            cursor +=1;
        }
    }

    for(char i : sentence){
        cout << i;
    }
 }