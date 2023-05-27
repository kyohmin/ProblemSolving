#include <iostream>
#include <algorithm>

using namespace std;
int main(){
    int max = -1;
    int rep;

    cout.precision(5);

    cin >> rep;
    double *scoreList = new double[rep];

    for(int i = 0; i < rep; i++){
        cin >> scoreList[i];
        if(scoreList[i] > max){
            max = scoreList[i];
        }
    }

    double sum = 0;
    double average;

    for(int i = 0; i < rep; i++){
        sum += (scoreList[i] / max) * 100;
    }

    average = sum/rep;

    cout << average;

    return 0;
}