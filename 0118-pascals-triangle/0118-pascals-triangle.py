class Solution:
    def generate(self, numRows: int) -> list[list[int]]:
        ans = []
        if numRows == 0:
            return []
        ans.append([1])
        for i in range(1, numRows):
            if i != 1:
                ans.append([1])
                for j in range(i-1):
                    ans[i].append(int(ans[i-1][j]) + int(ans[i-1][j+1]))
                ans[i].append(1)
            else:
                ans.append([1, 1])
        return ans
        