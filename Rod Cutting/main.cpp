#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int solve(vector<int>& prices, int n) {
    int m = prices.size();
    vector<int> dp(n + 1);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            dp[i] = max(dp[i], dp[i - j] + prices[j - 1]);
        }
    }
    return dp[n];
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

