#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    map<int,string> dictionary;

    int inRep, quizzes;
    int num = 1;

    cin >> inRep >> quizzes;

    for(int i = 0; i < inRep; i++){
        string name;
        cin >> name;

        dictionary.insert({num,name});
        num++;
    }

    for(int i = 0; i < quizzes; i++){
        string quiz;
        cin >> quiz;

        if(quiz[0] >= (int) '0' && quiz[0] <= (int) '9'){
            cout << dictionary.find(stoi(quiz))->second << '\n';
        } else {
            for(auto it = dictionary.begin(); it != dictionary.end(); it++){
                if(it -> second == quiz){
                    cout << it -> first << '\n';
                    break;
                }
            }
        }
    }

}