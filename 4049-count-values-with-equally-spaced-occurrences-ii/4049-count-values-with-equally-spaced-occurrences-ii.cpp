class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int, vector<int>> ind;
        int ans = 0;
        for (int i = 0; i < nums.size(); ++i) {
            ind[nums[i]].push_back(i);
        }
        for (auto& [key, values] : ind) {
            if (values.size() >= 3) {
                int diff = values[1] - values[0];
                bool isAP = true;

                for (int i = 1; i < values.size() - 1; ++i) {
                    if (values[i + 1] - values[i] != diff) {
                        isAP = false;
                        break;
                    }
                }

                if (isAP) {
                    ++ans;
                }
            }
        }
        return ans;
    }
};