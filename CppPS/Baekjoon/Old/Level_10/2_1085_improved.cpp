#include <iostream>
#include <algorithm>

using namespace std;
int main() {
    int x,y,w,h;
    int xMin,yMin;
    cin >> x >> y >> w >> h;

    xMin = min(x,y);
    yMin = min(w-x,h-y);
    cout << min(xMin,yMin);
}