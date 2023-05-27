#include <iostream>
#include <stack>

using namespace std;
int main(){
    stack<int> stack;
    int basketSize;
    int from, to;
    int rep;

    cin >> basketSize >> rep;
    int *basket= new int[basketSize];
    for(int i = 0; i < basketSize; i++){    // Initialize array with num
        basket[i] = i+1;
    }

    for(int i = 0; i < rep; i++){    // Repeat
        cin >> from >> to;
        from -= 1;
        to -= 1;
        for(int j = from; j <= to; j++){
            stack.push(basket[j]);
        }
        for(int j = from; j <= to; j++){
            basket[j] = stack.top();    // As stack stored index value
            stack.pop();
        }
    }

    for(int i = 0; i < basketSize; i++){
        cout << basket[i] << ' ';
    }

    return 0;
}