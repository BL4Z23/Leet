class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        i = 1
        c= 0
        w = False
        t = len(s)
        for _ in range(t):
            if s[-i-c] == " ":
                i += 1
                if w:
                    break
            else:
                c+=1
                w = True
        
        return c