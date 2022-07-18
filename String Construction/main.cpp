#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int solve(vector<string>& strings, int a, int b) {
    int n = strings.size();
    vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(a + 1, vector<int>(b + 1)));
    for (int i = 1; i <= n; i++) {
        int ta = 0, tb = 0;
        for (auto c: strings[i - 1]) {
            if (c == 'A') ta++;
            else tb++;
        }
        for (int j = 0; j <= a; j++) {
            for (int k = 0; k <= b; k++) {
                dp[i][j][k] = max(dp[i][j][k], dp[i - 1][j][k]);
                if (j >= ta && k >= tb) {
                    dp[i][j][k] = max(dp[i][j][k], dp[i - 1][j - ta][k - tb] + 1);
                }
            }
        }
    }
    return dp[n][a][b];
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

