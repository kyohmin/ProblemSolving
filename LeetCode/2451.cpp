// 100%, 87%

class Solution {
public:
    string oddString(vector<string>& words) {
        stack<string> stk;
        int rep = words.size();
        int initialDiffList[19];
        for(int i = 0; i < rep; i++){
            string curWord = words[i];
            if(i == 0){
                for(int j = 1; j < curWord.size(); j++){
                    initialDiffList[j-1] = curWord[j] - curWord[j-1];
                }
            } else {
                for(int j = 1; j < curWord.size(); j++){
                    if(initialDiffList[j-1] != curWord[j] - curWord[j-1]){
                        stk.push(curWord);
                        break;
                    }
                }
            }
        }

        if(stk.size() > 1) return words[0];
        else if(stk.size() == 1) return stk.top();

        return 0;
        

        /*
        Explanation :
            1. record the difference of inital word
            2. if the words after the inital word has a different difference numbers,
                push it to stack
            3. if the initial value had a unique difference values, then it would have
                more than 1 vlaues in stack. Meaning, all other words except the inital value will be added to the stack.
            4. if the words after the inital value had a unique value, then it would only have stack size of 1
        
        */
    }
};