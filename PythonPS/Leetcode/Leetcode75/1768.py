class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        result = ""
        idx = 0
        for i in range(min(len(word1), len(word2))):
            result += word1[i]
            result += word2[i]
            idx = i
        result += word1[idx+1:]
        result += word2[idx+1:]

        return result