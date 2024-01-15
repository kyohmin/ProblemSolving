#include <iostream>
#include <string>

using namespace std;
int main(){
    int cnt[10]{};
    int a, b, c;
    string num;
    cin >> a >> b >> c;

    num = to_string(a*b*c);
    for(char i : num){
        cnt[i-'0']++;
    }

    for(int i : cnt){
        cout << i << '\n';
    }
}