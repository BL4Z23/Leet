from math import comb
class Solution:
    def generate(self, numRows: int) -> list[list[int]]:
        ans = []
        if numRows == 0:
            return []
        for i in range(0, numRows):
            ans.append([])
            for j in range(i+1):
                ans[i].append(comb(i, j))
        return ans