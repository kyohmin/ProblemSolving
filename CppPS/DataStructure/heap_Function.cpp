#include <iostream>
#include <vector>
#include <queue>

using namespace std;


// Make heap
int main(){
    // Max Heap with Vector
    vector<int> v1 = {20, 30, 40, 25, 15};
    make_heap(v1.begin(), v1.end());

    cout << "THE MAX ELEMENT IN THE HEAP : " << v1.front() << endl;


    // Max Heap
    priority_queue<int> pq1;
    pq1.push(1);
    pq1.push(2);

    while(pq1.empty() == false){
        cout << pq1.top() << endl;
        pq1.pop();
    }

    // Min Heap
    priority_queue<int,vector<int>, greater<int>> pq2;
    pq2.push(1);
    pq2.push(2);

    while(pq2.empty() == false){
        cout << pq2.top() << endl;
        pq2.pop();
    }
    

}