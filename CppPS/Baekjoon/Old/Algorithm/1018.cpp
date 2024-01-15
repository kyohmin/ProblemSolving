#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string WB[8] = {
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW"
};
string BW[8] = {
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB"
};

string board[50];

int WB_cnt(int x, int y){
    int cnt = 0;
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(board[x+i][y+j] != WB[i][j]){
                cnt++;
            }
        }
    }
    return cnt;
}

int BW_cnt(int x, int y){
    int cnt = 0;
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(board[x+i][y+j] != BW[i][j]){
                cnt++;
            }
        }
    }
    return cnt;
}

int main(){
    int minCnt = 64;
    int height, width;
    cin >> height >> width;

    for(int i = 0; i < height; i++){
        cin >> board[i];
    }

    for(int i = 0; i <= height -8; i++){
        for(int j = 0; j <= width -8; j++){
            if(minCnt > min(WB_cnt(i,j),BW_cnt(i,j))){
                minCnt = min(WB_cnt(i,j),BW_cnt(i,j));
            }
        }
    }

    cout << minCnt;
}