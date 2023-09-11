// Oven Timer

#include <iostream>

using namespace std;
int main(){
    int hour, min, timeMin;
    cin >> hour >> min >> timeMin;
    
    min += timeMin;  // Add time
    while(min > 59){
        min -= 60;
        hour += 1;
    }
    while(hour > 23){
        hour -= 24;
    }

    cout << hour << " " << min << endl;

    return 0;
}