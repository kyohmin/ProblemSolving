#include <iostream>

using namespace std;

void init();

int main(){
    init();

    int minecraft[500][500];
    int minHeight = 257, maxHeight = -1;
    
    int n, m, b;
    cin >> n >> m >> b;

    for(int i = 0; i < n; i++){  // Finding the height range
        for(int j = 0; j < m; j++){
            cin >> minecraft[i][j];

            if(minHeight > minecraft[i][j]) minHeight = minecraft[i][j];
            if(maxHeight < minecraft[i][j]) maxHeight = minecraft[i][j];
        }
    }

    int time = 500*500*256*2;
    int height = -1;
    for(int i = minHeight; i <= maxHeight; i++){
        int add = 0, remove = 0;
        int block = b;

        for(int j = 0; j < n; j++){
            for(int k = 0; k < m; k++){
                if(i > minecraft[j][k]){ // current target height is bigger
                    add += i - minecraft[j][k];
                    block -= i - minecraft[j][k];
                } else if(i < minecraft[j][k]){
                    remove += minecraft[j][k] - i;
                    block += minecraft[j][k] - i;
                }
            }
        }

        int record = remove * 2 + add;

        if(time >= record && block >= 0 && height < i){
            time = record;
            height = i;
        }
    }

    cout << time << " " << height;

}

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}