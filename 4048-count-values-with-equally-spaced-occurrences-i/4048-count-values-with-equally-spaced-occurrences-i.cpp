class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int, vector<int>> ind;
        int ans = 0;
        for (int i = 0; i < nums.size(); ++i) {
            ind[nums[i]].push_back(i);
        }
        for (auto& [key, values] : ind) {
            if (ind[key].size() == 3) {
                if (ind[key][1] - ind[key][0] == ind[key][2] - ind[key][1]) {
                    ++ans;
                }
            }
        }
        return ans;
    }
};