from math import comb
class Solution:
    def getRow(self, rowIndex: int) -> list[int]:
        ans = []
        for j in range(rowIndex+1):
            ans.append(comb(rowIndex, j))
        return ans