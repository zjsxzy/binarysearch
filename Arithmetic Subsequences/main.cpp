#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int solve(vector<int>& nums) {
    int res = 0, n = nums.size();
    vector<unordered_map<int, int>> dp(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            int diff = nums[i] - nums[j];
            auto it = dp[j].find(diff);
            int cnt = it == dp[j].end() ? 0 : it->second;
            res += cnt;
            dp[i][diff] += cnt + 1;
        }
    }
    return res;
}

int main() {
#ifndef ONLINE_JUDGE
   freopen("in.txt", "r", stdin);
#endif
   int ts = 1;
   // cin >> ts;
   for (int t = 1; t <= ts; t++) {
       solve();
   }
   return 0;
}

