class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0;
        for (int i = columnTitle.length() -1; i >= 0; --i) {
            ans += (columnTitle[i] - 'A' + 1) * (int)pow(26, columnTitle.length() - i - 1);
        }
        return ans;
    }
};