#include <iostream>

using namespace std;
int main(){
    int x, y, w, h;
    double xMid, yMid;
    int minDistance;

    cin >> x >> y >> w >> h;
    xMid = (double) w / 2;
    yMid = (double) h / 2;

    if(x < xMid){
        minDistance = x;
    } else {
        minDistance = w-x;
    }

    if(y < yMid){
        if(minDistance > y){
            minDistance = y;
        }
    } else {
        if(minDistance > (h-y)){
            minDistance = h-y;
        }
    }

    cout << minDistance;
}


// [Reason why I was wrong]
//  line 10 & 11
//  - I initially calculated without a (double) conversion
//  - int / int defining to a double variable becomes int
//
//  overall the code is dirty 