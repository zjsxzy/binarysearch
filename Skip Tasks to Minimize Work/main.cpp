#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int solve(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return 0;
    vector<vector<int>> dp(n, vector<int>(2, 1e9));
    dp[0][0] = 0; dp[0][1] = nums[0];
    for (int i = 1; i < n; i++) {
        dp[i][0] = dp[i - 1][1];
        dp[i][1] = min(dp[i - 1][0], dp[i - 1][1]) + nums[i];
    }
    return min(dp[n - 1][0], dp[n - 1][1]);
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

