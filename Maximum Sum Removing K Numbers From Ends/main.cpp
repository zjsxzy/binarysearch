#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int solve(vector<int>& nums, int k) {
    int n = nums.size();
    vector<int> sum(n + 1);
    for (int i = 0; i < n; i++) {
        sum[i + 1] = sum[i] + nums[i];
    }
    if (k == 0) return 0;
    int res = INT_MAX;
    for (int i = 1; i <= n; i++) {
        if (i < n - k) continue;
        res = min(res, sum[i] - sum[i - (n - k)]);
    }
    return sum[n] - res;
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

