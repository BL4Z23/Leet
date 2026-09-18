class Solution {
public:
    int countCommas(int n) {
        int comma = 0;
        for (int num = 1; num <= 2; ++num ) {
            if (n >= pow(1000, num)) {
                comma += (n - pow(1000, num) + 1);
            } else {
                break;
            }
        }
        return comma;
    }
};