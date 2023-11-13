class Solution
{
    public:
    int shortestCommonSupersequence(string X, string Y, int m, int n) {
    vector<vector<int>> dp(m + 1, vector<int>(n + 1));

    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0)
                dp[i][j] = j;
            else if (j == 0)
                dp[i][j] = i;
            else if (X[i - 1] == Y[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = 1 + min(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    int i = m, j = n;
    string result = "";
    while (i > 0 && j > 0) {
        if (X[i - 1] == Y[j - 1]) {
            result = X[i - 1] + result;
            i--;
            j--;
        } else {
            if (dp[i - 1][j] < dp[i][j - 1]) {
                result = X[i - 1] + result;
                i--;
            } else {
                result = Y[j - 1] + result;
                j--;
            }
        }
    }

    while (i > 0) {
        result = X[i - 1] + result;
        i--;
    }

    while (j > 0) {
        result = Y[j - 1] + result;
        j--;
    }

    return result.length();
}
};