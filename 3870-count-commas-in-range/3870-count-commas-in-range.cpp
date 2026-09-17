class Solution {
public:
    int countCommas(int n) {
        int commas = 0;
        if (n >= 1000) {
            n = n - 999;
            commas += n;
        }
        if (n >= 1000000) {
            n = n - 1000000 + 1;
            commas += n;
        }

        return commas;
    }
};