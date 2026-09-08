class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        std::string sx = std::to_string(x);
        for (int i = 0; i <= (sx.length()/2); ++i) {
            if (sx[i] != sx[sx.length()-i-1]) {
                return false;
            }
        }
        return true;
    }
};