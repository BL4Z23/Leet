class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        vector<int> cut(nums.begin() + nums.size()- k, nums.begin() + nums.size());
        nums.erase(nums.begin() + nums.size()- k, nums.begin() + nums.size());
        nums.insert(nums.begin(), cut.begin(), cut.end());

    }
};