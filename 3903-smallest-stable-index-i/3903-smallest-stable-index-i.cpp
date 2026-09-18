class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int min_val;
        int max_val;        
        for (int i =0; i < nums.size(); ++i) {
            max_val = *std::max_element(nums.begin(), nums.begin()+i);
            min_val = *std::min_element(nums.begin()+i, nums.begin()  + nums.size());
            if (max_val-min_val <= k) {
                return i;
            }
        }
        return -1;
    }
};