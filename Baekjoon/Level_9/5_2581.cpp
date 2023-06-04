#include <iostream>

using namespace std;
int main(){
    int from, to;
    int cnt;
    int min = 10001;
    int sum = 0;
    cin >> from >> to;
    for(int i = from; i <= to; i++){
        cnt = 0;
        for(int j = 1; j <= i; j++){
            if(i % j == 0){
                cnt++;
            }
        }

        if(cnt == 2){
            if(min > i){
                min = i;
            }
            sum += i;
        }
    }

    if(min != 10001){
        cout << sum << '\n';
        cout << min << '\n';
    } else {
        cout << -1 << '\n';
    }
    

    return 0;
}