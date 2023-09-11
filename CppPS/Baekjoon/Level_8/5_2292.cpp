#include <iostream>

using namespace std;
int main(){
    int num;
    cin >> num;
    int step = 1;
    int rooms = 1;
    while(rooms < num){    // Escape while statement when num exceeds maxRoomSize
        rooms += 6*step;
        step++;
    }

    cout << step;
}