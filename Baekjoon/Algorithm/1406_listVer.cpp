#include <iostream>
#include <list>
#include <string>

using namespace std;
int main(){
    string str;
    cin >> str;

    list<char> editor;
    for(auto & i : str){
        editor.push_back(i);
    }

    auto cursor = editor.end();

    int rep;
    cin >> rep;
    char tmp;
    char letter;
    while(rep--){
        cin >> letter;
        if(letter == 'L'){
            if(cursor != editor.begin()){
                cursor --;
            }
        } else if (letter == 'D'){
            if(cursor != editor.end()){
                cursor ++;
            }
        } else if(letter == 'B'){
            if(cursor != editor.begin()){
                cursor--;
                cursor = editor.erase(cursor);   // Removing and reinitializing
            }
        } else if(letter == 'P'){
            cin >> tmp;
            editor.insert(cursor, tmp);
        }
    }
    
    for(auto& i : editor){
        cout << i;
    }
}