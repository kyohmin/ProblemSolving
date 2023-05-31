#include <iostream>
#include <string>


std::string table[5];

using namespace std;
int main(){
    for(int i = 0; i < 5; i++){
        cin >> table[i];
    }

    for(int i = 0; i < 15; i++){
        for(int j = 0; j < 5; j++){
            if(i < table[j].size()){    // If pointer goes beyond its size
                cout << table[j][i];
            }
        }
    }

    return 0;
}

/* 
    <Important note>
    This problem can't be solved if
    you assign value to all element in 2D array

*/