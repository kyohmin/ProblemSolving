#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector<int> primeNum;
    int numOfPrime = 0;
    int rep;
    cin >> rep;
    for(int i = 0; i < rep; i++){
        int tmp;
        cin >> tmp;
        primeNum.push_back(tmp);
    }
    for(auto i : primeNum){
        bool isPrime = false;
        for(int j = 2; j < i; j++){
            if(i%j == 0){
                isPrime = false;
                break;
            }
            isPrime = true;
        }
        if(isPrime || i == 2){
            numOfPrime++;
        }
    }

    cout << numOfPrime << endl;
}