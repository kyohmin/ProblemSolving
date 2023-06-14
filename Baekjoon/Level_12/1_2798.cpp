#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector<int> cards;
    int cardNum, target;
    cin >> cardNum >> target;
    
    int curMax = -1;
    int sum;

    for(int i = 0; i < cardNum; i++){
        int tmp;
        cin >> tmp;
        cards.push_back(tmp);
    }

    for(int i = 0; i < cardNum -2; i++){
        for(int j = i+1; j < cardNum-1; j++){
            for(int k = j+1; k < cardNum; k++){
                int sum = cards[i] + cards[j] + cards[k];
                if(sum <= target && sum > curMax){
                    curMax = sum;
                }
            }
        }
    }

    cout << curMax;
}