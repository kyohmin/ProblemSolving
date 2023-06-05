#include <iostream>

using namespace std;
int main(){
    int tmp, prevTmp;
    bool asc = false;
    bool dsc = false;
    bool mix = false;

    cin >> tmp;
    for(int i = 0; i < 7; i++){
        prevTmp = tmp;
        cin >> tmp;
        if(tmp > prevTmp) asc = true;
        else if(tmp < prevTmp) dsc = true; 
    }

    if(asc && dsc){
        cout << "mixed";
    } else if(asc){
        cout << "ascending";
    } else if(dsc){
        cout << "descending";
    }
}