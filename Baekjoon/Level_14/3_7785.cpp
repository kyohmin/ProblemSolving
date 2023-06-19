#include <iostream>
#include <string>
#include <set>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    set<string, greater<string>> employeeLog;
    int rep;
    cin >> rep;
    for(int i = 0; i < rep; i++){
        string name, entered;
        cin >> name >> entered;

        if(employeeLog.find(name) == employeeLog.end()){
            employeeLog.insert(name);
        } else {
            employeeLog.erase(name);
        }
    }

    for(string i : employeeLog){
        cout << i << '\n';
    }
}