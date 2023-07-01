#include <iostream>
#include <string>
#include <stack>

using namespace std;
int main(){
    string sentence;
    while(true){
        stack<char> braces;
        getline(cin,sentence);
        if(sentence == ".") break;

        string result = "yes";
        
        for(char i : sentence){
            if((i == ')' || i == ']') && braces.empty()){
                result = "no";
                break;
            }

            if(i == '(' || i == '['){
                braces.push(i);
            } else if(i == ')' && braces.top() == '('){
                braces.pop();
            } else if(i == ']' && braces.top() == '['){
                braces.pop();
            } else if(i == ')' && braces.top() != '('){
                result = "no";
                break;
            } else if(i == ']' && braces.top() != '['){
                result = "no";
                break;
            }
        }

        if(!braces.empty()){
            result = "no";
        }

        cout << result << '\n';
    }
}