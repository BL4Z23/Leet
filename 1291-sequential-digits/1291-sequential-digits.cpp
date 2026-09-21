class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        std::string dic  = "123456789";
        vector<int> ans;
        int num = 0;
        for (int i = (int)(log10(low)) + 1; i < (int)(log10(high)) + 2; ++i ) {
            for (int j = 0; j < 9 - i + 1; ++j) {
                num = stoi(dic.substr(j, i));
                if (low <= num && num <= high) {
                    ans.push_back(num);
                }
            }
        }
        return ans;
    }
};