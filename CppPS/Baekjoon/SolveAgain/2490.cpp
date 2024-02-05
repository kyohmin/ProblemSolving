/*
Problem Name: 2490. Circular Sentence
Date        : Feb-05,2024
Link        : https://leetcode.com/problems/circular-sentence/description/
Difficulty  : Easy
*/

class Solution {
public:
    bool isCircularSentence(string sentence) {
        for(int i=0;i<sentence.size();i++){
            if(sentence[i] == ' ' && sentence[i-1] != sentence[i+1]) return false;
        }  
        return sentence[0] == sentence[sentence.size()-1];
    }
};

/*
[Self Reflection]
    How the solution works:
        1. When sentence[i] is space, check if a letter before and after is same.
        2. After 'space testing' is done, check is first letter and last letter is same.
*/