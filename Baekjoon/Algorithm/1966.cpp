#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    int rep;
    cin >> rep;
    for(int i = 0; i < rep; i++){
        queue<pair<int,int>> printer;
        stack<int> priorityStk;
        vector<int> tmp;

        int pSize, pWhich;
        cin >> pSize >> pWhich;

        for(int i = 0; i < pSize; i++){
            int priority;
            cin >> priority;
            tmp.push_back(priority);
            printer.push({i,priority});
        }

        sort(tmp.begin(),tmp.end());
        for(int i : tmp) priorityStk.push(i);
        
        int cnt = 1;
        while(!printer.empty()){
            if(priorityStk.top() == printer.front().second){
                if(pWhich == printer.front().first) break;
                printer.pop();
                priorityStk.pop();
                cnt++;
            } else {
                auto tmpVal = printer.front();
                printer.pop();
                printer.push(tmpVal);
            }
        }

        cout << cnt << '\n';
    }
}