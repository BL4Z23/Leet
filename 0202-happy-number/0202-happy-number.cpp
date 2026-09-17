class Solution {
public:
    bool isHappy(int n) {
        int digit =  0;
        int split;
        set<int> seen;
        while (n != 1) {
            split = 0;
            while (n>0) {
                digit = n%10;
                split += digit * digit;
                n = n/10;
            }
            n = split;
            
            if (seen.count(n)) {
                return false;
            } else {
                seen.insert(n);
            }
        }
        return true;
    }
};