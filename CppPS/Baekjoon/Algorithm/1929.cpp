#include <iostream>

using namespace std;
int main(){
    bool arr[1000000+1];  // As 0 and 1 index not used
    int from, to;
    cin >> from >> to;
    for(int i = 2; i <= to; i++){
        arr[i] = true;
    }

    for(int i = 2; i * i <= to; i++){
        if(arr[i] != false){
            for(int j = i*i; j <= to; j += i){
                arr[j] = false;
            }
        }
    }

    for(int i = from; i <= to; i++){
        if(arr[i] != false){
            cout << i << '\n';
        }
    }


}