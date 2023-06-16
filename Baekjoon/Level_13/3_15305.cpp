#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    vector<int> grades;
    int students, top;
    cin >> students >> top;
    for(int i = 0; i < students; i++){
        int tmp;
        cin >> tmp;
        grades.push_back(tmp);
    }

    sort(grades.rbegin(), grades.rend());

    cout << grades[top-1] << '\n';

}