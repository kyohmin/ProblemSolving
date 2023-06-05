#include <iostream>
#include <string>

using namespace std;
int main(){
    int rep;
    cin >> rep;
    for(int i = 0; i < rep; i++){
        string ox;
        int row = 0;
        int sum = 0;
        cin >> ox;

        for(char i : ox){
            if(i == 'X'){
                row = 0;
            } else {
                row++;
                sum += row;
            }
        }

        cout << sum << '\n';
    }
}