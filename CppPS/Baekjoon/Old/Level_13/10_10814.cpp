#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <tuple>

using namespace std;

bool compare(tuple<int,int,string> a, tuple<int,int,string> b){
    if(get<0>(a) == get<0>(b)){
        return get<1>(a) < get<1>(b);
    }

    return get<0>(a) < get<0>(b);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<tuple<int,int,string>> vec;
    int order = 0;
    
    int rep;
    cin >> rep;
    for(int i = 0; i < rep; i++){
        int age;
        string name;
        cin >> age >> name;

        vec.push_back(make_tuple(age,order,name));

        order++;
    }

    sort(vec.begin(),vec.end(),compare);

    for(tuple<int,int,string> i : vec){
        cout << get<0>(i) << " " << get<2>(i) << '\n';
    }
}