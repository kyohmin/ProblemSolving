#include <iostream>
#include <unordered_set>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    unordered_set<int> numbers;
    int rep;
    cin >> rep;
    for(int i = 0; i < rep; i++){
        int tmp;
        cin >> tmp;
        numbers.insert(tmp);
    }

    cin >> rep;
    for(int i = 0; i < rep; i++){
        int tmp;
        cin >> tmp;
        if(numbers.find(tmp) != numbers.end()){
            cout << "1" << '\n';
        } else {
            cout << "0" << '\n';
        }
    }
}