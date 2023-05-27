#include <iostream>
#include <string>

using namespace std;
int main(){
    int rep;
    string word;
    cin >> rep;
    for(int i = 0; i < rep; i++){
        cin >> word;
        cout << *word.begin() << *(word.end() -1) << '\n';
    }

    return 0;
}