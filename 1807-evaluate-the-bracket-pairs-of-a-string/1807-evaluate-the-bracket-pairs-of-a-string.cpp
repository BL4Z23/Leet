class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string, string> str;
        for (auto& x : knowledge) {
            str[x[0]] = x[1];
        }
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '(') {
                int end = s.find(')', i);
                string kee = s.substr(i + 1, end - i - 1);
                if (str.count(kee)) {
                    s.replace(i, end - i + 1, str[kee]);
                } else {
                    s.replace(i, end - i + 1, "?");
                }
            }
        }
        return s;
    }
};