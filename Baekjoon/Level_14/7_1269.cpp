#include <iostream>
#include <set>

using namespace std;
int main(){
    set<int> a,b;
    set<int> aMb, bMa;   // a Minus b & b Minus a

    int aSize, bSize;
    cin >> aSize >> bSize;

    for(int i = 0; i < aSize; i++){
        int tmp;
        cin >> tmp;
        a.insert(tmp);
    }

    for(int i = 0; i < bSize; i++){
        int tmp;
        cin >> tmp;
        b.insert(tmp);
    }

    int commonA = 0;
    for(int i : a){
        if(b.find(i) != b.end()){
            commonA++;
        }
    }

    int commonB = 0;
    for(int i : b){
        if(a.find(i) != a.end()){
            commonB++;
        }
    }

    cout << aSize + bSize - commonA - commonB;

}