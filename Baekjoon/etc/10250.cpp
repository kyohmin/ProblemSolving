#include <iostream>

using namespace std;
int main(){
    int rep;
    cin >> rep;
    for(int i = 0; i < rep; i++){
        int height, width, nth;
        int floor, room;
        cin >> height >> width >> nth;
        
        floor = nth % height;
        room = nth / height;
        if(floor == 0){
            cout << height * 100 + room << '\n';
        } else {
            cout << floor * 100 + (room + 1) << '\n';
        }
    }
}