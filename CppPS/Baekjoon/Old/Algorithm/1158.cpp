#include <iostream>
#include <queue>

using namespace std;
int main(){
    queue<int> answer;
    queue<int> queue;

    int total, num;

    cin >> total >> num;
    // Inserting people to the table(queue)
    for(int i = 1; i <= total; i++){
        queue.push(i);
    }

    // Removing people until it ends
    int counter = 1;
    while(!queue.empty()){
        if(counter == num){
            answer.push(queue.front());
            queue.pop();
            counter = 1;
        } else {
            queue.push(queue.front());
            queue.pop();
            counter ++;
        }
    }

    int rep = answer.size(); 
    cout << '<';
    for(int i = 0; i < rep; i++){
        if(i == rep-1){
            cout << answer.front();
            answer.pop();
        }else {
            cout << answer.front() << ", ";
            answer.pop();
        }
    }
    cout << '>';

    return 0;
}