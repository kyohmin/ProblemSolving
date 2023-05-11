#include <iostream>
#include <string>

using namespace std;
int main(){
    string sen;
    sen = "Hi";

    cout << sen.front() << endl;
    sen.erase(sen.begin() + 0);
    cout << sen;
}