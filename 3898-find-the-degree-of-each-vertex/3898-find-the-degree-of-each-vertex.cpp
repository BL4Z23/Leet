class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        std::vector<int> count(matrix.size());
        for (int n = 0; n < matrix.size(); ++n) {
            for (int k = n; k < matrix.size(); ++k) {
                if (matrix[n][k] == 1) {
                    if (n != k) {
                        ++count[n];
                        ++count[k];
                    } else {
                        ++count[n];
                    }
                }
            }   
        }
        return count;  
    }
};