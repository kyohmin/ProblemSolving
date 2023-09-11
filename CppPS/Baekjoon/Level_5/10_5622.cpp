#include <iostream>
#include <string>

using namespace std;
int main(){
    string sep[8]{"ABC", "DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
    string word;
    char tmp;
    int sum = 0;

    cin >> word;
    for(char i : word){
        tmp = i;
        for(int j = 0; j < 8; j++){
            if(sep[j].find(tmp) != string::npos){
                sum += j+3;
                break;
            }
            
        }
    }

    cout << sum;

    return 0;
}