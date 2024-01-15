#include <iostream>

using namespace std;
int main(){
    bool array[100][100];
    fill(array[0], array[0]+10000, false);
    int sum = 0;

    int rep, x, y;
    cin >> rep;
    for(int i = 0; i < rep; i++){
        cin >> x >> y;
        for(int j = x; j < x+10; j++){
            for(int k = y; k < y+10; k++){
                
                if(!array[j][k]){
                    array[j][k] = true;
                    sum++;
                }
            }
        }
    }

    cout << sum;

    return 0;
}