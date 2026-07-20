class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();

        int total = m * n;
        int shift = k % total;

        vector<vector<int>> ans(n, vector<int>(m, 0));

        for (int s = 0; s < shift; s++) {

            // Store last element before shifting
            int last = grid[n - 1][m - 1];

            for (int i = n - 1; i >= 0; i--) {

                for (int j = m - 1; j > 0; j--) {
                    grid[i][j] = grid[i][j - 1];
                }

                // First element of current row gets
                // last element of previous row
                if (i > 0) {
                    grid[i][0] = grid[i - 1][m - 1];
                }
            }

            // Last element moves to first
            grid[0][0] = last;
        }

        // Copy shifted grid into ans
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                ans[i][j] = grid[i][j];
            }
        }

        return ans;
    }
};