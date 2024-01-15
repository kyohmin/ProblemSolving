#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b){
    int c = a % b;
    while(c != 0){
        a = b;
        b = c;
        c = a % b;
    }

    return b;
}

int gcdArr(vector<int> vec){
    int result = vec[0];
    for(int i = 1; i < vec.size(); i++){
        result = gcd(vec[i], result);

        if(result == 1) return 1;
    }

    return result;
}

int main(){
    vector<int> trees;
    vector<int> diff;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int tree;
        cin >> tree;
        trees.push_back(tree);
    }

    for(int i = 1; i < n; i++){
        int dif;
        dif = trees[i] - trees[i-1];
        diff.push_back(dif);
    }

    int len = gcdArr(diff);
    
    int cnt = 0;
    for(int i = 0; i < n-1; i++){
        cnt += (diff[i] / len) - 1;
    }

    cout << cnt;
    
}