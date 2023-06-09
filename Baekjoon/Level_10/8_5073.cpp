#include <iostream>
#include <algorithm>

using namespace std;
int main(){
    int side[3] = {1,1,1};
    while(true){
        int a, b, c;
        cin >> a >> b >> c;

        side[0] = a;
        side[1] = b;
        side[2] = c;

        if(side[0] == 0 && side[1] == 0 && side[2] == 0){
            break;
        }

        sort(side,side+3);

        if(side[0] == side[1] && side[0] == side[2]){
            cout << "Equilateral" << '\n';
        } else if(side[2] >= side[0] + side[1]){
            cout << "Invalid" << '\n';
        } else if(side[0] == side[1] || side[0] == side[2] || side[1] == side[2]){
            cout << "Isosceles" << '\n';
        } else {
            cout << "Scalene" << '\n';
        }

        
    }
    

}