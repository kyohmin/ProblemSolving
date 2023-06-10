#include <iostream>
#include <string>

using namespace std;
int main(){
    string sentence;
    while(getline(cin,sentence)){
        int results[4]{};

        for(char i : sentence){
            if((int) i >= 65 && (int) i <= 65+26){
                results[1]++;
            } else if((int) i >= 97 && (int) i <= 97+26){
                results[0]++;
            } else if(i == ' '){
                results[3]++;
            } else if((int) i >= 48 && (int) i <= 48+9){
                results[2]++;
            }
        }

        for(int i : results){
            cout << i << ' ';
        }
        cout << '\n';
    }
}