class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>> triangle;
        if (numRows >= 1) {
            triangle.push_back({1});
        }
        if (numRows >= 2) {
            triangle.push_back({1, 1});
        }
        for (int i = 2; i < numRows; ++i) {
            triangle.push_back(vector<int>(i + 1, 0));
            triangle[i][0] = 1;
            for (int j = 1; j < i; ++j) {
                triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
            }
            triangle[i][i] = 1;
        }
        return triangle;
    }
};