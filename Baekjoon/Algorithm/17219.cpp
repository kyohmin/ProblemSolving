#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    unordered_map<string,string> pass;

    int sites, questions;
    cin >> sites >> questions;

    for(int i = 0; i < sites; i++){
        string name, password;
        cin >> name >> password;
        pass.insert({name,password});
    }

    for(int i = 0; i < questions; i++){
        string website;
        cin >> website;
        cout << pass.find(website)->second << '\n';
    }
}