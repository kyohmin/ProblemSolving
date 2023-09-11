#include <iostream>
#include <queue>

using namespace std;
int main(){
    queue<int> queue;
    int num;

    cin >> num;
    for(int i = 1; i <= num; i++){  // Finding divisor
        if(num % i == 0){
            queue.push(i);
        }
    }

    queue.pop();  // Erase #1 queued in index 1

    while(num != 1){
        if(num % queue.front() == 0){
            cout << queue.front() << '\n';
            num /= queue.front();
        } else {
            queue.pop();
        }

    }

    return 0;
}