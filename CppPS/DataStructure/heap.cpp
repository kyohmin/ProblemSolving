#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> vec;
int idx;

void pushHeap(int data){
    if(idx == 0){
        vec.push_back(data);
        idx++;
    } else {
        vec.push_back(data);
        idx++;
        
        int cur = idx -1;
        while(vec[cur] < vec[(cur-1) / 2]){
            swap(vec[cur], vec[(cur-1) / 2]);
            cur = (cur - 1) / 2;
        }
    }
}

void popHeap(){
    if(idx == 0) cout << 0 << '\n';
    else if(idx == 1){
        cout << vec[0] << '\n';
        idx--;
    }
    else {
        // Removed the value
        swap(vec[idx-1], vec[0]);
        cout << vec[idx-1] << '\n';
        vec.pop_back();
        idx--;

        int cur = 0;
        while(vec[cur] > vec[cur*2] && vec[cur] > vec[cur*2+1]){
            if(cur*2+1 < idx){
                if(vec[cur*2] < vec[cur*2+1]){
                    swap(vec[cur], vec[cur*2]);
                    cur = cur*2;
                } else {
                    swap(vec[cur], vec[cur*2+1]);
                    cur = cur*2+1;
                }
            } else if(cur*2 == idx-1){
                if(vec[cur] > vec[cur*2]){
                    swap(vec[cur], vec[cur*2]);
                    cur = cur*2;
                }
            }
        }
    }
}



int main(){
    int rep;
    cin >> rep;
    for(int i = 0; i < rep; i++){
        int val;
        cin >> val;
        if(val == 0){
            popHeap();
        } else {
            pushHeap(val);
        }
    }
}

    //           3
    //     4         2
    // 5     6        

    //           