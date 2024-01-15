class Solution {
public:
    double average(vector<int>& salary) {
        auto minMax = minmax_element(salary.begin(),salary.end());

        double avg;
        for(int i : salary){
            if(i != *minMax.first && i != *minMax.second){
                avg += i;
            }
        }

        return avg/(salary.size()-2);

    }
};