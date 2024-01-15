#include <iostream>
#include <string>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string sen;
    while(getline(cin, sen)){
        cout << sen << '\n';
    }

    return 0;
}