#include <iostream>
#include <string>
#include <stack>

// Understood the solution, but need to comeback and look again
// https://hsp1116.tistory.com/29

using namespace std;
int main(){
    string sen;
    int cnt = 0;
    cin >> sen;
    stack<char> stack;
    for (int i = 0; i < sen.size(); i++){
        if(sen[i] == '('){
            stack.push(sen[i]);
        } else {
            if (sen[i-1] == '('){
                stack.pop();
                cnt += stack.size();
            } else {
                stack.pop();
                cnt++;
            }
        }
    }

    cout << cnt << endl;
    
    return 0;
}