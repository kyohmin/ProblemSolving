#include <iostream>
#include <queue>

using namespace std;
int main(){
    queue<int> queue;
    int rep, num;
    int tmp;

    cin >> rep >> num;
    for(int i = 0; i < rep; i++){
        cin >> tmp;
        if(tmp < num)
            queue.push(tmp);
    }

    rep = queue.size();
    for(int i = 0; i < rep; i++){
        cout << queue.front() << ' ';
        queue.pop();
    }

    return 0;

}