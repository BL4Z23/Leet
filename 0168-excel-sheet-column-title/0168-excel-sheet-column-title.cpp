#include <cmath>
class Solution {
public:
    string convertToTitle(int columnNumber) {
        std::string ans = "";
        int powe;
        while (columnNumber > 0) {
            columnNumber--;
            ans += char('A' + columnNumber % 26);
            columnNumber /= 26;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};