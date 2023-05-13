#include <iostream>
#include <vector>
#include <stack>

using namespace std;
int main(){
    vector<char> results;
    stack<int> stack;
    int maxInt = 0;
    int current = 0;
    int rep, inNum;
    bool valid = true;

    stack.push(0); // Initialization

    cin >> rep;
    for(int i = 0; i < rep; i++){
        cin >> inNum;
        while(maxInt < inNum){
            maxInt += 1;
            stack.push(maxInt);
            results.push_back('+');
            current +=1;
        }

        // ======= I thought it was needed ====
        // while (current > inNum){
        //     stack.pop();
        //     results.push_back('-');
        //     current -= 1;
        // }
        
        if(stack.top() == inNum){
            stack.pop();
            results.push_back('-');
            current -= 1;
        } else {
            valid = false;
        }
    }

    if (valid)
    {
        rep = results.size();
        for(int i = 0; i < rep; i++){
            cout << results[i] << endl;
        }
    } else {
        cout << "NO" << endl;
    }
    
    
}