#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector<int> vector;
    int rep, tmp;
    cin >> rep;
    for(int i = 0; i < rep; i++){
        cin >> tmp;
        vector.push_back(tmp);
    }

    int findingNum;
    int counter = 0;
    cin >> findingNum;
    for(int i = 0; i < rep; i++){
        if(findingNum == vector[i]){
            counter ++;
        }
    }

    cout << counter;
    return 0;
}