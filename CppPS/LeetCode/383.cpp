class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int alphabet[26]{};
        for(char i : magazine){
            int tmp = (int) i;
            tmp -= (int) 'a';
            alphabet[tmp]++;
        }

        for(char i : ransomNote){
            int tmp = (int) i;
            tmp -= (int) 'a';
            alphabet[tmp]--;
        }

        for(int i : alphabet){
            if(i < 0){
                return false;
            }
        }

        return true;
    }
};