class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        std::string dic = "123456789";
        vector<int> ans;
        for (int i = std::to_string(low).size(); i <= std::to_string(high).size() && i <= 9; ++i) {
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