// Dice game

#include <iostream>
#include <limits>

using namespace std;
int main(){
    int dice[3];
    int winningPrice;
    cin >> dice[0] >> dice[1] >> dice[2];

    if(dice[0] == dice[1] && dice[0] == dice[2]){         // All dice
        winningPrice = 10000 + dice[0]*1000;
    } else if(dice[0] == dice[1] || dice[0] == dice[2]){  // Two dice
        winningPrice = 1000 + dice[0]*100;
    } else if(dice[1] == dice[2]){
        winningPrice = 1000 + dice[1]*100;
    } else {                                              // Single dice
        int biggestNum = dice[0];
        for(int i = 0; i < 3; i++){
            if(biggestNum < dice[i]){
                biggestNum = dice[i];
            }
        }
        winningPrice = biggestNum * 100;
    }


    cout << winningPrice << endl;

    return 0;
}