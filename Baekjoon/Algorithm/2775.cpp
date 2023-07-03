#include <iostream>
#include <string>

using namespace std;

int arr[15][15];  // 0 floor, 1 room

int howMany(int floor, int room){
    if(floor == 0){
        return room;
    }
    
    if(arr[floor][room]){
        return arr[floor][room];
    }

    int sumOfSameFloor = 0;
    for(int i = 1; i <= room; i++){
        sumOfSameFloor += howMany(floor-1,i);
    }

    arr[floor][room] = sumOfSameFloor;
    
    return arr[floor][room];
}

int main(){
    int testCase;
    cin >> testCase;
    for(int i = 0; i < testCase; i++){
        int floor, room;
        cin >> floor >> room;
        cout << howMany(floor, room) << '\n';
    }



}
