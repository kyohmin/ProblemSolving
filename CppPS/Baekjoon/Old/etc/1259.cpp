#include <iostream>
#include <string>
#include <stack>

using namespace std;
int main(){
    stack<char> stack;
    string word;
    while(true){
        cin >> word;
        string result = "yes";
        int len = word.length();
        int half = len/2;
        if(word == "0") break;
        
        for(int i = 0; i < half; i++){
            stack.push(word[i]);
        }
        if(len % 2 != 0) half += 1;

        for(int i = half; i < len; i++){
            if(stack.top() == word[i]){
                stack.pop();
                continue;
            } else {
                result = "no";
                break;
            }
        }

        cout << result << '\n';
    }
}