class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n > 0) {
            return log2(n) == floor(log2(n));
        } else {
            return false;
        }
        
    }
};