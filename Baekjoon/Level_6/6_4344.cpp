#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int score, sum;
    double answer;
    vector<int> vector;


    int rep, num;
    cin >> rep;
    for(int i = 0; i < rep; i++){
        sum = 0;
        vector.clear();
        cin >> num;
        for(int j = 0; j < num; j++){  // Inserting into vector
            cin >> score;
            vector.push_back(score);
            sum += score;
        }

        sum /= num;

        int pass = 0;

        for(int j=0; j < num; j++){  
            if(vector[j] > sum){
                pass++;
            }
        }

        
        
        answer = (double) pass / num *100;
        answer = ceil(answer*1000) / 1000;

        cout << fixed;
        cout.precision(3);

        cout << answer << '%' << '\n';
    }

    return 0;
}