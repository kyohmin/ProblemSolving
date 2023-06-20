#include <iostream>
#include <map>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    map<int,int> cards;

    int rep;
    cin >> rep;
    for(int i = 0; i < rep; i++){
        int tmp;
        cin >> tmp;
        
        if(cards.find(tmp) == cards.end()){  // Doesn't exist
            cards.insert({tmp, 1});
        } else {  // Exists
            cards.find(tmp) -> second++;
        }
    }

    int mRep;
    cin >> mRep;
    for(int i = 0; i < mRep; i++){
        int tmp;
        cin >> tmp;
        if(cards.find(tmp) == cards.end()){
            cout << 0 << ' ';
        } else {
            cout << cards.find(tmp) -> second << ' ';
        }
    }

    return 0;
}