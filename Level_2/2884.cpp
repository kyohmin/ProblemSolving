// Alarm
// But calculates 45 min earlier

#include <iostream>

using namespace std;
int main(){
    int hour, min;
    cin >> hour >> min;

    min -= 45;    // Take out 45 minutes
    if(min < 0){  // Min setting
        min += 60;
        hour -= 1;
    }
    if(hour < 0){
        hour += 24;
    }

    cout << hour << " " << min << endl;

    return 0;
}