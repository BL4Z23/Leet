class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = 1;
        int word = 0;

        while (i < s.size() && s[s.size()-i] == ' ') {
            ++i;
        };

        while (i <= s.size() && s[s.size()-i] != ' ') {
            ++i;
            ++word;
        };
        return word;
        
    }
};