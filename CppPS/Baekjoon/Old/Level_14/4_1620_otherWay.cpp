#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    map<string,string> numPocket, namePocket;

    int cnt = 1;

    int rep, quizzes;
    cin >> rep >> quizzes;
    for(int i = 0; i < rep; i++){
        string name;
        cin >> name;
        numPocket.insert({to_string(cnt), name});
        namePocket.insert({name, to_string(cnt)});

        cnt++;
    }

    for(int i = 0; i < quizzes; i++){
        string quiz;
        cin >> quiz;

        if(numPocket.find(quiz) != numPocket.end()){
            cout << numPocket.find(quiz) -> second << '\n';
        } else {
            cout << namePocket.find(quiz) -> second << '\n';
        }
    }

}