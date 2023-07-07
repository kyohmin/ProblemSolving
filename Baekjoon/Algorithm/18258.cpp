#include <iostream>
#include <queue>
#include <string>

using namespace std;
int main(){
    queue<int> queue;
    int rep;
    cin >> rep;
    for(int i = 0; i < rep; i++){
        string tmp;
        cin >> tmp;
        if(tmp == "push"){
            int tmpNum;
            cin >> tmpNum;
            queue.push(tmpNum);
        } else if(tmp == "pop"){
            if(queue.empty()){
                cout << "-1" << '\n';
            } else {
                cout << queue.front() << '\n';
                queue.pop();    
            }
        } else if(tmp == "size"){
            cout << queue.size() << '\n';
        } else if(tmp == "empty"){
            cout << queue.empty() << '\n';
        } else if(tmp == "front"){
            if(queue.empty()) {
                cout << "-1" << '\n';
            } else {
                cout << queue.front() << '\n';
            }
            
        } else if(tmp == "back"){
            if(queue.empty()) {
                cout << "-1" << '\n';
            } else {
                cout << queue.back() << '\n';
            }
        }
    }
}