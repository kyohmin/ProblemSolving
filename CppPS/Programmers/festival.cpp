#include <iostream>

using namespace std;
int main(){
    int rep;
    cin >> rep;
    for(int i = 0; i < rep; i++){ // repeating test cases
        int days, team;
        int costs[1000]{};
        double minAvg = 100;
        double sum;

        cin >> days >> team;

        for(int j = 0; j < days; j++){
            cin >> costs[j];
        }

        for(int j = 0; j < days; j++){ // looping through costs[]
            sum = 0;
            for(int k = j; k < days; k++){
                sum += costs[k];
                double avg = sum / (k-j+1);

                if((k-j >= team-1) && minAvg > avg){  // filter
                    minAvg = avg;
                }
            }
        }

        cout << fixed;
        cout.precision(10);

        cout << minAvg << endl;
    }
}