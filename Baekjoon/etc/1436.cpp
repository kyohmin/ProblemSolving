#include <iostream>
#include <string>

using namespace std;
int main(){
    int n, i=0;
    int cnt = 0;

    cin >> n;
    
    while(cnt != n){
        char pprev{}, prev{};
        i++;
        string str = to_string(i);
        for(int j = 0; j < str.length();j++){
            if(str[j] == '6' && str[j] == prev && str[j] == pprev){
                cnt++;
                break;
            }

            pprev = prev;
            prev = str[j];
        }
    }

    cout << i;
}