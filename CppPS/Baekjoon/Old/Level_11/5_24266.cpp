#include <iostream>

using namespace std;
int main(){
    long long n;
    cin >> n;
    long long sum = 0;
    for(int i = 1; i <= n; i++){
        for(int j =1; j <= n; j++){
            for(int k = 1; k <= n; k++){
                sum++;
            }
        }
    }

    cout << sum << endl;
    cout << 3;
}