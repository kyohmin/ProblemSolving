class Solution {
public:
    bool isPathCrossing(string path) {
        vector<pair<int,int>> record;
        int curX = 0, curY = 0;
        record.push_back({curX,curY});

        for(char i : path){
            if(i == 'N') curY += 1;
            else if(i == 'S') curY -= 1;
            else if(i == 'E') curX += 1;
            else if(i == 'W') curX -= 1;

            for(auto i = record.begin(); i != record.end(); i++){
                if(i->first == curX && i->second == curY){
                    return true;
                }
            }

            record.push_back({curX,curY});
        }

        return false;
    }
};