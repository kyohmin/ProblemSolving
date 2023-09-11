#include <iostream>
#include <stack>

int original[1000000];

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    
    stack<int> indexStack;

    int rep;
    cin >> rep;
    // Inserting Data
    for(int i = 0; i < rep; i++){
        cin >> original[i];
    }

    for(int i = 0; i < rep; i++){
        while(!indexStack.empty() && original[indexStack.top()] < original[i]){
            original[indexStack.top()] = original[i];
            indexStack.pop();
        }

        indexStack.push(i);
    }

    // Assigning -1 to remaing numbers in stack
    while(!indexStack.empty()){
        original[indexStack.top()] = -1;
        indexStack.top();
        indexStack.pop();
    }

    for(int i = 0; i < rep; i++){
        cout << original[i] << ' ';
    }
    
}