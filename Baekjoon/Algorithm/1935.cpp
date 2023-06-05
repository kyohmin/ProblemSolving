#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;
int main(){
    // Declaration and receiving input
    char expression[4]{'+','*','-','/'};
    int sizeAlpha, alpha[26]{};
    stack<double> stack;
    string problem;

    cin >> sizeAlpha;
    cin >> problem;
    for(int i = 0; i < sizeAlpha; i++){
        cin >> alpha[i];
    }

    // logic
    for(char i : problem){
        char *p = find(expression, expression + 4, i);
        if(p != (expression+4)){ // If it is a expression
            // Declaration
            double tmp1, tmp2, result;
            tmp2 = stack.top(); // Last value
            stack.pop();
            tmp1 = stack.top(); // Last value -1
            stack.pop();

            // calculation
            if(*p == '+'){
                result = tmp1 + tmp2;
            } else if(*p == '-'){
                result = tmp1 - tmp2;
            } else if(*p == '*'){
                result = tmp1 * tmp2;
            } else if(*p == '/'){
                result = (double) tmp1 / tmp2;
            }

            stack.push(result);
            
        } else { // If i == alphabet
            int val = alpha[(int) i - 'A'];
            stack.push(val);
        }
    }

    // Result output
    cout << fixed;
    cout.precision(2);

    cout << stack.top() << '\n';

    return 0;
}