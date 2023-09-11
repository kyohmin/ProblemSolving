#include <iostream>

using namespace std;
int main(){
    long long n;
    cin >> n;
    long long sum = 0;
    for(int i = 0; i < n; i++){
        for(int j =i+1; j < n; j++){
            sum ++;
        }
    }

    cout << sum << endl;
    cout << 2;
}