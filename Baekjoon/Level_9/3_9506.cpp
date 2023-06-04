#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> divisor;
    int num;
    while(true){
        divisor.clear();
        int sum = 0;
        cin >> num;

        if(num == -1) break;

        for(int i = 1; i < num; i++){
            int tmp = num % i;
            if(tmp == 0 && find(divisor.begin(),divisor.end(),i) == divisor.end()){
                divisor.push_back(i);
                sum += i;
            }
        }

        sort(divisor.begin(),divisor.end());

        if(sum != num){
            cout << num << " is NOT perfect." << endl;
        } else {
            cout << num << " = ";
            for(int i :divisor){
                if(i != *(divisor.end()-1)){
                    cout << i << " + ";
                } else {
                    cout << i;
                }
            }
            cout << endl;
        }
    }
}