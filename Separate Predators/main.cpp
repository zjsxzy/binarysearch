#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int solve(vector<int>& nums) {
    int n = nums.size();
    vector<int> deg(n), f(n);
    for (auto x: nums) {
        if (x != -1) deg[x]++;
    }
    queue<int> q;
    for (int i = 0; i < n; i++) {
        if (deg[i] == 0) q.push(i);
        f[i] = 1;
    }
    int res = 1;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        int v = nums[u];
        if (v == -1) continue;
        deg[v]--;
        f[v] = f[u] + 1;
        res = max(res, f[v]);
        if (deg[v] == 0) {
            q.push(v);
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

