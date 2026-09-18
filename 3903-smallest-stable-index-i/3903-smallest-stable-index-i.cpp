class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int val;        
        for (int i =0; i < nums.size(); ++i) {
            val = *std::max_element(nums.begin(), nums.begin()+i) - *std::min_element(nums.begin()+i, nums.begin()  + nums.size());
            if (val <= k) {
                return i;
            }
        }
        return -1;
    }
};