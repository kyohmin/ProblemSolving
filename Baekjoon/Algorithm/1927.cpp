#include <iostream>
#include <queue>
#include <vector>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    priority_queue<int,vector<int>,greater<int>> minQ;
    
    int rep;
    cin >> rep;
    for(int i = 0; i < rep; i++){
        int val;
        cin >> val;
        if(val == 0){
            if(minQ.empty()) cout << 0 << '\n';
            else{
                cout << minQ.top() << '\n';
                minQ.pop();
            }
        } else {
            minQ.push(val);
        }
    }
}