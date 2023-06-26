#include <iostream>
#include <queue>

using namespace std;
int main(){
    queue<int> result, table;
    int people, nth;

    cin >> people >> nth;
    for(int i = 1; i <= people; i++){
        table.push(i);
    }

    int cnt = 1;
    while(table.size() != 0){
        if(cnt == nth){
            result.push(table.front());
            table.pop();
            cnt = 1;
        } else {
            int tmp;
            tmp = table.front();
            table.pop();
            table.push(tmp);
            cnt++;
        }
    }

    cout << "<";
    for(int i = 0; i < people; i++){
        if(i == people - 1){
            cout << result.front();
            break;
        }
        cout << result.front() << ", ";
        result.pop();
    }
    cout << ">";

}