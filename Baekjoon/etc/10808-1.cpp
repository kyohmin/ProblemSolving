#include <iostream>
#include <string>

using namespace std;
int main(){
    int alphabet[26]{};
    string word;
    cin >> word;

    for(char i : word){
        alphabet[i - 97]++;
    }

    for(int i : alphabet){
        cout << i << " ";
    }

}