#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main(){
    string cmd;
    int tmp;
    vector<int> queue;

    int rep;
    cin >> rep;

    for(int i = 0; i < rep; i++){
        cin >> cmd;
        if(cmd == "push"){
            cin >> tmp;
            queue.push_back(tmp);
        } else if(cmd == "pop"){
            if(queue.size() != 0){
                cout << queue.front() << endl;
                for(int i = 1; i <= queue.size(); i++){
                    queue[i-1] = queue[i];
                }
                queue.pop_back();
            } else {
                cout << -1 << endl;
            }
        } else if(cmd == "size"){
            cout << queue.size() << endl;
        } else if(cmd == "empty"){
            cout << queue.empty() << endl;
        } else if(cmd == "front"){
            if(queue.size() != 0){
                cout << queue.front() << endl;
            } else {
                cout << -1 << endl;
            }
        } else if (cmd == "back"){
            if(queue.size() != 0){
                cout << queue.back() << endl;
            } else {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}