#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int solve(vector<vector<int>>& matrix) {
    int n = matrix.size();
    if (n == 0) return 0;
    int m = matrix[0].size();
    vector<vector<int>> dp(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            dp[i][j] = matrix[i][j];
            if (i > 0) dp[i][j] = max(dp[i][j], dp[i - 1][j] + matrix[i][j]);
            if (j > 0) dp[i][j] = max(dp[i][j], dp[i][j - 1] + matrix[i][j]);
        }
    }
    return dp[n - 1][m - 1];
}

int main() {
#ifndef ONLINE_JUDGE
   (void)!freopen("in.txt", "r", stdin);
#endif
   int ts = 1;
   // cin >> ts;
   for (int t = 1; t <= ts; t++) {
       solve();
   }
   return 0;
}

