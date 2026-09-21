class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        std::string dic  = "123456789";
        vector<int> ans;
        for (int i = (int)(log10(low)) + 1; i < (int)(log10(high)) + 2; ++i ) {
            for (int j = 0; j < 9 - i + 1; ++j) {
                if (low <= stoi(dic.substr(j, i)) && stoi(dic.substr(j, i)) <= high) {
                    ans.push_back(stoi(dic.substr(j, i)));
                }
            }
        }
        return ans;
    }
};