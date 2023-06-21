#include <iostream>
#include <deque>

using namespace std;
int main(){
    
    deque<int> deque;
    int n;
    cin >> n;
    for(int i = n; i >= 1; i--){
        deque.push_back(i);
    }

    while(deque.size() != 1){
        deque.pop_back();

        int tmp = deque.back();
        deque.pop_back();
        deque.push_front(tmp);
    }

    cout << deque.back();

}