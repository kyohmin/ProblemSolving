#include <iostream>
#include <stack>

int li[1000001];
int cnt[1000001];
int result[1000001];

using namespace std;
int main(){
    stack<int> idx;

    int rep;
    cin >> rep;
    for(int i = 0; i < rep; i++){
        cin >> li[i];
        cnt[li[i]] += 1;
    }

    for(int i = 0; i < rep; i++){
        while(!idx.empty() && cnt[li[idx.top()]] < cnt[li[i]]){
            result[idx.top()] = li[i];
            idx.pop();
        }

        idx.push(i);
    }

    while(!idx.empty()){
       result[idx.top()] = -1;
       idx.pop();
    }

    for(int i= 0; i < rep; i++){
        cout << result[i] << ' ';
    }
}