#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int solve(string s) {
    int n = s.size();
    s = " " + s;
    vector<vector<int>> dp(n + 1, vector<int>(n + 1));
    int res = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (s[i] == s[j]) {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + 1);
                res = max(res, dp[i][j]);
            }
        }
    }
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

