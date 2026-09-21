class Solution {
public:
    int findGCD(vector<int>& nums) {
        auto [mn, mx] = minmax_element(nums.begin(), nums.end());
        return std::gcd(*mn, *mx);
    }
};