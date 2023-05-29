#include <iostream>

using namespace std;
int main()
{
    string word;
    cin >> word;

    int size = word.size();
    int isPal = 1;

    for(int i=0; i<size/2; i++){
        if(word[i] != word[size-1-i]){
            isPal = 0;
        }
    }
    
    cout << isPal;

    return 0;
}