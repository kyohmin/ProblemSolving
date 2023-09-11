#include <iostream>
#include <string>

using namespace std;
int main(){
    int result;
    int minNum;

    int num;
    cin >> num;

    for(int i = 1; i <= num; i++){
        string strNum = to_string(i);
        int result = i;
        for(int j = 0; j < strNum.size(); j++){
            string digit(1,strNum[j]);
            result += stoi(digit);
        }
        if(result == num){
            minNum = i;
            break;
        }

        if(i == num){
            minNum = 0;
        }
    }

    cout << minNum;
}