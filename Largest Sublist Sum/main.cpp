#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int solve(vector<int>& nums) {
    int n = nums.size();
    int inf = 1e9;
    vector<int> dp(n, -inf);
    dp[0] = nums[0];
    int res = dp[0];
    for (int i = 1; i < n; i++) {
        dp[i] = max(dp[i - 1] + nums[i], nums[i]);
        res = max(res, dp[i]);
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

