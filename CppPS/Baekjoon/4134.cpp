/*
Problem Name: 4134. 다음 소수 
Date        : Jan-16,2024
Link        : https://www.acmicpc.net/problem/4134
Difficulty  : Silver 4
*/

#include <iostream>

using namespace std;

bool isPrime(long long num){
    if(num <= 1){
        return false;
    }
    if(num <= 2 || num <= 3){
        return true;
    }
    if(num % 2 == 0 || num % 3 == 0){
        return false;
    }
    for(long long i = 5; i*i <= num; i++){
        if(num % i == 0 || num % (i + 2) == 0){
            return false;
        }
    }

    return true;
}

int main(){
    long long rep, n;
    cin >> rep;

    for(int i =0;i<rep;i++){
        cin >> n;
        while(!isPrime(n)){
            n++;
        }
        cout << n << endl;
    }
}

/*
[Self Reflection]
    Key Point: Know how to differentiate prime number. (Brute Force) 
*/