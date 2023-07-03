#include <iostream>
#include <algorithm>

long long arr[10000];

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int k, n;
    cin >> k >> n;
    for(int i = 0; i < k; i++){
        cin >> arr[i];
    }

    long long maxLen = *max_element(arr,arr+k);

    long long start = 1;
    long long end = maxLen;
    long long mid;
    long long answer = 0;

    while(start <= end){
        mid = (start + end) / 2;
        long long cnt = 0;

        for(int i = 0; i < k; i++){
            cnt += arr[i] / mid;
        }

        if(cnt >= n){
            start = mid +1;
            answer = max(answer,mid);
        } else {
            end = mid -1;
        }
    }

    cout << answer;
}