#include <iostream>
#include <string>

using namespace std;
int main(){
    string word;
    string buffer;
    int cnt;
    bool isGrp;
    char prev;

    int rep;
    cin >> rep;
    for(int i = 0; i < rep; i++){
        cin >> word;
        for(int j = 0; j < word.size(); j++){
            auto exist = buffer.find(word[j]);
            if(buffer.size() != 0) prev = word[j-1];
            if((exist != string::npos && prev == word[j]) || exist == string::npos){
                buffer.push_back(word[j]);
                isGrp = true;
            } else {
                isGrp = false;
                break;
            }
        }

        if(isGrp) cnt++;
        buffer.clear();
    }

    cout << cnt;

    return 0;
}