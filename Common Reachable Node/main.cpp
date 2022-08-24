#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

bool solve(vector<vector<int>>& edges, int a, int b) {
    int n = 0;
    for (auto e: edges) {
        n = max(n, e[0]);
        n = max(n, e[1]);
    }
    n++;
    vector<int> vsta(n), vstb(n);
    vector<vector<int>> adj(n);
    for (auto e: edges) {
        adj[e[1]].push_back(e[0]);
    }
    function<void(int, vector<int>&)> dfs = [&](int u, vector<int>& vst) {
        vst[u] = true;
        for (auto v: adj[u]) {
            if (vst[v]) continue;
            dfs(v, vst);
        }
    };
    dfs(a, vsta);
    dfs(b, vstb);
    for (int i = 0; i < n; i++) {
        if (vsta[i] && vstb[i]) return true;
    }
    return false;
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

