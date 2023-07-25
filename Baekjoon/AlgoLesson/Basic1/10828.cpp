#include <iostream>
#include <string>
#include <stack>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    stack<int> stk;
    int rep;
    cin >> rep;

    for(int i = 0; i < rep; i++){
        string word;
        cin >> word;
        if(word == "push"){
            int n;
            cin >> n;
            stk.push(n);
        } else if(word == "top"){
            if(stk.empty())
                cout << -1 << '\n';
            else
                cout << stk.top() << '\n';
        } else if(word == "size"){
            cout << stk.size() << '\n';
        } else if(word == "pop"){
            if(stk.empty())
                cout << -1 << '\n';
            else {
                cout << stk.top() << '\n';
                stk.pop();
            }
        } else if(word == "size"){
            cout << stk.size() << '\n';
        } else if(word == "empty"){
            cout << stk.empty() << '\n';
        }
    }
}