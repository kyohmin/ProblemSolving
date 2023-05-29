#include <iostream>
#include <string>
#include <stack>

using namespace std;
int main(){
    stack<char> stack;
    string word;
    bool isPal = true;
    
    cin >> word;
    int size = word.size();
    for(int i = 0; i < size; i++){
        if(i < size/2){  // Pushing to Stack until it reaches middle
            stack.push(word[i]);
        } else {         // Comparing
            if((size % 2 != 0) && (i == size/2)){}  // Skipping middle point for odd size
            else if(word[i] == stack.top()){
                stack.pop();
            } else {
                isPal = false;
                break;
            }
        }
        
    }

    cout << (int) isPal;

    return 0;
}