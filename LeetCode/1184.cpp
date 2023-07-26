class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int lDis = 0;
        int rDis = 0;
        int n = distance.size();

        int cur = start;
        while(cur != destination){
            rDis += distance[cur];  // Calculate before because idx = distance
            cur++;
            cur = cur % n;  // Restores to index 0 if overflows

        }

        cur = start;
        while(cur != destination){
            cur--;
            if(cur < 0) cur = n-1; // Restores to max index
            lDis += distance[cur]; // Calculate after becuase idx -1 = distance
        }

        return min(lDis, rDis);
    }
};