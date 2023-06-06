#include <iostream>

using namespace std;
int main(){
    int sum = 0;
    int angle[3];
    for(int i = 0; i < 3; i++){
        cin >> angle[i];
        sum += angle[i];
    }

    if(angle[0] == angle[1] && angle[0] == angle[2] && angle[0] == 60){
        cout << "Equilateral";
    } else if(sum == 180 && (angle[0] == angle[1] || angle[0] == angle[2] || angle[1] == angle[2])){
        cout << "Isosceles";
    } else if(sum == 180 && angle[0] != angle[1] && angle[0] != angle[2] && angle[1] != angle[2]){
        cout << "Scalene";
    } else {
        cout << "Error";
    }

}