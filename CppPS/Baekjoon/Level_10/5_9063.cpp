#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main(){
    vector<int> x, y;
    int rep;
    cin >> rep;
    for(int i = 0; i < rep; i++){
        int tmp1, tmp2;
        cin >> tmp1 >> tmp2;
        x.push_back(tmp1);
        y.push_back(tmp2);
    }

    auto xMM = minmax_element(x.begin(),x.begin()+rep);
    auto yMM = minmax_element(y.begin(),y.begin()+rep);

    int width, height;

    width = *xMM.second - *xMM.first;
    height = *yMM.second - *yMM.first;

    cout << width * height;

}