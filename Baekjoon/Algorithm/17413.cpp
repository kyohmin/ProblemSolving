#include <iostream>
#include <string>
#include <deque>

using namespace std;
int main(){
    string sen;
    getline(cin,sen);
    deque<char> deque;
    bool inSign = false;

    for(char i : sen){
        if(i == '<' || (inSign && i != '>')){  // if < == input, don't flip
            deque.push_back(i);
            inSign = true;
        } else if(i == '>'){
            deque.push_back(i);
            while(deque.size() != 0){
                cout << deque.front();
                deque.pop_front();
            }
            inSign = false;
        } else if(i != ' '){   // if it's just a letter, flip it
            deque.push_front(i);
        } else if(i == ' ' || i == '\n'){
            while (deque.size() != 0){
                cout << deque.front();
                deque.pop_front();
            }
            cout << ' ';
            
        }
    }
    while (deque.size() != 0){   // Clear out all remaining data
        cout << deque.front();
        deque.pop_front();
    }
}