#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <tuple>

using namespace std;

bool srt(tuple<string,int,int,int> a, tuple<string,int,int,int> b){
    if(get<1>(a) == get<1>(b)){
        if(get<2>(a) == get<2>(b)){
            if(get<3>(a) == get<3>(b)){
                return get<0>(a) < get<0>(b);
            }
            return get<3>(a) > get<3>(b);
        }
        return get<2>(a) < get<2>(b);

    }

    return get<1>(a) > get<1>(b);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    vector<tuple<string,int,int,int>> records;

    int students;
    cin >> students;
    for(int i = 0; i < students; i++){
        string name;
        int korean, english, math;
        cin >> name >> korean >> english >> math;
        records.push_back({name, korean,english, math});
    }


    sort(records.begin(), records.end(), srt);

    for(auto i : records){
        cout << get<0>(i) << '\n';
    }
}