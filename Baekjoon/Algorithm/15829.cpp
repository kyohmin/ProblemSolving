#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // const int m = 1234567891;
    const int r = 31;

    int len;
    string word;

    cin >> len >> word;

    long long result;

    for(int i = 0; i < len; i++){
        long long num = word[i] - 96;
        result += num * pow(r,i);
    }

    cout << result;
}