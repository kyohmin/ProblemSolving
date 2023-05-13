// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long left, mid, right;
        left = 1;
        right = n;
        
        long long latestBad = -1;
        while(left <= right){
            
            mid = (right+left) / 2;
            if(!isBadVersion(mid)){
                left = mid +1;
            } else if(isBadVersion(mid)){
                latestBad = mid;
                right = mid -1;
            }
        }

        return latestBad;

    }
};