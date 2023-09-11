#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main(){
    double gpa, sumCredit, credit, sum;
    string gradeArr[9]{"A+","A0","B+","B0","C+","C0","D+","D0","F"};
    double gradeVal[9]{4.5,4.0,3.5,3.0,2.5,2.0,1.5,1.0,0.0};
    
    string course, grade;

    int rep = 20;
    for(int i = 0; i < rep; i++){
        cin >> course >> credit >> grade;

        if(grade != "P"){
            auto findingIdx = find(gradeArr,gradeArr+9,grade) - gradeArr;
            sum += gradeVal[findingIdx] * credit;
            sumCredit += credit;
        }
    }

    gpa = sum/sumCredit;

    cout << fixed;
    cout.precision(6);

    cout << gpa;

    return 0;
}