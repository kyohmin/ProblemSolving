#include <iostream>
#include <stack>

using namespace std;
int main(){
    stack<int> numbers;

    int rep;
    cin >> rep;
    for(int i = 0; i < rep; i++){
        int tmp;
        cin >> tmp;
        if(tmp != 0){
            numbers.push(tmp);
        } else {
            numbers.pop();
        }
    }

    long long result = 0;
    while(!numbers.empty()){
        result += numbers.top();
        numbers.pop();
    }

    cout << result;
    
}