#include <iostream>
#include <vector>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 
    vector<int> primeNum;
    bool arr[1000000+1];
    fill(arr,arr+1000001,true);

    for(int i = 2; i*i <= 1000000; i++){   // Made eratos array
        if(arr[i] != false){
            for(int j = i*i; j <= 1000000; j += i){
                arr[j] = false;
            }
        }
    }

    for(int i = 3; i <= 1000000; i++){
        if(arr[i] == true){
            primeNum.push_back(i);
        }
    }


    while(true){
        int num;
        cin >> num;

        if(num == 0) break;
        
        int curPrime, requiredPrime;
        for(int i = 0; i <= primeNum.size(); i++){
            curPrime = primeNum[i];
            requiredPrime = num - curPrime;
            if(arr[requiredPrime]){
                cout << num << " = " << curPrime << " + " << requiredPrime << '\n';
                break;
            }
        }
    }
    
}