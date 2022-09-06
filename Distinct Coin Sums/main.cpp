#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int solve(vector<int>& coins, vector<int>& quantities) {
    int n = coins.size();
    int m = 0;
    for (int i = 0; i < n; i++) m += coins[i] * quantities[i];
    vector<vector<int>> dp(n + 1, vector<int>(m + 1));
    dp[0][0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            for (int k = 0; k <= quantities[i - 1]; k++) {
                if (j - k * coins[i - 1] >= 0) {
                    dp[i][j] |= dp[i - 1][j - k * coins[i - 1]];
                }
            }
        }
    }
    int res = 0;
    for (int j = 1; j <= m; j++) res += dp[n][j];
    return res;
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

