class Solution {
public:
    int reverseDegree(string s) {
        int ans = 0;
        for (int i = 1; i < s.length() + 1; ++i) {
            ans += (('z' - s[i-1] + 1)*i);
        }
        return ans;
    }
};