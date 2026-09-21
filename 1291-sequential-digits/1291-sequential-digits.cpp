class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        std::string dic = "123456789";
        vector<int> ans;
        int lowLen = std::to_string(low).size();
        int highLen = std::to_string(high).size();
        for (int i = lowLen; i <= highLen && i <= 9; ++i) {
            for (int j = 0; j + i <= 9; ++j) {
                int num = stoi(dic.substr(j, i));
                if (low <= num && num <= high) {
                    ans.push_back(num);
                }
            }
        }
        return ans;
    }
};