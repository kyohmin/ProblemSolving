// Stack
// Push, Pop, Size, Empty, Top

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function declaration
void push(vector<int> &arr, int x);
void pop(vector<int> &arr);
void sSize(vector<int> &arr);
void sEmpty(vector<int> &arr);
void top(vector<int> &arr);

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
            push(array, insertNum);
        } else if(cmd == "pop"){
            pop(array);
        } else if(cmd == "size"){
            sSize(array);
        } else if(cmd == "empty"){
            sEmpty(array);
        } else if(cmd == "top"){
            top(array);
        }
    }

    return 0;
}

// Function initialization
void push(vector<int> &arr, int x){
    arr.push_back(x);
}

void pop(vector<int> &arr){
    if(arr.size() != 0){
        cout << arr.back() << endl;
        arr.pop_back();
    } else {
        cout << "-1" << endl;
    }
}

void sSize(vector<int> &arr){
    cout << arr.size() << endl;
}

void sEmpty(vector<int> &arr){
    cout << arr.empty() << endl;
}

void top(vector<int> &arr){
    if(arr.size() != 0){
        cout << arr.back() << endl;
    } else {
        cout << "-1" << endl;
    }
}