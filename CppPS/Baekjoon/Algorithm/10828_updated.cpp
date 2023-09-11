// Stack
// Push, Pop, Size, Empty, Top

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    // Initializing
    int size;
    string cmd;
    int insertNum;

    // Array Size and # of commands
    cin >> size;
    vector<int> array;

    // Receiving commands
    for(int i = 0; i < size; i++){
        cin >> cmd;
        if(cmd == "push"){
            cin >> insertNum;
            array.push_back(insertNum);
        } else if(cmd == "pop"){
            if(array.size() != 0){
                cout << array.back() << endl;
                array.pop_back();
            } else {
                cout << "-1" << endl;
            }
        } else if(cmd == "size"){
            cout << array.size() << endl;
        } else if(cmd == "empty"){
            cout << array.empty() << endl;
        } else if(cmd == "top"){
            if(array.size() != 0){
                cout << array.back() << endl;
            } else {
                cout << "-1" << endl;
            }
        }
    }

    return 0;
}