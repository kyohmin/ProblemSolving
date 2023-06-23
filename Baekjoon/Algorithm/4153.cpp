#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;
int main(){

    while(true){
        int a,b,c;
        int triangle[3];
        for(int i = 0; i < 3; i++){
            int tmp;
            cin >> tmp;
            triangle[i] = tmp;
        }

        if(triangle[0] == 0 && triangle[1] == 0 && triangle[2] == 0) break;

        sort(triangle,triangle+3);

        if(pow(triangle[0],2) + pow(triangle[1],2) == pow(triangle[2],2)){
            cout << "right" << '\n';
        } else {
            cout << "wrong" << '\n';
        }
    }
    
    

}