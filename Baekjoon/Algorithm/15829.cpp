#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int m = 1234567891;
    long long r = 1;

    int len;
    string word;
    cin >> len >> word;

    long long sum = 0;

    for(int i = 0; i < len; i++){
        int tmp = (word[i] - 'a' + 1);
        sum = (sum + tmp*r) % m;
        r = (r*31) % m;
    }

    cout << sum;

}