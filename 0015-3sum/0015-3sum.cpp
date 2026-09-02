class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int f = 0;
        vector<vector<int>> ans;
        std::sort(nums.begin(), nums.end());

        for (int F = 0; F <= nums.size()-3; ++F) {
            if (F > 0 && nums[F] == nums[F - 1]) {
            continue;
            } else {
                int L = F + 1;
                int R = nums.size() - 1;
                while (L < R) {
                    if (nums[L] + nums[R] == -nums[F]) {
                        ans.push_back({nums[F], nums[L], nums[R]});
                        ++L;
                        --R;
                        while (L < R && nums[L] == nums[L - 1]) {
                            ++L;
                        }
                        while (L < R && nums[R] == nums[R + 1]) {
                            --R;
                        }
                    } else if (nums[L] + nums[R] < -nums[F]) {
                            ++L;
                    } else {
                        --R;
                    };
                };
            }
        }
        return ans;
    }
};