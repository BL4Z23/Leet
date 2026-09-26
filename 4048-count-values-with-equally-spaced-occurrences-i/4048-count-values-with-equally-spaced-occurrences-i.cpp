class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int, vector<int>> ind;
        int ans = 0;
        for (int i = 0; i < nums.size(); ++i) {
            ind[nums[i]].push_back(i);
        }
        for (auto& [key, values] : ind) {
            if (values.size() == 3) {
                if (values[1] - values[0] == values[2] - values[1]) {
                    ++ans;
                }
            }
        }
        return ans;
    }
};