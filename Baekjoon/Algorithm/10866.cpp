#include <iostream>
#include <deque>
#include <string>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int rep, tmp;
    string cmd;
    deque<int> deque;

    cin >> rep;
    for(int i = 0; i < rep; i++){
        cin >> cmd;
        if(cmd == "push_front"){
            cin >> tmp;
            deque.push_front(tmp);
        } else if(cmd == "push_back"){
            cin >> tmp;
            deque.push_back(tmp);
        } else if(cmd == "pop_front"){
            if(deque.size() == 0){
                cout << -1 << '\n';
            } else {
                cout << deque.front() << '\n';
                deque.pop_front();
            }
        } else if(cmd == "pop_back"){
            if(deque.size() == 0){
                cout << -1 << '\n';
            } else {
                cout << deque.back() << '\n';
                deque.pop_back();
            }
        } else if(cmd == "size"){
            cout << deque.size() << '\n';
        } else if(cmd == "empty"){
            cout << deque.empty() << '\n';
        } else if(cmd == "front"){
            if(deque.size() == 0){
                cout << -1 << '\n';
            } else {
                cout << deque.front() << '\n';
            }
        } else if(cmd == "back"){
            if(deque.size() == 0){
                cout << -1 << '\n';
            } else {
                cout << deque.back() << '\n';
            }
        }
    }

    return 0;
}