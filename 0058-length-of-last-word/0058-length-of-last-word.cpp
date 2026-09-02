class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(), s.end());
            int i = 0;
            while (s[i] == ' ') {
                ++i;
            }
            size_t pos = s.find(' ', i);
            if (pos != std::string::npos) {
                return pos - i;
            } else {
                return s.length() - i;
            };
    }
};