#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main(){
    string buffer, word;
    int wordCnt = 0;
    cin >> word;
    
    for(int i = 0; i < word.size(); i++){
        buffer.push_back(word[i]);
        if(buffer.find("c=") != string::npos){
            wordCnt += buffer.size() -1;
            buffer.clear();
        } else if(buffer.find("c-") != string::npos){
            wordCnt += buffer.size() -1;
            buffer.clear();
        } else if(buffer.find("dz=") != string::npos){
            wordCnt += buffer.size() -2;
            buffer.clear();
        } else if(buffer.find("d-") != string::npos){
            wordCnt += buffer.size() -1;
            buffer.clear();
        } else if(buffer.find("lj") != string::npos){
            wordCnt += buffer.size() -1;
            buffer.clear();
        } else if(buffer.find("nj") != string::npos){
            wordCnt += buffer.size() -1;
            buffer.clear();
        } else if(buffer.find("s=") != string::npos){
            wordCnt += buffer.size() -1;
            buffer.clear();
        } else if(buffer.find("z=") != string::npos){
            wordCnt += buffer.size() -1;
            buffer.clear();
        }
    }

    wordCnt += buffer.size();

    cout << wordCnt;

    return 0;
}