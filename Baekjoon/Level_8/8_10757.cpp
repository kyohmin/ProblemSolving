#include <iostream>
#include <stack>

using namespace std;
int main(){
    stack<int> num1, num2, result;
    string char1,char2;
    cin >> char1 >> char2;
    for(char i : char1){
        int a = i - '0';
        num1.push(a);
    }
    for(char i : char2){
        int a = i - '0';
        num2.push(a);
    }

    int upDigit = 0;
    int rep = 0;
    rep = (char1.size() > char2.size() ? char1.size() : char2.size());
    for(int i = 0; i < rep; i++){
        int n1 = 0, n2 = 0;

        if(!num1.empty()){
            n1 = num1.top();
            num1.pop();
        }
        if(!num2.empty()){
            n2 = num2.top();
            num2.pop();
        }

        result.push(((n1 + n2 + upDigit) % 10));
        upDigit = (n1 + n2 + upDigit) / 10;
    }
    if(upDigit == 1){
        result.push(upDigit);
    }

    rep = result.size();
    for(int i = 0; i < rep; i++){
        cout << result.top();
        result.pop();
    }

}