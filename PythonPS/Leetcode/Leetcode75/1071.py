class Solution:
    def gcdOfStrings(self, str1: str, str2: str) -> str:
        maxLen = max(len(str1), len(str2))

        a = len(str1)
        b = len(str2)
        c = a % b
        while c != 0:
            a = b
            b = c
            c = a % b

        minLen = b
        word = str1 + str2
        gcdString = str1[:minLen]
        
        rep =int(len(word) / minLen)
        tmp = gcdString*rep
        


        if word != tmp:
            gcdString = ""

        return gcdString
