class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n = arr.size();

        int i = 0;
        int sum = 0;
        int mini = INT_MAX;

        vector<int> res(n, INT_MAX);

        for (int j = 0; j < n; j++) {
            sum += arr[j];

            while (sum > target && i <= j) {
                sum -= arr[i];
                i++;
            }

            if (sum == target) {
                int len = j - i + 1;

                if (i > 0 && res[i - 1] != INT_MAX) {
                    mini = min(mini, len + res[i - 1]);
                }
            }

            if (j > 0) {
                res[j] = res[j - 1];
            }

            if (sum == target) {
                res[j] = min(res[j], j - i + 1);
            }
        }

        return mini == INT_MAX ? -1 : mini;
    }
};