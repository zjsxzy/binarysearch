#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int solve(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return 0;
    vector<vector<int>> dp(n, vector<int>(2));
    int res = 0;
    for (int i = 0; i < n; i++) {
        dp[i][1] = nums[i];
        if (i - 1 >= 0) {
            dp[i][0] = max(dp[i - 1][0], dp[i - 1][1]);
            dp[i][1] = max(dp[i][1], dp[i - 1][0] + nums[i]);
        }
        res = max(res, max(dp[i][0], dp[i][1]));
        // cout << i << ' ' << dp[i][0] << ' ' << dp[i][1] << endl;
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

