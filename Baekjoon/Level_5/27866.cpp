#include <iostream>
#include <string>

using namespace std;
int main(){
    string word;
    int idx;
    cin >> word >> idx;

    cout << word[idx-1];

    return 0;
}