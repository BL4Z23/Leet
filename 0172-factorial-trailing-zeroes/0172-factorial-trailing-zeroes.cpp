class Solution {
public:
    int trailingZeroes(int n) {
        int zeros = 0;
        int i = 1;
        while (true) {
            if (n>=pow(5, i)) {
               zeros += n/(int)pow(5, i);
            } else {
                break;
            }
            ++i;
        }

        return zeros;
    }
};