#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int solve(string s0, string s1) {
    int n = s0.size(), m = s1.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1));
    int res = INT_MIN;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (s0[i - 1] == s1[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = 0;
            }
            res = max(res, dp[i][j]);
        }
    }
    return res;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

