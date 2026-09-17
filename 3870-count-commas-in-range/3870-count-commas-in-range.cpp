class Solution {
public:
    int countCommas(int n) {
        int commas = 0;
        int t;
        if (n >= 1000) {
            t = n - 999;
            commas += t;
        }
        if (n >= 1000000) {
            t = n - 1000000 + 1;
            commas += t;
        }
        return commas;
    }
};