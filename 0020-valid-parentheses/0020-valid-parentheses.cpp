class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> d;
        stack<char> sta;
        d['('] = ')';
        d['{'] = '}';
        d['['] = ']';
        for (char c : s) {
            if (d.contains(c)) {
                sta.push(d[c]);
            } else {
                if (!sta.empty()) {
                    if (sta.top() == c) {
                        sta.pop();
                    } else {
                        return false;
                    }
                } else {
                    return false;
                }
            }
        }
        return !sta.empty();
    }
};