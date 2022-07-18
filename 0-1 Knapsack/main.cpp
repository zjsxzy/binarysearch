#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int solve(vector<int>& weights, vector<int>& values, int capacity) {
    vector<int> dp(capacity + 1);
    int n = weights.size();
    for (int i = 1; i <= n; i++) {
        int w = weights[i - 1], v = values[i - 1];
        vector<int> newdp = dp;
        for (int j = 0; j <= capacity; j++) {
            if (j >= w) {
                newdp[j] = max(newdp[j], dp[j - w] + v);
            }
        }
        dp = newdp;
    }
    return dp[capacity];
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

