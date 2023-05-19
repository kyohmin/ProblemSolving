class Solution {
public:
    int numberOfSteps(int num) {
        int stepCnt = 0;
        while(num > 0){
            if(num%2 == 0){
                num /= 2;
            } else {
                num -= 1;
            }
            stepCnt ++;
        }

        return stepCnt;
    }
};