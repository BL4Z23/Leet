class Solution {
public:
    long long countCommas(long long n) {
        int num = 1;
        long long comma = 0;
        for (int num = 1; num <= 5; ++num ) {
            if (n >= pow(1000, num)) {
                comma += (n - pow(1000, num) + 1);
            } else {
                break;
            }
        }
        return comma;
    }
};